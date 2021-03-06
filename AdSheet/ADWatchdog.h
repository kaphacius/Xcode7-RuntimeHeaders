//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADWatchdog : NSObject
{
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_source> *_checkerSource;
    double _runLoopStart;
    double _lastChecked;
    double _accumulatedSlack;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopObserver *_runLoopObserver;
}

+ (id)watchdogForRunLoop:(struct __CFRunLoop *)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(nonatomic) struct __CFRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property double accumulatedSlack; // @synthesize accumulatedSlack=_accumulatedSlack;
@property double lastChecked; // @synthesize lastChecked=_lastChecked;
@property double runLoopStart; // @synthesize runLoopStart=_runLoopStart;
@property(nonatomic) NSObject<OS_dispatch_source> *checkerSource; // @synthesize checkerSource=_checkerSource;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) NSObject<OS_dispatch_queue> *watchdogQueue; // @synthesize watchdogQueue=_watchdogQueue;
- (void)tickle;
- (void)_didExitRunLoop;
- (void)_didEnterRunLoop;
- (void)_doCheck;
- (id)initForRunLoop:(struct __CFRunLoop *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end