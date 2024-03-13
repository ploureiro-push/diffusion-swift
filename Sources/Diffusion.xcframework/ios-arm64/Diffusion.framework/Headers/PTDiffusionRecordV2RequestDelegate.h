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
#import <Diffusion/PTDiffusionTopicTreeRegistrationDelegate.h>

@class PTDiffusionRecordV2;
@class PTDiffusionRequestContext;
@class PTDiffusionResponder;

NS_ASSUME_NONNULL_BEGIN

/**
 @brief Methods implemented by classes handling record messaging requests with a
 handler registered at the server.

 @see PTDiffusionRecordV2
 @see PTDiffusionMessagingFeature

 @since 6.0
 */
@protocol PTDiffusionRecordV2RequestDelegate <PTDiffusionTopicTreeRegistrationDelegate>

/**
 Called when a record request has been received.
 
 @param registration The topic tree registration for which this handler applies.

 @param record The request that was received.
 
 @param context Context object that provides the session ID of the session that
 sent the request along with the path and any requested session properties.
 
 @param responder Responder object to be used for responding to the request.

 @since 6.0
 */
-(void)diffusionTopicTreeRegistration:(PTDiffusionTopicTreeRegistration *)registration
          didReceiveRequestWithRecord:(PTDiffusionRecordV2 *)record
                              context:(PTDiffusionRequestContext *)context
                            responder:(PTDiffusionResponder *)responder;

@end

NS_ASSUME_NONNULL_END
