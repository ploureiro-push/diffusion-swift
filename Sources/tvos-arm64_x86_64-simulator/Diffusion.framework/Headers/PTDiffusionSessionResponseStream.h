//  Diffusion Client Library for iOS, tvOS and OS X / macOS
//
//  Copyright (c) 2018 - 2023 DiffusionData Ltd., All Rights Reserved.
//
//  Use is subject to licence terms.
//
//  NOTICE: All information contained herein is, and remains the
//  property of DiffusionData. The intellectual and technical
//  concepts contained herein are proprietary to DiffusionData and
//  may be covered by U.S. and Foreign Patents, patents in process, and
//  are protected by trade secret or copyright law.

#import <Foundation/Foundation.h>
#import <Diffusion/PTDiffusionStream.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @brief A response stream represents an asynchronous, variable length feed of
 messaging responses from other sessions.

 @see PTDiffusionMessagingFeature
 @see PTDiffusionBinary
 @see PTDiffusionJSON
 @see PTDiffusionPrimitive
 @see PTDiffusionRecordV2

 @since 6.1
 */
@interface PTDiffusionSessionResponseStream : PTDiffusionStream

@end

NS_ASSUME_NONNULL_END
