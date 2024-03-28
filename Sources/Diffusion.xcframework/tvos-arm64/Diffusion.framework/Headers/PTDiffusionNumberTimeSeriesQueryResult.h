//  Diffusion Client Library for iOS, tvOS and OS X / macOS
//
//  Copyright (c) 2017 Push Technology Ltd., All Rights Reserved.
//
//  Use is subject to license terms.
//
//  NOTICE: All information contained herein is, and remains the
//  property of Push Technology. The intellectual and technical
//  concepts contained herein are proprietary to Push Technology and
//  may be covered by U.S. and Foreign Patents, patents in process, and
//  are protected by trade secret or copyright law.

#import <Foundation/Foundation.h>
#import <Diffusion/PTDiffusionTimeSeriesQueryResult.h>

@class PTDiffusionNumberTimeSeriesEvent;

NS_ASSUME_NONNULL_BEGIN

/**
 @brief Query result providing an array of number time series events.

 @since 6.0
 */
@interface PTDiffusionNumberTimeSeriesQueryResult : PTDiffusionTimeSeriesQueryResult

/**
 The number time series events.

 @see eventArrayStructure

 @since 6.0
 */
@property(nonatomic, readonly) NSArray<PTDiffusionNumberTimeSeriesEvent *>* numberEvents;

@end

NS_ASSUME_NONNULL_END
