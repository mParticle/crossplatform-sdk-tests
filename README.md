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
    implementation("com.mparticle:models:0.1")              // <--- add for serializable server DTOs
    ...
    androidTestImplementation("com.mparticle:testing:0.1")  // <--- add for `Server` and instrumented testing base classes
 }
```

transitive dependencies:
`api` -> `models`
`models`
`testing` -> `api` -> `models`

#### Adding Tests
Tests are located in the `Tests/` directory. To add a new test, either write a new function in one of the existing classes, or create a new class and add the function into the `Tests/` directory.

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