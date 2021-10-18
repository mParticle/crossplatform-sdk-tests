import XCTest;
import mParticle_Multiplatform_Tests

import Foundation

class MParticleOptionsTest: XCTestCase, TestingAwaiter {
    var optionsTests = MParticleOptionsTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        optionsTests.beforeAll(awaiter: self)
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

    func testApiKey() throws {
        try optionsTests.testApiKey()
    }

    func testUploadIntervalDevelopment() throws {
        try optionsTests.testUploadIntervalDevelopment()
    }


    func testUploadIntervalProduction() throws {
        try optionsTests.testUploadIntervalProduction()
    }

    func testSetProductionEnvironment() throws {
        try optionsTests.testSetProductionEnvironment()
    }
    
    func testLogLevel() throws {
        try optionsTests.testLogLevel()
    }
}
