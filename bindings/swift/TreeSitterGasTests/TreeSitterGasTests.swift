import XCTest
import SwiftTreeSitter
import TreeSitterGas

final class TreeSitterGasTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gas())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GNU Assembler (as) grammar")
    }
}
