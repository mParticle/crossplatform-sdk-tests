//
//  ManualSessionManagementTests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 12/7/21.
//

import XCTest;
import mParticle_Multiplatform_Tests

class ManualSessionManagementTests: XCTestCase, TestingAwaiter {
    var tests = ManualSessionManagementTest()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        tests.beforeAll(awaiter: self)
    }

    
    //  Start TestingAwaiter implementation
    
    func initializeExpectation(description: String) {
        self.expectations[description] = self.expectation(description: description)
    }
    
    func countdown(description: String) {
        if let expectation = self.expectations[description] {
            expectation.fulfill()
        }
    }
    
    func await(description: String, timeout: Double) {
        if let expectation = self.expectations[description] {
            self.wait(for: [expectation], timeout: timeout)
        }
    }
    
    // End TestingAwaiter implementation
    

    override func tearDownWithError() throws {}
    
    func testManualSessionManagementDoesNotAutomaticallyStartSession() throws {
        try tests.testManualSessionManagementDoesNotAutomaticallyStartSession()
    }
    
   func testStartSessionManuallyStartsSession() throws {
       try tests.testStartSessionManuallyStartsSession()
   }

   func testEventManuallyStartsSession() throws {
       try tests.testEventManuallyStartsSession()
   }

    func testSessionlessEventDoesNotStartSession() throws {
       try tests.testSessionlessEventDoesNotStartSession()
   }

    func testSessionManuallyEnds() throws {
       try tests.testSessionManuallyEnds()
   }

}

