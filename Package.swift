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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.8.5/Diffusion.xcframework.zip",
            checksum: "ebddf69904cd9e7cdeb58cba0ac0f46670ee47a4f4f0edb9f5afc61965aa7efe"
        )
    ]
)
