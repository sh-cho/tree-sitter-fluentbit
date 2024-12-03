// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterFluentbit",
    products: [
        .library(name: "TreeSitterFluentbit", targets: ["TreeSitterFluentbit"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.9.0"),
    ],
    targets: [
        .target(name: "TreeSitterFluentbit",
                path: ".",
                exclude: [
                    "Cargo.toml",
                    "Makefile",
                    "binding.gyp",
                    "bindings/c",
                    "bindings/go",
                    "bindings/node",
                    "bindings/python",
                    "bindings/rust",
                    "prebuilds",
                    "grammar.js",
                    "package.json",
                    "package-lock.json",
                    "pyproject.toml",
                    "setup.py",
                    "test",
                    "examples",
                    ".editorconfig",
                    ".github",
                    ".gitignore",
                    ".gitattributes",
                    ".gitmodules",
                ],
                sources: [
                    "src/parser.c",
                    // NOTE: if your language has an external scanner, add it here.
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]),
        .testTarget(name: "TreeSitterFluentbitTests",
                    dependencies: [
                        "SwiftTreeSitter",
                        "TreeSitterFluentbit"
                    ],
                    path: "bindings/swift/TreeSitterFluentbitTests")
    ],
    cLanguageStandard: .c11
)
