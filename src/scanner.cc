#include <tree_sitter/parser.h>

enum TokenType {

};

struct Scanner {
    Scanner() {
        // Initialize your scanner state here.
    }

    unsigned serialize(char *buffer) {
        // Serialize your scanner state here.
        return 0;
    }

    void deserialize(const char *buffer, unsigned length) {
        // Deserialize your scanner state here.
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        // Implement your scanner here.
        return false;
    }
};

extern "C" {

void *tree_sitter_fluentbit_external_scanner_create() {
    return new Scanner();
}

void tree_sitter_fluentbit_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
}

unsigned tree_sitter_fluentbit_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
}

void tree_sitter_fluentbit_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
}

bool tree_sitter_fluentbit_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
}

} // extern
