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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.8.2/Diffusion.xcframework.zip",
            checksum: "7940c7f221bb8a13f0a42635662dd2d7e1243b9bdfbca60f707d2fd2606137d3"
        )
    ]
)
