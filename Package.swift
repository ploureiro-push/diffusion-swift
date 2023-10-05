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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.9.1/Diffusion.xcframework.zip",
            checksum: "d45a9d8ee9c3bd6160004b0f106228bacae6ea1d5af98f4fcedc7776097528d4"
        )
    ]
)
