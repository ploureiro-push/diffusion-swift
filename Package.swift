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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.10.2/Diffusion.xcframework.zip",
            checksum: "4860b2772b8b8e5a8e9b1b7d4dd4910b090d163b34cac1ff41cd225512e90cf0"
        )
    ]
)
