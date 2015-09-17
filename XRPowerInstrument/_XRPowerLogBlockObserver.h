//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XRPowerLogBlockObserver : NSObject
{
    NSNumber *_streamID;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

- (void).cxx_destruct;
- (void)dispatchErrorEvent;
- (void)dispatchEndOfStreamEvent;
- (void)dispatchStreamDataEvent:(id)arg1;
- (id)initWithStreamID:(id)arg1 block:(CDUnknownBlockType)arg2 andQueue:(id)arg3;
- (id)init;

@end