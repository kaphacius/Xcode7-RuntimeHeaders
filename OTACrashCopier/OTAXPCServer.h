//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface OTAXPCServer : NSObject
{
    NSString *_serviceName;
    NSString *_connectionEntitlement;
    NSObject<OS_xpc_object> *_serverConn;
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy, nonatomic) NSString *connectionEntitlement; // @synthesize connectionEntitlement=_connectionEntitlement;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)_handleError:(id)arg1 forConnection:(id)arg2;
- (void)_handleConnectionEvent:(id)arg1 forConnection:(id)arg2;
- (void)_handleNewConnection:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 targetQueue:(id)arg2;

@end