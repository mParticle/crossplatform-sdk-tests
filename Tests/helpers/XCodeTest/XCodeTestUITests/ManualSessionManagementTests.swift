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
    
    func testSessionDoesNotAutomaticallyStart() throws {
        try tests.testSessionDoesNotAutomaticallyStart()
    }
    
   func testSessionManuallyStarts() throws {
       try tests.testSessionManuallyStarts()
   }

   func testSessionManuallyEnds() throws {
       try tests.testSessionManuallyEnds()
   }

    func testOnSessionStartManualShouldntStart() throws {
       try tests.testOnSessionStartManualShouldntStart()
   }

    func testOnSessionStartManualShouldStart() throws {
       try tests.testOnSessionStartManualShouldStart()
   }

}

