//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDPrivateClient : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerDaemonProtocol>
{
    NSXPCConnection *_connection;
    NSObject<WCDClientDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak NSObject<WCDClientDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (void)isExtensionPrivileged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handlePingForExtensionBundleID:(id)arg1;
- (void)removeActiveNotificationIdentifier:(id)arg1;
- (void)addActiveNotificationIdentifier:(id)arg1;
- (void)removeActiveGlanceIdentifier:(id)arg1;
- (void)addActiveGlanceIdentifier:(id)arg1;
- (void)reconnect;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end