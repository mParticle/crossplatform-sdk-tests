import XCTest
import multiplatform_testing

class XCodeProjectUITests: XCTestCase {
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
