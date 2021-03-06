//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>
{
    CLTimer *timer;
    NSObject<OS_dispatch_source> *_source;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(nonatomic) __weak CLTimer *timer; // @synthesize timer;
- (void).cxx_destruct;
- (void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2;
- (void)dealloc;
- (id)initWithDispatchSilo:(id)arg1;

@end