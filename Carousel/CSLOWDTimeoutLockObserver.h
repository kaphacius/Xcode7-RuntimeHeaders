//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLOWDTimeoutLockObserver : CSLOWDTimeoutAggdObserver
{
    _Bool _lastEventWasTimeout;
    _Bool _wasDeviceUnlockedBeforeAssertionReleased;
}

- (void)wristDetectionSensorDidReleaseLockAssertion:(id)arg1;
- (void)wristDetectionSensorWillReleaseLockAssertion:(id)arg1;
- (void)wristDetectionSensorDidTimeout:(id)arg1;
- (void)wristDetectionSensorDidBegin:(id)arg1;

@end