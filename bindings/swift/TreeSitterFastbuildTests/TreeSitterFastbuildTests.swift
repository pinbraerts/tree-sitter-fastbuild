import XCTest
import SwiftTreeSitter
import TreeSitterFastbuild

final class TreeSitterFastbuildTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fastbuild())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fastbuild grammar")
    }
}
