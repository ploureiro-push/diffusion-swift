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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.9.2/Diffusion.xcframework.zip",
            checksum: "8abe6ecb1438c225435ff32e81ee4132388ea38638c983f1dccec9c2dbbe2ddb"
        )
    ]
)
