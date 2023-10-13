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
            checksum: "d42443c18ccbb2be2b6a0630aab2e0333e8c4aad2d045fa1b598564d799dcef9"
        )
    ]
)
