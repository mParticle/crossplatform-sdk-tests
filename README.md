# Cross-Platform testing

Cross-Platform testing is a framework, implemented with Kotlin Multiplatform, that allows you to write a single test that will run against both the iOS and Android mParticle SDKs.

## Getting Started

#### Adding a package to you Android project

Currently, other projects can pull in any of our `api`, `models`, or `testing` modules from the artifacts published in our Github Artifact repository

In your `build.gradle` file, add:

```kotlin
repositories {
    ...
    maven {
       setUrl("https://maven.pkg.github.com/mParticle/crossplatform-sdk-tests")
    }
}

dependencies {
    ...
    implementation("com.mparticle:models:1.2.0")              // <--- add for serializable server DTOs
    ...
    androidTestImplementation("com.mparticle:testing:1.2.0")  // <--- add for `Server` and instrumented testing base classes
 }
```

transitive dependencies:
`api` -> `models`
`models`
`testing` -> `api` -> `models`

#### Writing Tests

Tests are located in the `Tests` directory.

End-to-End tests often utilize the `MockServer` API to either assert against certain messages reaching the server or simply blocking the thread until a request is sent/received.

A new `MockServer` instance is automatically initialized before every single test, as long as your test class extends one of the base classes.

* `BaseTest`: a fresh `MockServer` instance. mParticle SDK has not already been started when the tests execute.
* `BaseStartedTest`: a fresh `MockServer` instance. A fully initialized mParticle SDK instance (initial `identify()` call has completed) .

The `MockServer` instance is stored in a singleton, `server`. Tests should only interact with their `MockServer` instance through this singleton, attempting to invoke the class directly **will** lead to threading/freezing erros when run on iOS.

##### Assertions

Tests may use the `MockServer` to assert against one of the following:
* "current" requests state (have/have not already received a matching request)
* "future" requests state (will/will not be received)

For the "future" requests, you can also choose to block until the assertion passes or continue the test logic and check its state at a later point. In order to avoid race conditions in these tests, we suggest you utilize an `after { }` block to define the code that will trigger the network request at the focus of your assertion.

**log an event and block until it is received**
```kotlin
Server
    .endpoint(EndpointType.Events)
    .assertWillReceive { messageBatch: Request<BatchMessage> ->
        messageBatch.body.messages
            .filterIsInstance<MPEvent>()
            .any {
                it.eventName == "my event" && it.eventType == EventType.Social
            }
    }
    .after { mParticle.logEvent(MPEvent("my event", EventType.Social)) }
    .blockUntilFinished()
```

In the previous test we performed the following tasks:

1. Select an EndpointType. Each endpoint type will automatically populate the following methods with the correct request/response type:
    - `Events`
    - `Alias`
    - `Identity_{Login|Logout|Identify|Modify}`
    - `Config`
2. Select an "assertion type."
    - `assert{Will|WillNot}Receiver { }`
    - `assert{Has|HasNot}Received { }`
3. If *Will/WillNot*, define a "trigger" in the `after { }` block.
4. Select a continuation behavior:
    - `blockUntilFinished()`: will block and timeout after 5 seconds if the assertion is not satisfied.
    - `assertFinished()`: will check if the assertion has been satisfied and immediately fail if it has not.
    - `cancel()`: will cancel any timeout timer, if one has been set.
    - `latch`: will return an `MPLatch` instance which can be used to block at any arbitrary point in the test. This instance will automatically un-block if the assertion is satisfied.

##### Request/Response Logic

Tests may also set custom request/response logic via the `MockServer`:

**On the next config request, return a custom response**
```kotlin
Server
   .endpoint(EndpointType.Config)
   .nextResponse {
       SuccessResponse {
           ConfigResponseMessage(workspaceToken = "some token")
       }
   }
```

**For the next Events request, send a 404 failure response**
```kotlin
Server
    .endpoint(EndpointType.Events)
    .nextResponse {
        ErrorResponse(httpCode = 404, errorMessage = "some error")
    }
```

**If the next login request is from mpid=123, send a 500 failure response, otherwise keep the mpid the same**
```kotlin
Server
    .endpoint(EndpointType.Identity_Login)
    .nextResponse { request ->
        val prevMpid = request.body.previousMpid
        when (prevMpid) {
            123L -> ErrorResponse(httpCode = 500, errorMessage = "some error")
            else -> SuccessResponse {
                IdentityResponseMessage {
                    mpid = prevMpid
                }
            }
        }
    }
}
```

> caveats:
>   - (iOS) for each new test, you need to add a function in Tests/helpers/XCodeTest/XCodeTestUITests **(TODO)**
>   - (Android) simply add the @Test annotation, and it will be run automatically

#### Running Tests

###### Android  
    - start an emulator (Tools ->  AVD Manager -> Create/Select Emulator with API > 14) **(TODO)**
    - run `./gradlew runAndroid`
###### IOS (emulator starts automatically)
    - run `./gradlew runIos`

#### Viewing Test Results

For now, test results are surfaced in the terminal output. Both iOS and Android create nice, human-readable test result files.

###### Android
Sample log message


###### iOS
    - Look for a message like:
