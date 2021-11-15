import XCTest;
import mParticle_Multiplatform_Tests

class LogoutIosTests: XCTestCase, TestingAwaiter {
    var logoutTests = LogoutTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        logoutTests.beforeAll(awaiter: self)
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
        try logoutTests.testNullRequest()
    }

    func testKeepExistingMpid() throws {
        try logoutTests.testKeepExistingMpid()
    }

    func testUpdateToNewMpid() throws {
        try logoutTests.testUpdateToNewMpid()
    }

    func testIdentityRequestChangesIds() throws {
        try logoutTests.testIdentityRequestChangesIds()
    }
    
    func testIdentityApiRequestWithNullUser() throws {
        try logoutTests.testIdentityApiRequestWithNullUser()
    }

    func testIdentityApiRequestWithCurrentUser() throws {
        try logoutTests.testIdentityApiRequestWithCurrentUser()
    }

    func testIdentityApiRequestWithCurrentUserWithIds() throws {
        try logoutTests.testIdentityApiRequestWithCurrentUserWithIds()
    }

    func testIdentityRequestWithIdsWithCurrentUserWithIds() throws {
        try logoutTests.testIdentityRequestWithIdsWithCurrentUserWithIds()
    }
    
    func createIdentityRequestBeforeAnotherRequestIsMade() throws {
        try logoutTests.createIdentityRequestBeforeAnotherRequestIsMade()
    }
    
    func testIdentityRequestWithIdsWhileCurrentUserWithIds() throws {
        try logoutTests.testIdentityRequestWithIdsWhileCurrentUserWithIds()
    }
}
