//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ClientOfLocalNoteServer : NSObject <_NSDNXPCObject>
{
    _NSDNXPCConnection *_client;
    id _registrar;
    NSObject<OS_xpc_object> *_queue;
    _Bool _suspended;
    NSMutableArray *_invalidHandlers;
    int _started;
    int _invalid;
    BOOL _postingForbidden;
    BOOL _registerAllForbidden;
    int _lock;
    int _pid;
    char *_processName;
}

- (void)handlePost:(id)arg1;
- (void)postNotification:(struct __CFString *)arg1 object:(struct __CFString *)arg2 token:(unsigned long long)arg3 options:(unsigned long)arg4 immediate:(unsigned char)arg5 userInfo:(id)arg6;
- (void)enqueuePost:(id)arg1;
- (void)flushQueue;
- (void)start;
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithClientConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end