//  Diffusion Client Library for iOS, tvOS and OS X / macOS
//
//  Copyright (c) 2017, 2020 Push Technology Ltd., All Rights Reserved.
//
//  Use is subject to license terms.
//
//  NOTICE: All information contained herein is, and remains the
//  property of Push Technology. The intellectual and technical
//  concepts contained herein are proprietary to Push Technology and
//  may be covered by U.S. and Foreign Patents, patents in process, and
//  are protected by trade secret or copyright law.

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 @brief Handler to receive request notifications.

 @see PTDiffusionMessagingFeature
 @see PTDiffusionBinary
 @see PTDiffusionJSON
 @see PTDiffusionPrimitive
 @see PTDiffusionRecordV2

 @since 6.0
 */
@interface PTDiffusionRequestHandler : NSObject

+(instancetype)new NS_UNAVAILABLE;

-(instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
