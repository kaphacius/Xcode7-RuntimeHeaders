//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRVMFaultsAggregate : XREventAggregate
{
    unsigned int _numberOfFaults;
    unsigned long long _totalCPUTime;
    unsigned long long _totalWaitTime;
    unsigned long long _totalDuration;
    unsigned long long _maxDuration;
}

- (void)includeData:(const struct XREventAggregateInput *)arg1;
- (unsigned long long)maxDuration;
- (unsigned long long)totalDuration;
- (unsigned long long)totalWaitTime;
- (unsigned long long)totalCPUTime;
- (unsigned int)count;

@end