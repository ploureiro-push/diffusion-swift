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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.9.0/Diffusion.xcframework.zip",
            checksum: "b237486946d3e857f9d99887f1fbbbd39acf09fa192417ebef12e2160e53ea6f"
        )
    ]
)
