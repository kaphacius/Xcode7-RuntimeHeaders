//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MNTracePlayerObserver <NSObject>
- (void)tracePlayerDidStayOnRoute:(MNTracePlayer *)arg1;
- (void)tracePlayer:(MNTracePlayer *)arg1 didJumpToRouteResponse:(GEODirectionsRouteResponse *)arg2 request:(GEODirectionsRouteRequest *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTime:(double)arg2 location:(CLLocation *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPause:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStop:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStart:(MNTracePlayer *)arg1;
@end