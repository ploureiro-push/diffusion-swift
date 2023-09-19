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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.8.3/Diffusion.xcframework.zip",
            checksum: "76177702c8073706100178f58511c79d5a641a78be2ef681e7d56fa7f3f98966"
        )
    ]
)
