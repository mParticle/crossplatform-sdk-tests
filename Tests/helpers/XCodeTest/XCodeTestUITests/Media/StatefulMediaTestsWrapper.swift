//
//  StatefulMediaTests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 5/17/21.
//

import XCTest
import mParticle_Multiplatform_Tests

class StatefulMediaTestsWrappers: XCTestCase {
    var mediaTests = StatefulMediaTests()
    
    override func setUpWithError() throws {
        continueAfterFailure = true
    }
    
    override func setUp() {
        mediaTests.beforeAll()
    }



    override func tearDownWithError() throws {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
    }

    func testLogAdBreakEnd() throws {
        try mediaTests.testLogAdBreakEnd()
    }
}
