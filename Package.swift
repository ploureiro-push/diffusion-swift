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
            url: "https://github.com/ploureiro-push/diffusion-sdk-apple/raw/6.9.5/Diffusion.xcframework.zip",
            checksum: "8c7ad569d7a17da4cd0a8a0cf7afb143302f63e4a1770cce0337fc8e07d8cdee"
        )
    ]
)
