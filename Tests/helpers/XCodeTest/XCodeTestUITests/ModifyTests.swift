import XCTest;
import mParticle_Multiplatform_Tests

class ModifyIosTests: XCTestCase, TestingAwaiter {
    var modifyTests = ModifyTest()
    private var expectations = [String: XCTestExpectation]()

    override func setUpWithError() throws {
        continueAfterFailure = true
    }

    override func setUp() {
        modifyTests.beforeAll(awaiter: self)
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

    func testModifyRequestAddNewIds() throws {
        try modifyTests.testModifyRequestAddNewIds()
    }

    func testModifyUpdatesIdChangeForNonCurrentUser() throws {
        try modifyTests.testModifyUpdatesIdChangeForNonCurrentUser()
    }

    func testModifyRequestWithCurrentUserChangeExistingIds() throws {
        try modifyTests.testModifyRequestWithCurrentUserChangeExistingIds()
    }

}
