//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol StarkNavigationStartupDelegate <NSObject>
- (void)navigationStartupSession:(StarkNavigationStartupSession *)arg1 didFinishWithError:(NSError *)arg2;
- (void)navigationStartupSession:(StarkNavigationStartupSession *)arg1 willRouteFromWaypoint:(DirectionsWaypoint *)arg2 toWaypoint:(DirectionsWaypoint *)arg3;

@optional
- (_Bool)navigationStartupSession:(StarkNavigationStartupSession *)arg1 shouldPresentError:(NSError *)arg2;
@end