//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BKFenceArbiterServer : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> *_requestFenceQueue;
    NSObject<OS_dispatch_queue> *_createAssertionQueue;
}

- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

@end