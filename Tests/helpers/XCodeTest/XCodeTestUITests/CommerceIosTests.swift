//
//  CommerceIosTests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 8/20/21.
//

import XCTest;
import mParticle_Multiplatform_Tests

class CommerceIosTests: XCTestCase, TestingAwaiter {
    var commerceTests = CommerceTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        commerceTests.beforeAll(awaiter: self)
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

    func testCommerceProductEvent() throws {
        try commerceTests.testCommerceProductEvent()
    }

    func testCommercePromotionEvent() throws {
        try commerceTests.testCommercePromotionEvent()
    }

    func testCommerceImpressionEvent() throws {
        try commerceTests.testCommerceImpressionEvent()
    }
}
