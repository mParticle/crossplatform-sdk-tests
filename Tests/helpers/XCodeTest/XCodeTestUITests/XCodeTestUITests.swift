//
//  XCodeTestUITests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 3/2/21.
//

import XCTest;
import mParticle_Multiplatform_Tests

class XCodeTestUITests: XCTestCase {
    var sampleTests = SampleTests()
    var mediaTests = MediaTests()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {

    }

//     override func runTests() {
//         let testSuite = XCTestSuite(name: NSStringFromClass(self))
//
//         addTestsToInvocationsWithParameters((input: (12, 3), output: 9), toTestSuite: testSuite)
//         addTestsToInvocationsWithParameters((input: (12, 2), output: 10), toTestSuite: testSuite)
//         addTestsToInvocationsWithParameters((input: (12, 4), output: 8), toTestSuite: testSuite)
//         addTestsToInvocationsWithParameters((input: (12, 5), output: 7), toTestSuite: testSuite)
//         return testSuite
//     }

//     private class func addTestsToInvocationsWithParameters(_ parameter: ParametrizedTestExampleParameter, toTestSuite testSuite: XCTestSuite) {
//         testInvocations.forEach { invocation in
//           let testCase = ParametrizedTestExample(invocation: invocation)
//           testCase.parameter = parameter
//           testSuite.addTest(testCase)
//         }
//       }


    override func tearDownWithError() throws {}

//     func testStarted() throws {
//         try sampleTests.testStarted()
//     }
//
//     func testDefaultEnvironment() throws {
//         try sampleTests.testDefaultEnvironment()
//     }
//
//     func testSetEnvironment() throws {
//         try sampleTests.testSetEnvironment()
//     }

//     func testMediaSession() throws {
//         try mediaTests.testMediaSession()
//     }

//    func testQos() throws {
//        try mediaTests.testQos()
//    }

    func testLogBreakEnd() throws {
        try mediaTests.testLogAdBreakEnd()
    }
}
