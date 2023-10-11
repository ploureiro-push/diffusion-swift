// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Diffusion",
    products: [
        .library(
            name: "Diffusion",
            targets: [ "Diffusion" ]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "Diffusion",
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.9.4/Diffusion.xcframework.zip",
            checksum: "be9fd07d3d08c2b2b7ca9a655d51c3688d68dd89f9eab3f4b1e68f748e05718b"
        )
    ]
)
