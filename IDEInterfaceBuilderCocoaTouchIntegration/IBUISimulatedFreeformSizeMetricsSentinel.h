//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUISimulatedFreeformSizeMetricsSentinel : IBUISimulatedSizeMetrics
{
}

+ (id)sharedInstance;
- (id)fixedSizeMetricsForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2 freeformSize:(struct CGSize)arg3;
- (id)normalizedOrientationToSizeMap;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)displayName;
- (id)init;
- (id)initSharedInstance;

@end