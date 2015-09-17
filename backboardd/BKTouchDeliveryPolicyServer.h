//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BKTouchDeliveryPolicyServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, BKSTouchDeliveryPolicyServerInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_assertionConnections;
    BKSTouchDeliveryPolicy *_policy;
}

+ (id)sharedServer;
@property(retain, setter=_queue_setPolicy:) BKSTouchDeliveryPolicy *_policy; // @synthesize _policy;
- (_Bool)shouldCancelTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (id)shouldDeliverTouchesToContextIds:(unsigned int *)arg1 count:(unsigned char)arg2;
- (void)ipc_addPolicy:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end