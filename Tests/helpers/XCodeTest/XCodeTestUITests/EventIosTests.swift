import XCTest;
import mParticle_Multiplatform_Tests

class EventIosTests: XCTestCase, TestingAwaiter {
    var eventTests = eventTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        eventTests.beforeAll(awaiter: self)
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

    func testUnknownEvent() throws {
        try eventTests.testUnknownEvent()
    }

    func testNavigationEvent() throws {
        try eventTests.testNavigationEvent()
    }

    func testLocationEvent() throws {
        try eventTests.testLocationEvent()
    }

    func testSearchEvent() throws {
        try eventTests.testSearchEvent()
    }

    func testTransactionEvent() throws {
        try eventTests.testTransactionEvent()
    }

    func testUserContentEvent() throws {
        try eventTests.testUserContentEvent()
    }

    func testUserPreferenceEvent() throws {
        try eventTests.testUserPreferenceEvent()
    }

    func testSocialEvent() throws {
        try eventTests.testOtherEvent()
    }

    func testOtherEvent() throws {
        try eventTests.testOtherEvent()
    }

    func testMediaEvent() throws {
        try eventTests.testMediaEvent()
    }

    func testScreenEvent() throws {
        try eventTests.testScreenEvent()
    }

}
