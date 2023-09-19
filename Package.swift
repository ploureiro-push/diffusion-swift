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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.8.8/Diffusion.xcframework.zip",
            checksum: "93c7b24215bb8b31e8953af3cdf583b8ea4a0f3b730e6f9f0b1aa9d90bcaa681"
        )
    ]
)
