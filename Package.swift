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
            checksum: "7189879d1a5ea8b8bc41fc9e3e90e2220d45b37b3c4efcddf45d687ed43e76a2"
        )
    ]
)
