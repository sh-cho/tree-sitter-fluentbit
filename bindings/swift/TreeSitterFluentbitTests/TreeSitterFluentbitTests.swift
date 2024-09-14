import XCTest
import SwiftTreeSitter
import TreeSitterFluentbit

final class TreeSitterFluentbitTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fluentbit())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fluentbit grammar")
    }
}
