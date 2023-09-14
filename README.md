# GNU Assembler grammar for Tree-sitter

A Tree-sitter grammar and queries to support basic syntax highlighting and
related features for AT&T style assembly.
The implementation is based on
[the GNU as documentation](https://sourceware.org/binutils/docs-2.41/as.html).

## Known Limitations

* Mostly tested with x86 assembly
* The grammar does not know about which instructions and registers are valid.
* GNU as treats multi-line comments as a line feed. This grammar does not.
