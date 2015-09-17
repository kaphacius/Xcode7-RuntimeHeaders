//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNNavigator : MNLocationTracker <MNGuidanceManagerDelegate, MNRouteManagerDelegate>
{
    id <MNNavigatorTestingDelegate> _testingDelegate;
    NSTimer *_locationUpdateOverdueTimer;
    MNMapMatcher *_mapMatcher;
    MNGuidanceManager *_guidanceManager;
    MNNavigationAudioSession *_audioSession;
    _Bool _hasGuidanceManagerConfiguredCameraFocus;
    GEOMotionContext *_motionContext;
    int _state;
    double _startTime;
    _Bool _guidanceEnabled;
    int _detectedTransportType;
    CDStruct_2c43369c _detectedTransportTypeOrigin;
    _Bool _switchTransportTypeOnReroute;
    long long _responseErrorCode;
    unsigned long long _responseErrorCount;
    MNLocation *_lastTrackedLocation;
    unsigned long long _sameLocationPushCounter;
    MNLocation *_lastLocationUsedForReroute;
    unsigned long long _reroutesOnFeature;
    double _firstPauseTime;
    unsigned long long _recalculationNetworkUnreachableCount;
    NSTimer *_recalculationRetryTimer;
    NSTimer *_trafficIncidentAlertRetryTimer;
    GEOMapRegion *_arrivalMapRegion;
    MNTrafficIncidentAlert *_pendingTrafficIncidentAlert;
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;
    _Bool _isSpeakingTrafficIncidentAlert;
    NSMutableArray *_previouslyDisplayedAlerts;
    int _trafficIncidentStatus;
    _Bool _paused;
}

