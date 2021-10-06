//
//  XCodeTestUITests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 3/2/21.
//

import XCTest;
import mParticle_Multiplatform_Tests

class SimpleTests: XCTestCase, TestingAwaiter {
    var sampleTests = SampleTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true    
    }

    override func setUp() {
        sampleTests.beforeAll(awaiter: self)
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

    func testStarted() throws {
        try sampleTests.testStarted()
    }

    func testDefaultEnvironment() throws {
        try sampleTests.testDefaultEnvironment()
    }

    func testSetEnvironment() throws {
        try sampleTests.testSetEnvironment()
    }

    func testLogEvent() throws {
        try sampleTests.testLogEvent()
    }

    func testSetMpid() throws {
        try sampleTests.testSetMpid()
    }
}
