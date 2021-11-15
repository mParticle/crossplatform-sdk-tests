import XCTest;
import mParticle_Multiplatform_Tests

class LoginIosTests: XCTestCase, TestingAwaiter {
    var loginTests = LoginTests()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        loginTests.beforeAll(awaiter: self)
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
        try loginTests.testNullRequest()
    }

    func testKeepExistingMpid() throws {
        try loginTests.testKeepExistingMpid()
    }

    func testUpdateToNewMpid() throws {
        try loginTests.testUpdateToNewMpid()
    }

    func testIdentityRequestChangesIds() throws {
        try loginTests.testIdentityRequestChangesIds()
    }
    
    func testIdentityApiRequestWithNullUser() throws {
        try loginTests.testIdentityApiRequestWithNullUser()
    }

    func testIdentityApiRequestWithCurrentUser() throws {
        try loginTests.testIdentityApiRequestWithCurrentUser()
    }

    func testIdentityApiRequestWithCurrentUserWithIds() throws {
        try loginTests.testIdentityApiRequestWithCurrentUserWithIds()
    }

    func testIdentityRequestWithIdsWithCurrentUserWithIds() throws {
        try loginTests.testIdentityRequestWithIdsWithCurrentUserWithIds()
    }
    
    func createIdentityRequestBeforeAnotherRequestIsMade() throws {
        try loginTests.createIdentityRequestBeforeAnotherRequestIsMade()
    }
    
    func testIdentityRequestWithIdsWhileCurrentUserWithIds() throws {
        try loginTests.testIdentityRequestWithIdsWhileCurrentUserWithIds()
    }
}