```
Test session results, code coverage, and logs:
        /Users/user-name/Library/Developer/Xcode/DerivedData/XCodeProject-ajptnsmmvxnszwawuoenjrucslyx/Logs/Test/Test-XCodeProject-2021.02.26_14-35-18--0500.xcresult

```
    - copy the file ending in `.xcresults` and run: `xed {FILE-NAME}`. This will open the file in XCode


## For Project Developers

#### Notes

##### Threading
Threading can be a pain on iOS. Kotlin cannot guarantee consistency when objects are shared across threads, so it will **automatically "Freeze"* any object that is read from a different thread than the one it was initialized  on

###### Frozen objects

Objects can be manually frozen by calling their `freeze()` method. 

- will become immutable
- attempted writes will throw Exception
- (I believe) objects can be "unfrozen" back on their initial thread, but it seems like one of those things where, if you need to do it, you are probably doing something wrong

###### applied:

The basic problem is:

1) Tests start on Thread A
2) Most tests need to access the Server (`nextRequest()`, `assertWillReceive((Request) -> Boolean))`)
4) Events in the SDKs are serialized and passed to an Upload Tread (Thread B)
5) Server receives and responses to requests on Thread B

Since there's no way around making the MockServer writable from multiple threads, we concealed it on its own thread, so it never ends up Frozen.

The thread is accessed in `testing/src/commonMain/kotlin/com/mparticle/mockserver/Utils.kt`

```
fun runOnServer(MockServer.() -> Unit)
fun <T> runOnServerAndReturn(MockServer.() -> T): T
```

**Be very careful with `runOnServerAndReturn`**

- When an object is Frozen, its properties and fields are frozen, those objects properties and fields are frozen and so on.
If an object accidentally gets frozen, and somewhere down the line it has a reference to MockServer or your test class, everything is crash at runtime, and it's kind of hard to find exactly where the problem started
  
- Use DTO's and data-only objects across threads. If they are Frozen, it's no big deal because can still Read them

- Favor immutability. Same thing as above, but Reads are no problem for frozen objects 

Stately is a super-simple library we use that handle Thread-safe object references. Use Stately by initializing objects like:

```
// initializa
val someObject = IsolateState { SomeObject() }

// access (`alsoSomeObject` is Frozen, **it** is not)
val alsoSomeObject = someObject.access { it }

// access properties (`someField` is Frozen, `it` is **not**)
val someField = someObject.access { it.someField }

// write (`someValue` will be frozen)
val someValue = SomeValue()
someObject.access { it.someField = someValue }

```

#### Problems and Solutions

##### Help, everything is red and code navigation doesn't work in the IDE!!

Potential causes:

a) compilation error in the iOS SDK/can't complete Cinterops step for some reason

1) make sure your xcode command-line tools are version 12.5 (TODO update this when it becomes moot)
2) try checking out a know, good version of the iOS SDK
3) clean -> Gradle Sync

b) Bad cache. Kotlin multiplatform caches a lot of stuff and has a pretty intensive indexing/sync stage, so when you check out a new branch, update dependency versions or change one of the underlying SDKs, sometimes it can get into a bad state. 

1) do a Gradle Sync
2) If that didn't work, either run `./gradlew clean` or in the IDE `Build -> Clean Project` and do a Gradle Sync
3) If *that* didn't work, delete the `.gradle` and `.idea` folders and do a Gradle Sync
4) If **that** didn't work, delete Gradle caches by (in the IDK) `File -> Invalidate Caches and Restart`, select everything and restart
5) If **THAT** didn't work, #1, I'm sorry you have to deal with this, #2 maybe just close everything down and restart your computer...this probably shouldn't happen

##### Stacktrace mentioning `Frozen`, especially with "endpoint" or "MockServer" mixed in

It's probably either

a) you're calling `MockServer` directly

- solution: use the `Server` object. all it's methods are wrappers around MockServer for handling the required Threading. `ServerEndpoint` is an inner class which does the same thing for `Endpoint`..use em

b) transitive reference in some object that *is* crossing threads, like if you added `var endpoint: Endpoint` in the `Request` class  or references in a an `assertWillReceive { }` closure somewhere

- solution: trace usages of whichever one of those classes ended up in the log message. on Mac, click on the Class's name and press CMD + SHIFT + B. Also, just look through your recent additions, especially in the `Server` lambdas

c) 

##### Builds fine, but hangs at runtime on iOS

Look for a tell-tail log pair (2) of 'MParticle ERROR: Hopping on Server Thread' with no "off" message in between. 
This means we jumped to the server thread, *from* the server thread or something similar. 
on iOS, the app will hang when you try to dispatch to the same Kotlin Dispatcher you are currently in. I think it is because the dispatcher is working of some kind of synchronous looper, and your new request is stuck sitting behind the original request, which is stuck waiting for the new request to run.
I can't find a reliable way to check if you are on the thread already, so you have to be careful accessing the server thread directly, and  do not self-reference  the `Server` class. 
`MockServer` and everything it touches, can only be accessed on the Server thread, so there is no need to attempt to access the Server thread from any of those classes

- solution: after looking around, try adding a `RuntimeException().printStackTrace()` where the jump to the Server Thread occurs. This way, you can see where the calls originate from (kinda) and it should be pretty easy to find from there. Note, line references are useless from the logs, they are referencing generated code, but the class + method names are still there