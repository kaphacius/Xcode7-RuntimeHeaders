//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkNavigationStartupSession : NSObject <DirectionsManagerObserver>
{
    _Bool _started;
    _Bool _ended;
    DirectionsWaypoint *_destination;
    GEOURLRouteHandle *_routeHandle;
    _Bool _startWithETAOnly;
    id <StarkNavigationStartupDelegate> _delegate;
}

+ (id)nonNavigableRouteAlertUserInfo;
+ (id)sessionWithSearchResultDestination:(id)arg1 routeHandle:(id)arg2;
+ (id)sessionWithAddressDestination:(id)arg1;
+ (id)_runningSessions;
+ (void)_removeSessionFromRunningSessions:(id)arg1;
+ (void)_addSessionToRunningSessions:(id)arg1;
+ (_Bool)isStartingNavigation;
@property(nonatomic) __weak id <StarkNavigationStartupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool startWithETAOnly; // @synthesize startWithETAOnly=_startWithETAOnly;
- (void).cxx_destruct;
- (void)_presentErrorIfPossible:(id)arg1;
- (_Bool)_shouldPresentError:(id)arg1;
- (void)directionsManager:(id)arg1 didStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManagerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2;
- (void)directionsManagerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2;
- (void)directionsManagerDidCancelLoad:(id)arg1;
- (void)directionsManagerDidStartLoad:(id)arg1;
- (void)directionsManager:(id)arg1 didLoadRoute:(id)arg2;
- (void)_endWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithDestinationWaypoint:(id)arg1 routeHandle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end