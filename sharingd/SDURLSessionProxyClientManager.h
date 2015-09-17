//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDURLSessionProxyClientManager : NSObject <NDBackgroundSessionManagerProtocol, SDURLSessionProxyClientDelegate>
{
    NSString *_clientBundleID;
    CDUnknownBlockType _boostReply;
    NSMutableDictionary *_sessions;
}

- (void).cxx_destruct;
- (void)proxyClientBecameInvalid:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)dropBoost;
- (void)boost:(CDUnknownBlockType)arg1;
- (void)boost;
- (void)devicesDisconnected;
- (void)devicesConnected;
- (void)cancelEverything;
- (id)sessionForIdentifier:(id)arg1;
- (id)initWithBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end