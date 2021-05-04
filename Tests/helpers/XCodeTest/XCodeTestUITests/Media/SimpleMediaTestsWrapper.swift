//
//  ExistingMediaTests.swift
//  XCodeTestUITests
//
//  Created by William Passidomo on 4/13/21.
//

import XCTest
import mParticle_Multiplatform_Tests

class SimpleMediaTestsWrapper: XCTestCase {
    var mediaTests = SimpleMediaTests()
    
    override func setUpWithError() throws {
        continueAfterFailure = true
    }
    
    override func setUp() {
        mediaTests.beforeAll()
    }



    override func tearDownWithError() throws {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
    }

    func testLogMediaSessionStart() {
        mediaTests.testLogMediaSessionStart()
    }

    func testLogMediaSessionStartWithOptions() {
       mediaTests.testLogMediaSessionStartWithOptions()
    }
     
    func testLogMediaSessionStartAlternet() {
       mediaTests.testLogMediaSessionStartAlternet()
    }

    func testLogMediaSessionEnd() {
       mediaTests.testLogMediaSessionEnd()
    }

    func testLogMediaContentEnd() {
       mediaTests.testLogMediaContentEnd()
    }

    func testLogPlay() {
       mediaTests.testLogPlay()
    }

    func testLogPlayWithExistingPlayhead() {
       mediaTests.testLogPlayWithExistingPlayhead()
    }
     
    func testLogPlayWithOptions() {
       mediaTests.testLogPlayWithOptions()
    }
     
    func testLogPause() {
       mediaTests.testLogPause()
    }
       
    func testLogPauseWithOptions() {
       mediaTests.testLogPauseWithOptions()
    }
       
    func testLogSeekStart() {
       mediaTests.testLogSeekStart()
    }
       
    func testLogSeekEnd() {
       mediaTests.testLogSeekEnd()
    }

    func testLogAdStart() {
       mediaTests.testLogAdStart()
    }

    func testLogAdEnd() {
       mediaTests.testLogAdEnd()
    }
    
    func testLogAdClick() {
       mediaTests.testLogAdClick()
    }
    
    func testLogAdSkip() {
       mediaTests.testLogAdSkip()
    }
    
    func testLogAdBreakStart() {
       mediaTests.testLogAdBreakStart()
    }
    
    func testLogAdBreakEnd() {
       mediaTests.testLogAdBreakEnd()
    }
    
    func testLogSegmentStart() {
       mediaTests.testLogSegmentStart()
    }
    
    func testLogSegmentEnd () {
       mediaTests.testLogSegmentEnd()
    }
    
    func testLogSegmentSkip () {
       mediaTests.testLogSegmentSkip()
    }
    
    func testLogPlayheadPosition () {
       mediaTests.testLogPlayheadPosition()
    }
    
    func testLogQoS() {
       mediaTests.testLogQoS()
    }

}
