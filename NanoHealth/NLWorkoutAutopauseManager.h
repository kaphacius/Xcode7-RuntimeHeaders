//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLWorkoutAutopauseManager : NSObject <NLHIDHandlerObserver>
{
    id <HDHealthDaemon> _healthDaemon;
    NLHIDHandler *_hidHandler;
    unsigned int _consecutiveOffWristEvents;
}

- (void).cxx_destruct;
- (void)_pauseActiveWorkouts;
- (void)_forceHIDUpdate;
- (void)_incrementOffWristCount;
- (void)_stopTrackingOffWristEvents;
- (_Bool)_shouldPauseWorkouts;
- (_Bool)_trackingOffWristEvents;
- (_Bool)_shouldTrackOffWristEvents;
- (void)hidHandler:(id)arg1 didReceiveWristDetectEvent:(_Bool)arg2;
- (void)_handleOnWristEvent;
- (void)_handleOffWristEvent;
- (id)initWithHealthDaemon:(id)arg1 hidHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end