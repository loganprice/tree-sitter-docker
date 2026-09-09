// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "TreeSitterDockerfile",
    platforms: [.macOS(.v10_13), .iOS(.v11), .tvOS(.v12), .watchOS(.v5)],
    products: [
        .library(name: "TreeSitterDockerfile", targets: ["TreeSitterDockerfile"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDockerfile",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDockerfileTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDockerfile",
            ],
            path: "bindings/swift/TreeSitterDockerfileTests"
        )
    ],
    cLanguageStandard: .c11
)
