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

NS_ASSUME_NONNULL_BEGIN

/**
 @brief A reference to a registered handle.

 Such a reference is provided once a handler with a server-side presence has
 been registered.

 @since 6.1
 */
@interface PTDiffusionRegistration : NSObject

+(instancetype)new NS_UNAVAILABLE;

-(instancetype)init NS_UNAVAILABLE;

/**
 Request that the handler is unregistered from the server.

 After the handler is unregistered, the completionHandler will be notified.

 @param completionHandler Block to be called asynchronously on success or
 failure. If the operation was successful, the `error` argument passed to the
 block will be `nil`. The completion handler will be called asynchronously on
 the main dispatch queue.

 @since 6.1
 */
-(void)closeWithCompletionHandler:(void (^)(NSError * _Nullable error))completionHandler;

/**
 Request that the handler is unregistered from the server.

 If the handler has already been unregistered, calling this method has no effect.

 @note Before 6.1 this method was defined on PTDiffusionTopicTreeRegistration.

 @since 5.7
 */
-(void)close;

@end

NS_ASSUME_NONNULL_END
