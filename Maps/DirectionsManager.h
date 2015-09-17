//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsManager : NSObject <RoutePickingSelectionDelegate, MNWaypointsLoaderDelegate, GEONavigationObserver, PBRequesterDelegate, MNNavigationSessionUIDelegate, MKLocationManagerObserver>
{
    NSMutableArray *_observers;
    id <DirectionsManagerDelegate> _delegate;
    DirectionsWaypoint *_startWaypoint;
    DirectionsWaypoint *_endWaypoint;
    CLLocation *_currentLocation;
    GEOURLRouteHandle *_routeHandle;
    MNTracePlayer *_tracePlayer;
    GEODirectionsRequestFeedback *_feedback;
    NSInvocation *_readyToStartRouteInvocation;
    MNWaypointsLoader *_waypointsLoader;
    CDStruct_4db06779 _timepointForLoadingRequest;
    BKSProcessAssertion *_assertion;
    long long _auxiliaryControlsOrigin;
    unsigned int _hasSeenInitialPageLoad:1;
    unsigned int _isLoading:1;
    unsigned int _shouldStartRoute:1;
    unsigned int _isUpdatingCurrentLocation:1;
    unsigned int _isResetting:1;
    _Bool _shouldClearWatchPreviewRouteContextOnReset;
    _Bool _canStart;
    _Bool _startingRoutesLoadAfterReset;
    _Bool _usingCacheForLastLoadingRequest;
    int _sortOption;
    MNDirectionsSession *_directionsSession;
    unsigned long long _transportType;
    NSDictionary *_userInfo;
    DirectionsHistoryItem *_historyItem;
    NSDate *_requestDate;
    NSData *_watchPreviewRouteContext;
    long long _avoidedTransitModes;
}

