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

#import <Foundation/Foundation.h>
#import <Diffusion/PTDiffusionFeature.h>

@class PTDiffusionBytes;
@class PTDiffusionRequestStream;
@class PTDiffusionTopicSelector;
@class PTDiffusionRequest;
@class PTDiffusionRequestHandler;
@class PTDiffusionSessionId;
@class PTDiffusionSessionResponseStream;
@class PTDiffusionTopicTreeRegistration;


/**
 Values assigned to the `code` property of NSError objects generated by the
 PTDiffusionMessagingFeature.

 @since 6.5

 @deprecated since 6.7 Use PTDiffusionError instead.
 */
typedef NS_ENUM(NSInteger, PTDiffusionMessagingFeatureErrorCode) {
    /**
     The filter was rejected. The message was not sent to any clients.

     @see PTDiffusionUnderlyingErrorsKey

     @since 6.5

     @deprecated since 6.7 Use PTDiffusionError_SendToFilterRejected instead.
     */
    PTDiffusionMessagingFeatureErrorCode_SendToFilterRejected __deprecated_enum_msg("Use PTDiffusionError_SendToFilterRejected instead.") = 1,
};


NS_ASSUME_NONNULL_BEGIN


/**
 The value assigned to the `domain` property of NSError objects generated by the
 PTDiffusionMessagingFeature.

 @since 6.5

 @deprecated since 6.7 Error domains have been converged into PTDiffusion.
 */
extern NSString *const PTDiffusionMessagingFeatureErrorDomain __deprecated_msg("Use PTDiffusion instead");


/**
 @brief This feature provides a client session with request-response messaging
 capabilities that can be used to implement application services.

 Request-response messaging allows a session to send requests to other
 sessions. Each receiving session provides a corresponding response, which is
 returned to the sending session. Each request and response carries an
 application provided value.

 The method used to send a request determines which sessions will receive it.
 Each request is routed using the provided *message path* – an
 application provided string. Two addressing schemes are provided:
 <em>unaddressed requests</em> and <em>addressed requests</em>.

 ### Unaddressed requests

 A session can provide an application service by implementing a handler and
 registering it with the server. This is somewhat similar to implementing a
 REST service, except that interactions between the sender and receiver are
 asynchronous.

 Unaddressed requests sent using `sendRequest`
 are routed by the server to a handler that has been pre-registered by another
 session, and matches the message path.

 Handlers are registered with `#addRequestHandler:forPath:sessionProperties:completionHandler:`.
 Each session may register at most one handler for a given message path.
 Optionally, one or more session property names can be provided (see
 PTDiffusionSession for a full description of session properties), in which
 case the values of the session properties for each recipient session will be
 returned along with its response. To add a request handler, the control client
 session must have PTDiffusionGlobalPermission.registerHandler permission. If
 registering to receive session property values, the session must also have
 PTDiffusionGlobalPermission.viewSession permission.

 Routing works as follows:

 1. The session sends the request, providing the message path, the response stream,
 the request value and the completion handler that will be called once the server replies.

 2. The server uses the message path to apply access control. The sender must have the
 PTDiffusionPathPermission.sendToMessageHandler path permission for the message path,
 or the request will be rejected.

 3. The server uses the message path to select the appropriate recipient session.
 Recipient sessions must pre-register a handler. If there is no registered recipient
 session, the request will be rejected.

 4. Otherwise, the server forwards the request to one of the sessions registered
 to handle the message path. The message path is also passed to the recipient
 session, providing a hierarchical context.

 5. The recipient session processes the request and returns a response to the
 server, which forwards the response to the sending session.

 Registration works across a cluster of servers. If no matching handler is
 registered on the server to which the sending session is connected, the
 request will be routed to another server in the cluster that has one.

 ### Addressed Requests

 Addressed requests provide a way to perform actions on a group of sessions,
 or to notify sessions of one-off events (for repeating streams of events, use
 a topic instead).

 An addressed request can be sent to a set of sessions using
 `#sendRequest:toFilter:path:responseStream:completionHandler:`. For the details of session
 filters, see PTDiffusionSession. Sending a request to a filter will match zero
 or more sessions. Each response received will be passed to the provided
 completionHandler. As a convenience, an addressed request can be sent a
 specific session using the overloaded variant of
 `sendRequest:toSessionId:completionHandler` that accepts a session id.

 Sending an addressed request requires PTDiffusionPathPermission.sendToSession
 permission.

 If the sending session is connected to a server belonging to a cluster, the
 recipient sessions can be connected to other servers in the cluster. The
 filter will be evaluated against all sessions hosted by the cluster.

 To receive addressed requests, a session must set up a local request stream
 to handle the specific message path, using `#setRequestStream:forPath:`.
 When a request is received for the message path, the method
 `diffusionStream:didReceive...Request:` responder from the
 PTDiffusionStreamDelegate is triggered.
 The session should respond using the provided responder.
 Stream delegates receive a `diffusionDidCloseStream:` callback when
 unregistered and a `diffusionStream:didFailOnError:` if the session is closed.

 If a request is sent to a session that does not have a matching stream for
 the message path, an error will be returned to the sending session.

 ### Accessing the feature
 Obtain this feature from a PTDiffusionSession as follows:

 <pre>
 PTDiffusionMessagingFeature * messaging = session.messaging;
 </pre>

 For more detail,
 see: @ref md_messaging "Messaging with the Apple client library".
 
 @see PTDiffusionSession

 @since 5.6
 */
