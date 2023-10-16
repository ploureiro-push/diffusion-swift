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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.10.1/Diffusion.xcframework.zip",
            checksum: "9b2ba5bea67ae787fe23a7bf2d4b4f96175e9b8a928bd1e36db15ec86fa56f48"
        )
    ]
)