+ (int)sortOptionFromDefaults;
+ (long long)avoidedTransitModesFromDefaults;
+ (id)sharedDirectionsManager;
@property(readonly, nonatomic) int sortOption; // @synthesize sortOption=_sortOption;
@property(readonly, nonatomic) long long avoidedTransitModes; // @synthesize avoidedTransitModes=_avoidedTransitModes;
@property(readonly, nonatomic) _Bool usingCacheForLastLoadingRequest; // @synthesize usingCacheForLastLoadingRequest=_usingCacheForLastLoadingRequest;
@property(retain, nonatomic) NSData *watchPreviewRouteContext; // @synthesize watchPreviewRouteContext=_watchPreviewRouteContext;
@property(readonly, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) DirectionsHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
@property(nonatomic) _Bool startingRoutesLoadAfterReset; // @synthesize startingRoutesLoadAfterReset=_startingRoutesLoadAfterReset;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) MNTracePlayer *tracePlayer; // @synthesize tracePlayer=_tracePlayer;
@property(readonly, nonatomic) GEOURLRouteHandle *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(readonly, nonatomic, getter=isUpdatingCurrentLocation) _Bool updatingCurrentLocation; // @synthesize updatingCurrentLocation=_isUpdatingCurrentLocation;
@property(nonatomic) __weak id <DirectionsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) DirectionsWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(readonly, nonatomic) DirectionsWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
@property(readonly, nonatomic) MNDirectionsSession *directionsSession; // @synthesize directionsSession=_directionsSession;
- (void).cxx_destruct;
- (void)startDirectionsToSelectedRouteWithOptions:(long long)arg1;
- (long long)defaultOptions;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 andLegIndex:(unsigned long long)arg3;
- (void)navigationSessionWillStopNavigator:(id)arg1;
- (void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2;
- (void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
- (void)navigationSessionHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(_Bool)arg2;
- (void)navigationSessionHasArrived:(id)arg1;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(_Bool)arg12;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 updateETA:(id)arg2;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 eta:(id)arg4 closestStepIndex:(unsigned long long)arg5;
- (void)navigationSession:(id)arg1 updatePointOfInterest:(CDStruct_c3b9c2ee)arg2 focusStyle:(int)arg3;
- (void)navigationSession:(id)arg1 startingStepIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 failedWithErrorCode:(long long)arg2;
- (void)directionsSession:(id)arg1 failedWithError:(id)arg2;
- (void)directionsSession:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
- (void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2;
- (void)directionsSessionDidCancelRoute:(id)arg1;
- (void)directionsSessionDidCancelRecalculate:(id)arg1;
- (void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2;
- (void)directionsSessionWillRecalculateRoute:(id)arg1;
- (void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2;
- (void)_succeedLoading;
- (void)directionsSession:(id)arg1 didAppendRoutesInRouteSet:(id)arg2;
- (void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2;
- (void)directionsSessionWillRequestRoute:(id)arg1;
- (void)directionsSessionDidFailToRecordTrace:(id)arg1;
- (void)navigationSession:(id)arg1 didChangeState:(int)arg2;
- (void)navigationSession:(id)arg1 ignoredLocation:(id)arg2;
- (void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidance:(_Bool)arg2;
- (void)navigationSessionWillResumeNavigatorFromPause:(id)arg1;
- (void)navigationSessionWillPauseNavigator:(id)arg1;
- (void)navigationSessionWillEnd:(id)arg1;
- (void)navigationSession:(id)arg1 willStartNavigatorForRoute:(id)arg2;
- (void)directionsSessionUpdatedTrafficIncidents:(id)arg1;
- (void)directionsSessionUpdatedETA:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSession:(id)arg1 willStartForRoute:(id)arg2;
- (void)navigationDidChangeNavigationState:(id)arg1;
@property(readonly, nonatomic) CDStruct_4db06779 timePoint;
@property(readonly, nonatomic) long long currentLegIndex;
@property(readonly, nonatomic) long long currentStepIndex;
@property(retain, nonatomic) MNRoute *currentRoute;
- (unsigned long long)indexOfRoute:(id)arg1;
- (id)routes;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRoutes;
- (void)cancelLoadingRoutes;
- (_Bool)cacheIsAvailableForWaypoints:(id)arg1;
@property(readonly, nonatomic, getter=isLoadingRoutes) _Bool loadingRoutes;
- (void)beginLoadingWithRequest:(id)arg1;
- (void)beginLoadingRoutesFromWaypoint:(id)arg1 toWaypoint:(id)arg2 mode:(unsigned long long)arg3 traits:(id)arg4 timepoint:(CDStruct_4db06779)arg5 avoidedTransitModes:(long long)arg6 sortOption:(int)arg7 routeHandle:(id)arg8 tracePlayer:(id)arg9 withFeedback:(id)arg10 withUserInfo:(id)arg11;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)_failDuringLocationFindingWithError:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateForCurrentLocation;
- (void)_setUpdatingCurrentLocation:(_Bool)arg1;
- (CDUnknownBlockType)_routeRecorderErrorHandler;
- (unsigned long long)routesPerLaterPage;
- (unsigned long long)routesPerEarlierPage;
- (unsigned long long)routesPerInitialPage;
- (unsigned int)_requestMaxRouteCount;
- (int)_geoTransportType;
- (void)_loadRoutesInNewSessionWithStartGEOWaypoint:(id)arg1 endGEOWaypoint:(id)arg2 useCache:(_Bool)arg3 traits:(id)arg4;
- (void)waypointsLoader:(id)arg1 didLoadWaypointsForStart:(id)arg2 end:(id)arg3;
- (void)waypointsLoader:(id)arg1 didFailWithError:(id)arg2;
- (void)_startLoadNewRouteSet;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_endLocation;
- (id)_startLocation;
- (void)_recordOriginDestinationSearchResultsInTrace;
- (_Bool)canRunNavigationForRoute:(id)arg1;
@property(readonly, nonatomic) _Bool canStart; // @synthesize canStart=_canStart;
@property(readonly, nonatomic) _Bool canRunNavigationForSelectedRoute;
@property(readonly, nonatomic) RouteSet *currentRouteSet;
@property(readonly, nonatomic) MNRouteManager *currentRouteManager;
- (id)_currentNavigator;
- (void)dealloc;
- (void)_performReset;
- (void)reset;
- (void)setTracePlayer:(id)arg1;
- (id)init;
- (void)setSelectedRoute:(id)arg1;
- (id)selectedRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end