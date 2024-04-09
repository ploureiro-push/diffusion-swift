//  Diffusion Client Library for iOS, tvOS and OS X / macOS
//
//  Copyright (c) 2015 - 2023 DiffusionData Ltd., All Rights Reserved.
//
//  Use is subject to licence terms.
//
//  NOTICE: All information contained herein is, and remains the
//  property of DiffusionData. The intellectual and technical
//  concepts contained herein are proprietary to DiffusionData and
//  may be covered by U.S. and Foreign Patents, patents in process, and
//  are protected by trade secret or copyright law.

/**
 @file Diffusion.h

 Framework umbrella header file.
 */

#import <Foundation/Foundation.h>

#import <Diffusion/PTDiffusion.h>
#import <Diffusion/PTDiffusionAddTopicResult.h>
#import <Diffusion/PTDiffusionBasicHTTPProxyAuthentication.h>
#import <Diffusion/PTDiffusionBinary.h>
#import <Diffusion/PTDiffusionBinaryDelta.h>
#import <Diffusion/PTDiffusionBinaryFetchResult.h>
#import <Diffusion/PTDiffusionBinaryFetchTopicResult.h>
#import <Diffusion/PTDiffusionBinaryRequestDelegate.h>
#import <Diffusion/PTDiffusionBinaryRequestStreamDelegate.h>
#import <Diffusion/PTDiffusionBinarySessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionBinaryTimeSeriesEvent.h>
#import <Diffusion/PTDiffusionBinaryTimeSeriesEventValueStreamDelegate.h>
#import <Diffusion/PTDiffusionBinaryTimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionBinaryUpdateStream.h>
#import <Diffusion/PTDiffusionBinaryValueStreamDelegate.h>
#import <Diffusion/PTDiffusionBranchMapping.h>
#import <Diffusion/PTDiffusionBranchMappingTable.h>
#import <Diffusion/PTDiffusionBranchMappingTableBuilder.h>
#import <Diffusion/PTDiffusionBytes.h>
#import <Diffusion/PTDiffusionCancellable.h>
#import <Diffusion/PTDiffusionCheckRemoteServerResult.h>
#import <Diffusion/PTDiffusionClientControlFeature.h>
#import <Diffusion/PTDiffusionClientQueueEventListener.h>
#import <Diffusion/PTDiffusionClientQueuePolicy.h>
#import <Diffusion/PTDiffusionCloseReason.h>
#import <Diffusion/PTDiffusionCreateRemoteServerResult.h>
#import <Diffusion/PTDiffusionCredentials.h>
#import <Diffusion/PTDiffusionDataType.h>
#import <Diffusion/PTDiffusionDataTypes.h>
#import <Diffusion/PTDiffusionDefaultSessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionDefaultStreamDelegate.h>
#import <Diffusion/PTDiffusionDefaultSubscriberStreamDelegate.h>
#import <Diffusion/PTDiffusionDefaultTopicNotificationListener.h>
#import <Diffusion/PTDiffusionDefaultTopicTreeRegistrationDelegate.h>
#import <Diffusion/PTDiffusionEnumeration.h>
#import <Diffusion/PTDiffusionError.h>
#import <Diffusion/PTDiffusionErrorListener.h>
#import <Diffusion/PTDiffusionFeature.h>
#import <Diffusion/PTDiffusionFetchRequest.h>
#import <Diffusion/PTDiffusionFetchResult.h>
#import <Diffusion/PTDiffusionFetchTopicResult.h>
#import <Diffusion/PTDiffusionGetSessionPropertiesResult.h>
#import <Diffusion/PTDiffusionGlobalPermission.h>
#import <Diffusion/PTDiffusionHTTPAuthentication.h>
#import <Diffusion/PTDiffusionHTTPAuthenticationChallenge.h>
#import <Diffusion/PTDiffusionHTTPAuthenticationChallengeHandler.h>
#import <Diffusion/PTDiffusionHTTPAuthenticationChallengeStatus.h>
#import <Diffusion/PTDiffusionHTTPProxyConfiguration.h>
#import <Diffusion/PTDiffusionHTTPResponse.h>
#import <Diffusion/PTDiffusionJSON.h>
#import <Diffusion/PTDiffusionJSONDelta.h>
#import <Diffusion/PTDiffusionJSONDeltaChangeMap.h>
#import <Diffusion/PTDiffusionJSONFetchResult.h>
#import <Diffusion/PTDiffusionJSONFetchTopicResult.h>
#import <Diffusion/PTDiffusionJSONRequestDelegate.h>
#import <Diffusion/PTDiffusionJSONRequestStreamDelegate.h>
#import <Diffusion/PTDiffusionJSONSessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionJSONTimeSeriesEvent.h>
#import <Diffusion/PTDiffusionJSONTimeSeriesEventValueStreamDelegate.h>
#import <Diffusion/PTDiffusionJSONTimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionJSONUpdateStream.h>
#import <Diffusion/PTDiffusionJSONValueStreamDelegate.h>
#import <Diffusion/PTDiffusionLogging.h>
#import <Diffusion/PTDiffusionLoggingDestinationConfiguration.h>
#import <Diffusion/PTDiffusionLoggingLevel.h>
#import <Diffusion/PTDiffusionLoggingMessagePrinter.h>
#import <Diffusion/PTDiffusionMessagingFeature.h>
#import <Diffusion/PTDiffusionMetricCollector.h>
#import <Diffusion/PTDiffusionMetricCollectorBuilder.h>
#import <Diffusion/PTDiffusionMetricsFeature.h>
#import <Diffusion/PTDiffusionMissingTopicHandler.h>
#import <Diffusion/PTDiffusionMissingTopicNotification.h>
#import <Diffusion/PTDiffusionMutableRecordV2Model.h>
#import <Diffusion/PTDiffusionNumberRequestDelegate.h>
#import <Diffusion/PTDiffusionNumberRequestStreamDelegate.h>
#import <Diffusion/PTDiffusionNumberSessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionNumberFetchResult.h>
#import <Diffusion/PTDiffusionNumberFetchTopicResult.h>
#import <Diffusion/PTDiffusionNumberTimeSeriesEvent.h>
#import <Diffusion/PTDiffusionNumberTimeSeriesEventValueStreamDelegate.h>
#import <Diffusion/PTDiffusionNumberTimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionNumberUpdateStream.h>
#import <Diffusion/PTDiffusionNumberValueStreamDelegate.h>
#import <Diffusion/PTDiffusionPartialJSONUpdateConstraint.h>
#import <Diffusion/PTDiffusionPathPermission.h>
#import <Diffusion/PTDiffusionPingDetails.h>
#import <Diffusion/PTDiffusionPingsFeature.h>
#import <Diffusion/PTDiffusionPrimitive.h>
#import <Diffusion/PTDiffusionRecordV2.h>
#import <Diffusion/PTDiffusionRecordV2Builder.h>
#import <Diffusion/PTDiffusionRecordV2Delta.h>
#import <Diffusion/PTDiffusionRecordV2DeltaChange.h>
#import <Diffusion/PTDiffusionRecordV2DeltaChangeType.h>
#import <Diffusion/PTDiffusionRecordV2FetchResult.h>
#import <Diffusion/PTDiffusionRecordV2FetchTopicResult.h>
#import <Diffusion/PTDiffusionRecordV2RequestDelegate.h>
#import <Diffusion/PTDiffusionRecordV2RequestStreamDelegate.h>
#import <Diffusion/PTDiffusionRecordV2Model.h>
#import <Diffusion/PTDiffusionRecordV2Schema.h>
#import <Diffusion/PTDiffusionRecordV2SchemaBuilder.h>
#import <Diffusion/PTDiffusionRecordV2SchemaField.h>
#import <Diffusion/PTDiffusionRecordV2SchemaFieldType.h>
#import <Diffusion/PTDiffusionRecordV2SchemaNode.h>
#import <Diffusion/PTDiffusionRecordV2SchemaRecord.h>
#import <Diffusion/PTDiffusionRecordV2SessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionRecordV2TimeSeriesEvent.h>
#import <Diffusion/PTDiffusionRecordV2TimeSeriesEventValueStreamDelegate.h>
#import <Diffusion/PTDiffusionRecordV2TimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionRecordV2UpdateStream.h>
#import <Diffusion/PTDiffusionRecordV2ValueStreamDelegate.h>
#import <Diffusion/PTDiffusionRegistration.h>
#import <Diffusion/PTDiffusionRemoteServer.h>
#import <Diffusion/PTDiffusionRemoteServerBuilder.h>
#import <Diffusion/PTDiffusionRemoteServerConnectionOption.h>
#import <Diffusion/PTDiffusionRemoteServerConnectionState.h>
#import <Diffusion/PTDiffusionRemoteServersFeature.h>
#import <Diffusion/PTDiffusionPrimaryInitiatorRemoteServer.h>
#import <Diffusion/PTDiffusionSecondaryInitiatorRemoteServer.h>
#import <Diffusion/PTDiffusionSecondaryAcceptorRemoteServer.h>
#import <Diffusion/PTDiffusionRequest.h>
#import <Diffusion/PTDiffusionRequestContext.h>
#import <Diffusion/PTDiffusionRequestHandler.h>
#import <Diffusion/PTDiffusionRequestStream.h>
#import <Diffusion/PTDiffusionResponder.h>
#import <Diffusion/PTDiffusionResponse.h>
#import <Diffusion/PTDiffusionRetryStrategy.h>
#import <Diffusion/PTDiffusionSecurityFeature.h>
#import <Diffusion/PTDiffusionSendDeliveryPriority.h>
#import <Diffusion/PTDiffusionSession.h>
#import <Diffusion/PTDiffusionSessionConfiguration.h>
#import <Diffusion/PTDiffusionSessionError.h>
#import <Diffusion/PTDiffusionSessionId.h>
#import <Diffusion/PTDiffusionSessionLock.h>
#import <Diffusion/PTDiffusionSessionLockAttempt.h>
#import <Diffusion/PTDiffusionSessionLockScope.h>
#import <Diffusion/PTDiffusionSessionMetricCollector.h>
#import <Diffusion/PTDiffusionSessionMetricCollectorBuilder.h>
#import <Diffusion/PTDiffusionSessionPropertiesDelegate.h>
#import <Diffusion/PTDiffusionSessionPropertiesListenerRegistration.h>
#import <Diffusion/PTDiffusionSessionPropertiesListenerRegistrationDelegate.h>
#import <Diffusion/PTDiffusionSessionReconnectionAttempt.h>
#import <Diffusion/PTDiffusionSessionReconnectionStrategy.h>
#import <Diffusion/PTDiffusionSessionResponseStream.h>
#import <Diffusion/PTDiffusionSessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionSessionState.h>
#import <Diffusion/PTDiffusionSessionStateChange.h>
#import <Diffusion/PTDiffusionSessionStateChangeDelegate.h>
#import <Diffusion/PTDiffusionSessionTreesFeature.h>
#import <Diffusion/PTDiffusionSetSessionPropertiesResult.h>
#import <Diffusion/PTDiffusionStream.h>
#import <Diffusion/PTDiffusionStreamDelegate.h>
#import <Diffusion/PTDiffusionStringFetchResult.h>
#import <Diffusion/PTDiffusionStringFetchTopicResult.h>
#import <Diffusion/PTDiffusionStringRequestDelegate.h>
#import <Diffusion/PTDiffusionStringRequestStreamDelegate.h>
#import <Diffusion/PTDiffusionStringSessionResponseStreamDelegate.h>
#import <Diffusion/PTDiffusionStringTimeSeriesEvent.h>
#import <Diffusion/PTDiffusionStringTimeSeriesEventValueStreamDelegate.h>
#import <Diffusion/PTDiffusionStringTimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionStringUpdateStream.h>
#import <Diffusion/PTDiffusionStringValueStreamDelegate.h>
#import <Diffusion/PTDiffusionSubscriberStreamDelegate.h>
#import <Diffusion/PTDiffusionSubscriptionControlFeature.h>
#import <Diffusion/PTDiffusionTimeSeriesEvent.h>
#import <Diffusion/PTDiffusionTimeSeriesEventMetadata.h>
#import <Diffusion/PTDiffusionTimeSeriesFeature.h>
#import <Diffusion/PTDiffusionTimeSeriesFetchResult.h>
#import <Diffusion/PTDiffusionTimeSeriesFetchTopicResult.h>
#import <Diffusion/PTDiffusionTimeSeriesQueryResult.h>
#import <Diffusion/PTDiffusionTimeSeriesQueryResultEventArrayStructure.h>
#import <Diffusion/PTDiffusionTimeSeriesRangeQuery.h>
#import <Diffusion/PTDiffusionTopicControlFeature.h>
#import <Diffusion/PTDiffusionTopicCreationResult.h>
#import <Diffusion/PTDiffusionTopicMetricCollector.h>
#import <Diffusion/PTDiffusionTopicMetricCollectorBuilder.h>
#import <Diffusion/PTDiffusionTopicNotificationListener.h>
#import <Diffusion/PTDiffusionTopicNotificationRegistration.h>
#import <Diffusion/PTDiffusionTopicNotificationsFeature.h>
#import <Diffusion/PTDiffusionTopicNotificationType.h>
#import <Diffusion/PTDiffusionTopicSelector.h>
#import <Diffusion/PTDiffusionTopicsFeature.h>
#import <Diffusion/PTDiffusionTopicRemovalResult.h>
#import <Diffusion/PTDiffusionTopicSpecification.h>
#import <Diffusion/PTDiffusionTopicTreeRegistration.h>
#import <Diffusion/PTDiffusionTopicTreeRegistrationDelegate.h>
#import <Diffusion/PTDiffusionTopicType.h>
#import <Diffusion/PTDiffusionTopicUnsubscriptionReason.h>
#import <Diffusion/PTDiffusionTopicUpdateFeature.h>
#import <Diffusion/PTDiffusionTopicView.h>
#import <Diffusion/PTDiffusionTopicViewsFeature.h>
#import <Diffusion/PTDiffusionUpdateConstraint.h>
#import <Diffusion/PTDiffusionUpdateConstraintOperator.h>
#import <Diffusion/PTDiffusionUpdateStream.h>
#import <Diffusion/PTDiffusionRecoverableUpdateStream.h>
#import <Diffusion/PTDiffusionUpdateStreamBuilder.h>
#import <Diffusion/PTDiffusionValueStream.h>
#import <Diffusion/PTDiffusionVersion.h>
