//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol BKProcessAssertionDelegate
- (NSString *)processAssertionDelegateDescription:(BKProcessAssertion *)arg1;
- (void)processAssertionResumed:(BKProcessAssertion *)arg1;
- (void)processAssertionSuspended:(BKProcessAssertion *)arg1;
- (void)processAssertionInvalidated:(BKProcessAssertion *)arg1;
- (void)processAssertion:(BKProcessAssertion *)arg1 preventSuspendOnSleepChanged:(_Bool)arg2;
- (void)processAssertion:(BKProcessAssertion *)arg1 wantsForegroundResourcePriorityCountChange:(_Bool)arg2;
- (void)processAssertion:(BKProcessAssertion *)arg1 preventIdleSleepChanged:(_Bool)arg2;
- (void)processAssertion:(BKProcessAssertion *)arg1 preventCPUThrottleDownChanged:(_Bool)arg2;
- (void)processAssertion:(BKProcessAssertion *)arg1 preventUIThrottleDownChanged:(_Bool)arg2;
- (void)processAssertion:(BKProcessAssertion *)arg1 preventTaskSuspendChanged:(_Bool)arg2;
@end