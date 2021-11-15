import XCTest;
import mParticle_Multiplatform_Tests

class IdentifyIosTests: XCTestCase, TestingAwaiter {
    var identifyTests = IdentifyTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        identifyTests.beforeAll(awaiter: self)
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

    func testNullRequest() throws {
        try identifyTests.testNullRequest()
    }

    func testKeepExistingMpid() throws {
        try identifyTests.testKeepExistingMpid()
    }

    func testUpdateToNewMpid() throws {
        try identifyTests.testUpdateToNewMpid()
    }

    func testIdentityRequestChangesIds() throws {
        try identifyTests.testIdentityRequestChangesIds()
    }
    
    func testIdentityApiRequestWithNullUser() throws {
        try identifyTests.testIdentityApiRequestWithNullUser()
    }

    func testIdentityApiRequestWithCurrentUser() throws {
        try identifyTests.testIdentityApiRequestWithCurrentUser()
    }

    func testIdentityApiRequestWithCurrentUserWithIds() throws {
        try identifyTests.testIdentityApiRequestWithCurrentUserWithIds()
    }

    func testIdentityRequestWithIdsWithCurrentUserWithIds() throws {
        try identifyTests.testIdentityRequestWithIdsWithCurrentUserWithIds()
    }
    
    func createIdentityRequestBeforeAnotherRequestIsMade() throws {
        try identifyTests.createIdentityRequestBeforeAnotherRequestIsMade()
    }
    
    func testIdentityRequestWithIdsWhileCurrentUserWithIds() throws {
        try identifyTests.testIdentityRequestWithIdsWhileCurrentUserWithIds()
    }
}
