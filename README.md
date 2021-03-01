# Cross-Platform testing

Cross-Platform testing is a framework, implemented with Kotlin Multiplatform, that allows you to write a single test that will run against both the iOS and Android mParticle SDKs.

## Getting Started

#### Adding Tests
Tests are located in the `Tests/` directory. To add a new test, either write a new function in one of the existing classes, or create a new class and add the function into the `Tests/` directory.

> caveats:
>   - (iOS) for each new test, you need to add a function in testing/XCodeProject/XCodeProjectUITests/XCodeProjectUITest.swift **(TODO)**
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
