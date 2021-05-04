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

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        sampleTests.beforeAll()
    }

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
}