+ (_Bool)matchedToEndOfLeg:(id)arg1 onRoute:(id)arg2 withRouteMatch:(id)arg3 andLocation:(id)arg4;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled; // @synthesize guidanceEnabled=_guidanceEnabled;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned long long reroutesOnFeature; // @synthesize reroutesOnFeature=_reroutesOnFeature;
@property(retain, nonatomic) MNLocation *lastLocationUsedForReroute; // @synthesize lastLocationUsedForReroute=_lastLocationUsedForReroute;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) MNLocation *lastTrackedLocation; // @synthesize lastTrackedLocation=_lastTrackedLocation;
@property(readonly, nonatomic) unsigned long long responseErrorCount; // @synthesize responseErrorCount=_responseErrorCount;
@property(readonly, nonatomic) long long responseErrorCode; // @synthesize responseErrorCode=_responseErrorCode;
@property(retain, nonatomic) MNGuidanceManager *guidanceManager; // @synthesize guidanceManager=_guidanceManager;
@property(retain, nonatomic) MNMapMatcher *mapMatcher; // @synthesize mapMatcher=_mapMatcher;
@property(retain, nonatomic) NSTimer *locationUpdateOverdueTimer; // @synthesize locationUpdateOverdueTimer=_locationUpdateOverdueTimer;
- (void).cxx_destruct;
- (Class)_guidanceManagerClass;
- (int)_checkForArrivalState:(id)arg1;
- (_Bool)_courseOverride:(id)arg1 courseOverride:(double *)arg2 courseAccuracy:(double *)arg3;
- (_Bool)_shouldMatchToRouteAfterRecalculateFrom:(id)arg1;
- (double)_distanceToForceReroute;
- (_Bool)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2;
- (int)_transportType;
- (long long)_clActivityType;
- (id)_newMapMatcher;
- (_Bool)answerTrafficRerouteWithResponse:(_Bool)arg1;
- (id)routeRepresentation;
- (_Bool)repeatCurrentTrafficAlert;
- (_Bool)repeatCurrentGuidance;
- (void)guidanceManagerHasReachedEndOfLeg:(id)arg1 announce:(id)arg2;
- (void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2;
- (void)retryLastRouteRecalc;
- (_Bool)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned long long)arg3;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (void)guidanceManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(_Bool)arg12;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 currentStepIndex:(unsigned long long)arg4 distanceUntilManeuver:(double)arg5 timeUntilManeuver:(double)arg6;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)guidanceManager:(id)arg1 updatePointOfInterest:(CDStruct_c3b9c2ee)arg2 focusStyle:(int)arg3;
- (id)_stepForGuidanceManager:(id)arg1 step:(id)arg2;
- (unsigned long long)_indexOfGuidanceManager:(id)arg1 step:(id)arg2;
- (_Bool)_exceedsReroutesThresholdsBetweenLocation:(id)arg1 andLocation:(id)arg2;
- (_Bool)_handleOffRouteFromLocation:(id)arg1 stepIndex:(unsigned long long)arg2 findContingencyOnly:(_Bool)arg3 forceRepeatedRecalc:(_Bool)arg4;
- (void)_setUpGuidanceManagerWithAttributedRoute:(id)arg1 allowMidRouteStart:(_Bool)arg2;
- (void)routeManager:(id)arg1 recordRouteResponse:(id)arg2;
- (void)routeManager:(id)arg1 recordRouteRequest:(id)arg2;
- (void)routeManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
- (void)routeManager:(id)arg1 failedWithError:(id)arg2;
- (void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
- (void)routeManagerCanceledRequest:(id)arg1;
- (void)routeManagerFailedToRecalculateRoute:(id)arg1 previousRoute:(id)arg2 errorCode:(long long)arg3;
- (void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(_Bool)arg3;
- (void)routeManager:(id)arg1 recalculatedNewRoute:(id)arg2;
- (void)routeManagerWillRecalculateRoute:(id)arg1;
- (void)routeManagerFailedToReceiveRoutes:(id)arg1 error:(id)arg2;
- (void)routeManager:(id)arg1 addedRoutesToRouteSet:(id)arg2;
- (void)routeManagerDidChangeActiveRouteSet:(id)arg1;
- (void)routeManagerWillRequestRoute:(id)arg1;
- (void)routeManagerDidFailToRecordTrace:(id)arg1;
- (void)routeManagerDidChangeState:(id)arg1 newRouteState:(int)arg2;
- (void)routeManagerUpdatedTrafficIncidents:(id)arg1;
- (void)routeManagerUpdatedETA:(id)arg1;
- (void)routeManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)_locationUpdateOverdueFireMethod:(id)arg1;
- (void)resume;
- (void)pause;
- (_Bool)shouldAllowPause;
- (void)_triggerArrivalAndAnnounce:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)_activateTrafficIncidentAlertForLocation:(id)arg1;
- (void)_updateTrafficIncidentAlertDistanceAndETA:(id)arg1;
- (void)_removeActiveTrafficIncidentAlert;
- (void)_updateTrafficIncidentAlertForLocation:(id)arg1;
- (void)_trafficIncidentAlertRetryTimerFired:(id)arg1;
- (void)_updateNavigatorForDisabledGuidance:(id)arg1;
- (void)_updateLocation:(id)arg1 withPreviousLocation:(id)arg2;
- (int)_checkForTransportTypeChange:(id)arg1;
- (_Bool)_checkIfNearEndOfRouteWithUncertainArrival:(id)arg1;
- (void)_updateDetectedMotionAtLocation:(id)arg1;
- (void)_updateStateForLocation:(id)arg1;
@property(readonly, nonatomic) _Bool isNavigating;
- (id)_filterLocationUpdateWithLocation:(id)arg1 navCourse:(double)arg2;
- (void)_resetLocationUpdateOverdueTimerWhenProjecting:(_Bool)arg1;
- (void)toggleTracePlaying:(_Bool)arg1;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)clearGuidanceManager;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)_resetToCurrentLocationOnRoute:(id)arg1;
- (void)_resetMapMatcherToLocation:(id)arg1 onRoute:(id)arg2;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
- (void)stopTracking;
- (void)_recalculationRetryTimerFired:(id)arg1;
- (void)setResponseErrorCode:(long long)arg1;
- (void)stopSpeaking;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2 ignorePromptStyle:(_Bool)arg3;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2;
- (void)startTrackingWithGuidanceEnabled:(_Bool)arg1 midRoute:(_Bool)arg2;
- (void)restartNavigator;
- (id)testingDelegate;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
- (void)_announceStart;
@property(readonly, nonatomic) GEOMapRegion *arrivalMapRegion;
- (int)transportType;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end