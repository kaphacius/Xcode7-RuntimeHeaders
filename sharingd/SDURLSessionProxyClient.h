//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDURLSessionProxyClient : NSObject <NDBackgroundSessionProtocol, NSURLSessionDataDelegatePrivate>
{
    NSString *_clientBundleID;
    NSString *_fullIdentifier;
    NSString *_uuidString;
    NSURLSessionConfiguration *_configuration;
    id <NDBackgroundSessionClient><SDURLSessionCompatibilityProtocol><NSXPCProxyCreating> _clientProxy;
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _postInvalidationHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_resourceTimers;
    NSMutableDictionary *_watchdogTimers;
    NSMutableSet *_outstandingTaskIDs;
    NSMutableDictionary *_pendingMessagesByTask;
    NSMutableDictionary *_bodyStreamHandles;
    NSMutableDictionary *_identifiersToLocalTasks;
    NSMutableDictionary *_localTasksToIdentifiers;
    NSMutableDictionary *_identifiersToBodyStreamsFromCallback;
    NSDictionary *_delegateOptions;
    NSURLSession *_localSession;
    unsigned long long _taskSequenceNumber;
    _Bool _isInvalid;
    _Bool _shouldCancel;
    _Bool _expectingInvalidation;
    _Bool _shouldResendCreateSession;
    _Bool _isRetainingWiFi;
    id <SDURLSessionProxyClientDelegate> _delegate;
}

@property(readonly) id <SDURLSessionProxyClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)releaseWiFi;
- (void)retainWiFi;
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 options:(id)arg5 identifier:(unsigned int)arg6 reply:(CDUnknownBlockType)arg7;
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned int)arg2;
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned int)arg2;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned int)arg2;
- (void)setDescription:(id)arg1 forTask:(unsigned int)arg2;
- (void)resumeTaskWithIdentifier:(unsigned int)arg1;
- (void)suspendTaskWithIdentifier:(unsigned int)arg1;
- (void)cancelTaskWithIdentifier:(unsigned int)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;
- (void)cancelTaskWithIdentifier:(unsigned int)arg1;
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)deliverImmediateCancelledErrorForTaskWithIdentifier:(unsigned int)arg1;
- (void)sendTaskCreationMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)taskWithIdentifier:(unsigned int)arg1 taskInfo:(id)arg2 completedWithError:(id)arg3;
- (void)closeBodyStreamForTaskWithIdentifier:(unsigned int)arg1;
- (void)cancelWatchdogTimerForTaskWithIdentifier:(unsigned int)arg1;
- (void)cancelResourceTimerForTaskWithIdentifier:(unsigned int)arg1;
- (void)touchWatchdogTimerForTaskWithIdentifier:(unsigned int)arg1;
- (void)startResourceTimerForTaskWithIdentifier:(unsigned int)arg1 overriddenStartTime:(double)arg2;
- (void)handleGetAuthHeadersMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleConnectionWaitingMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)handleBecameInvalidMessage:(id)arg1;
- (void)handleWillRetryMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)handleDidReceiveDataMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleDidCompleteWithErrorMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)handleDidSendBodyDataMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)handleDidReceiveResponseMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleWillPerformRedirectionMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleOpenBodyStreamMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)handleWillSendRequestMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleDidReceiveChallengeMessage:(id)arg1 forTaskIdentifier:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2;
- (void)handleMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)inputStreamWithFileHandle:(id)arg1;
- (unsigned int)taskIdentifierForLocalTask:(id)arg1;
- (_Bool)taskIsUsingDirectWiFi:(unsigned int)arg1;
- (_Bool)shouldUseDirectWiFi;
- (void)startReadingBodyStreamFromFileHandle:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)performNextReadFromBodyStreamForTaskIdentifier:(unsigned int)arg1;
- (void)resendPendingMessage:(id)arg1 forWithIdentifier:(unsigned int)arg2;
- (void)resendCreateSessionMessage;
- (void)completeInvalidation;
- (void)devicesDisconnected;
- (void)devicesConnected;
- (void)cancelEverything;
- (id)descriptionForTaskWithIdentifier:(unsigned int)arg1;
- (id)taskMessageForIdentifier:(unsigned int)arg1;
- (id)baseMessage;
- (void)setXPCConnection:(id)arg1;
@property(readonly) NSString *identifier;
- (id)getTaskInformation;
- (void)updateCreateSessionMessageFromDelegateOptions:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 clientProxy:(id)arg3 delegateOptions:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end