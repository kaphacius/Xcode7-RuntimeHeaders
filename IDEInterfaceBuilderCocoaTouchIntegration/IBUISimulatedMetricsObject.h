//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBUISimulatedMetricsObject <IBUISimulatedMetricsExtendedEdgeProvider>
@property(copy) IBUISimulatedSizeMetrics *simulatedDestinationMetrics;
@property(copy) IBUISimulatedOrientationMetrics *simulatedOrientationMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedBottomBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedTopBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics;
- (struct CGSize)effectiveFreeformSize;
- (IBUISimulatedMetricsContainer *)effectiveSimulatedMetrics;
@end