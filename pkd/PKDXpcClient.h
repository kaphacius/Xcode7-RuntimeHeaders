//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PKDXpcClient : NSObject
{
    _Bool _acceptWork;
    NSObject<OS_xpc_object> *_connection;
    PKDServer *_server;
    PKBundle *_bundle;
    struct __SecTask *__task;
    unsigned int _requestCount;
}

@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
@property struct __SecTask *_task; // @synthesize _task=__task;
@property _Bool acceptWork; // @synthesize acceptWork=_acceptWork;
@property(retain) PKBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) PKDServer *server; // @synthesize server=_server;
@property __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasEntitlement:(id)arg1;
- (id)entitlementValueForKey:(id)arg1;
@property(readonly) int pid;
- (void)dead;
- (void)dying;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 server:(id)arg2;

@end