//
//  ExistingMediaTests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 4/13/21.
//

import XCTest
import mParticle_Multiplatform_Tests

class ExistingMediaTests: XCTestCase {
    var existingMediaTests = AppleMediaExisting()
    
    override func setUpWithError() throws {
        continueAfterFailure = true
    }
    
    override func setUp() {
        existingMediaTests.beforeAll()
    }



    override func tearDownWithError() throws {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
    }

    func testLogMediaSessionStart() {
        existingMediaTests.testLogMediaSessionStart()
    }

    func testLogMediaSessionStartWithOptions() {
       existingMediaTests.testLogMediaSessionStartWithOptions()
    }
     
    func testLogMediaSessionStartAlternet() {
       existingMediaTests.testLogMediaSessionStartAlternet()
    }

    func testLogMediaSessionEnd() {
       existingMediaTests.testLogMediaSessionEnd()
    }

    func testLogMediaContentEnd() {
       existingMediaTests.testLogMediaContentEnd()
    }

    func testLogPlay() {
       existingMediaTests.testLogPlay()
    }

    func testLogPlayWithExistingPlayhead() {
       existingMediaTests.testLogPlayWithExistingPlayhead()
    }
     
    func testLogPlayWithOptions() {
       existingMediaTests.testLogPlayWithOptions()
    }
     
    func testLogPause() {
       existingMediaTests.testLogPause()
    }
       
    func testLogPauseWithOptions() {
       existingMediaTests.testLogPauseWithOptions()
    }
       
    func testLogSeekStart() {
       existingMediaTests.testLogSeekStart()
    }
       
    func testLogSeekEnd() {
       existingMediaTests.testLogSeekEnd()
    }

    func testLogAdStart() {
       existingMediaTests.testLogAdStart()
    }

    func testLogAdEnd() {
       existingMediaTests.testLogAdEnd()
    }
    
    func testLogAdClick() {
       existingMediaTests.testLogAdClick()
    }
    
    func testLogAdSkip() {
       existingMediaTests.testLogAdSkip()
    }
    
    func testLogAdBreakStart() {
       existingMediaTests.testLogAdBreakStart()
    }
    
    func testLogAdBreakEnd() {
       existingMediaTests.testLogAdBreakEnd()
    }
    
    func testLogSegmentStart() {
       existingMediaTests.testLogSegmentStart()
    }
    
    func testLogSegmentEnd () {
       existingMediaTests.testLogSegmentEnd()
    }
    
    func testLogSegmentSkip () {
       existingMediaTests.testLogSegmentSkip()
    }
    
    func testLogPlayheadPosition () {
       existingMediaTests.testLogPlayheadPosition()
    }
    
    func testLogQoS() {
       existingMediaTests.testLogQoS()
    }

}
