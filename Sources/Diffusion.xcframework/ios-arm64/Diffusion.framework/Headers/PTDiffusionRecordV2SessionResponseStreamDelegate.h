//  Diffusion Client Library for iOS, tvOS and OS X / macOS
//
//  Copyright (c) 2018, 2020 Push Technology Ltd., All Rights Reserved.
//
//  Use is subject to license terms.
//
//  NOTICE: All information contained herein is, and remains the
//  property of Push Technology. The intellectual and technical
//  concepts contained herein are proprietary to Push Technology and
//  may be covered by U.S. and Foreign Patents, patents in process, and
//  are protected by trade secret or copyright law.

@import Foundation;
#import <Diffusion/PTDiffusionSessionResponseStreamDelegate.h>

@class PTDiffusionRecordV2;

NS_ASSUME_NONNULL_BEGIN

/**
 @brief Methods implemented by classes handling record messaging responses from
 individual sessions.

 @see PTDiffusionRecordV2
 @see PTDiffusionMessagingFeature

 @since 6.1
 */
@protocol PTDiffusionRecordV2SessionResponseStreamDelegate <PTDiffusionSessionResponseStreamDelegate>

/**
 Called when a session responds to a request with a record.

 @param stream The stream that received the response.

 @param record The response that was received.

 @param sessionId The id of the responding session.

 @since 6.1
 */
-(void)          diffusionStream:(PTDiffusionStream *)stream
    didReceiveResponseWithRecord:(PTDiffusionRecordV2 *)record
                   fromSessionId:(PTDiffusionSessionId *)sessionId;

@end

NS_ASSUME_NONNULL_END
