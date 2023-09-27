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
            checksum: "bdeb405cfda82677d139cd1a6495ca21d054b27aee5cfd96657a0ad430128a00"
        )
    ]
)
