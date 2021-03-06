//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NDSpringBoardApplication : NDApplication <NDSpringBoardAppObserver>
{
    NSObject<OS_dispatch_source> *_delayTimer;
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;
    NDSpringBoardApplication *_containingApplication;
}

+ (id)requestDelayQueue;
- (void).cxx_destruct;
- (void)applicationNoLongerInForeground:(id)arg1;
- (void)applicationEnteredForeground:(id)arg1;
- (void)applicationWasSuspended:(id)arg1;
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;
- (void)startNonDiscretionaryGracePeriodTimer;
- (void)disableNonDiscretionaryGracePeriodTimer;
- (void)setupNonDiscretionaryGracePeriodTimer;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)hasBackgroundTaskCompletion;
- (_Bool)isBeingDebugged;
- (_Bool)isHandlingBackgroudURLSessionWithIdentifier:(id)arg1;
- (_Bool)isSuspended;
- (_Bool)isAwake;
- (_Bool)canBeSuspended;
- (_Bool)isForeground;
- (_Bool)hasForegroundBackgroundStates;
- (_Bool)wakeForSessionIdentifier:(id)arg1;
- (void)_onqueue_resetRequestDelay;
- (void)setupDelayTimer;
- (_Bool)supportsWakes;
- (id)containerURL;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end