@interface PTDiffusionMessagingFeature : PTDiffusionFeature

/**
 Assign the request stream to handle requests sent to the given path.
 
 @param stream The request stream which should be mapped to receive requests
 sent to the given path.
 
 @param path The path for which received requests should be dispatched to the
 given request stream.
 
 @return The previously set request stream for the given path, or `nil` if this
 is a fresh dispatch mapping.

 @since 6.0
 */
-(nullable PTDiffusionRequestStream *)setRequestStream:(PTDiffusionRequestStream *)stream
                                               forPath:(NSString *)path;

/**
 Remove the request stream mapped to the given path.

 @param path The path for which any request stream mapping should be removed.

 @return The previously set request stream for the given path, or `nil` if there
 was not an existing dispatch mapping.

 @since 6.0
 */
-(nullable PTDiffusionRequestStream *)removeRequestStreamForPath:(NSString *)path;


/**
 Register a request handler to handle messages received from other client
 sessions on a path.

 @param handler Specifies the handler to be registered at the server.

 @param path The request path.

 @param sessionProperties a list of keys of session properties that should
 be supplied with each message. See PTDiffusionSession for a full list of
 available fixed property keys. To request no properties supply an empty list.
 To request all fixed properties include PTDiffusionSession#allFixedProperties
 as a key. In this case any other fixed property keys would be ignored.
 To request all user properties include PTDiffusionSession#allUserProperties
 as a key. In this case any other user properties are ignored.

 @param completionHandler Block to be called asynchronously on success or failure.
 If the operation was successful, the `error` argument passed to the block will
 be `nil` and the `registration` argument will not be `nil`.
 The completion handler will be called asynchronously on the main dispatch queue.

 @exception NSInvalidArgumentException If any argument is `nil`.

 @since 6.5
 */
-(void)addRequestHandler:(PTDiffusionRequestHandler *)handler
                 forPath:(NSString *)path
       sessionProperties:(NSArray<NSString *> *)sessionProperties
       completionHandler:(void (^)(PTDiffusionTopicTreeRegistration * _Nullable registration, NSError * _Nullable error))completionHandler;

/**
 Register a request handler to handle requests from other client session
 for a branch of the message path hierarchy.

 Each control session may register a single handler for a branch. When the
 handler is no longer required, it may be closed using the
 PTDiffusionTopicTreeRegistration provided by the completionHandler. To change
 the handler for a particular branch the previous handler must first be
 closed.

 This is equivalent to calling
 `#addRequestHandler:forPath:sessionProperties:completionHandler:`
 with an empty array for session properties.

 @param handler Specifies the handler to be registered at the server.

 @param path The request path.

 @param completionHandler Block to be called asynchronously on success or failure.
 If the operation was successful, the `error` argument passed to the block will
 be `nil` and the `registration` argument will not be `nil`.
 The completion handler will be called asynchronously on the main dispatch queue.

 @exception NSInvalidArgumentException If any argument is `nil`.

 @since 6.5
 */
-(void)addRequestHandler:(PTDiffusionRequestHandler *)handler
                 forPath:(NSString *)path
       completionHandler:(void (^)(PTDiffusionTopicTreeRegistration * _Nullable registration, NSError * _Nullable error))completionHandler;

/**
 Send a request to all sessions that satisfy a given session filter.

 @param request The request to send.

 @param filter The session filter expression.

 @param path The path to send the request to.

 @param responseStream The stream that will handle the incoming responses.
 The delegate associated with this stream will be sent messages asynchronously
 on the main dispatch queue.

 @param completionHandler Block to be called asynchronously on success or
 failure. If the operation was successful, the `error` argument passed to the
 block will be `nil`. The completion handler will be called asynchronously on
 the main dispatch queue. Success indicates that the server has dispatched all
 the requests.

 @note The completion handler block will be invoked with a `nil` for the `error`
 argument and zero for the `count` argument if no client sessions matched the
 filter.

 @exception NSInvalidArgumentException Raised if any supplied arguments are `nil`.

 @since 6.5
 */
-(void)   sendRequest:(PTDiffusionRequest *)request
             toFilter:(NSString *)filter
                 path:(NSString *)path
       responseStream:(PTDiffusionSessionResponseStream *)responseStream
    completionHandler:(void (^)(NSUInteger count, NSError * _Nullable error))completionHandler;


@end

NS_ASSUME_NONNULL_END
