//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNNavigationModeController : NSObject <UIGestureRecognizerDelegate, TopBarAlertViewDelegate, MNNavigationDebugViewsControllerDelegate, MNNavigationOverviewBarDelegate, MNGuidanceCurrentRoadDisplayDelegate, MapsChromeModeController, MainChromeModeController, StarkChromeModeController, MNLockScreenLayerSource, DirectionsStepsTableViewControllerDelegate, UIPopoverControllerDelegate, MNNavigationSessionUIDelegate, MNNavigationDisplayDelegate, MNGuidanceSignsDisplayDelegate>
{
    id <MapsChromeViews> _views;
    MNNavigationSession *_navigationSession;
    _Bool _isNavigating;
    _Bool _cameraShouldAnimateToRoute;
    MNNavigationDisplay *_navigationDisplay;
    VKCameraContext *_cameraContext;
    _Bool _topBarHidden;
    id <MNNavigationModeControllerDelegate> _delegate;
    MapsChromeViewController *_chromeViewController;
    MNNavigationDebugViewsController *_debugViewsController;
    MNGuidanceSignsDisplay *_guidanceDisplay;
    MNGuidanceCurrentRoadDisplay *_currentRoadDisplay;
    UIAlertController *_failRequestRouteAlert;
    unsigned long long _currentStepIndex;
    NSDate *_savedAutoHideDate;
    unsigned long long _autoHideSuspendCount;
    _Bool _supressTopBarHidingTimerOnNextViewAppear;
    _Bool _topBarWasLastShownForMessageDisplay;
    NSArray *_controlBarItems;
    ControlBarView *_controlBar;
    _Bool _isHoldingPortraitToReturnFromLockScreen;
    DirectionsStepsTableViewController *_directionsStepsTableViewController;
    UINavigationController *_directionsStepsNavController;
    UIGestureRecognizer *_topBarDisplayGesture;
    _Bool _hidingBarsSuppressed;
    _Bool _appActiveWithOurViewVisible;
    _Bool _zoomWasEnabled;
    _Bool _scrollWasEnabled;
    _Bool _rotationWasEnabled;
    _Bool _tiltWasEnabled;
    NSTimer *_topBarHidingTimer;
    _Bool _shouldStartTopBarHidingTimerOnPopoverDismissal;
    NSTimer *_repeatedPeriodicAudioTimer;
    _Bool _playRepeatedPeriodicAudio;
    NSTimer *_arrivalInBackgroundTimer;
    _Bool _isAnimatingSignsDisplay;
    _Bool _needsShowTopBarAnimated;
    _Bool _needsHideTopBarIfAppropriateAnimated;
    CDUnknownBlockType _dismissHandler;
    ThreeDButton *_threeDButton;
    MNGuidanceOverviewBar *_overviewBar;
    NSMutableDictionary *_guidanceUpdates;
    _Bool _isPendingReinsertionInViewHierarchy;
    Presenter *_directionsStepsListPresenter;
    UIView *_emptyButtonPlaceHolder;
    MNTrafficIncidentAlert *_trafficIncidentAlert;
    CDUnknownBlockType _trafficIncidentAlertResponse;
    NSMutableArray *_dismissAlertViewCompletionHandlers;
    _Bool _isSpeakingTrafficIncidentAlert;
    CDUnknownBlockType _returnLayerToSelfBlock;
}

@property(retain, nonatomic) NSTimer *_arrivalInBackgroundTimer; // @synthesize _arrivalInBackgroundTimer;
@property(retain, nonatomic) MNGuidanceSignsDisplay *guidanceDisplay; // @synthesize guidanceDisplay=_guidanceDisplay;
@property(retain, nonatomic) UIAlertController *failRequestRouteAlert; // @synthesize failRequestRouteAlert=_failRequestRouteAlert;
@property(copy, nonatomic) CDUnknownBlockType _returnLayerToSelfBlock; // @synthesize _returnLayerToSelfBlock;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(retain, nonatomic) id <MapsChromeViews> views; // @synthesize views=_views;
@property(nonatomic) ChromeViewController *chromeViewController;
@property(nonatomic) __weak id <MNNavigationModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldTimeoutAfterDisconnect;
- (void)_didSetNavigationBarsHidden:(_Bool)arg1;
- (struct UIEdgeInsets)_minimumEdgeInsets;
- (void)_audioNotificationForNewTransportType:(int)arg1 navigationSession:(id)arg2;
- (id)_newGuidanceSignsDisplayInView:(id)arg1;
- (void)_navigationUpdatedPointOfInterest:(CDStruct_c3b9c2ee)arg1 focusStyle:(int)arg2;
- (void)_clearAllAnnotations;
- (void)_prepareViewForLockScreen:(id)arg1;
- (void)_threeDButtonTapped:(id)arg1;
- (_Bool)_is3D;
- (void)_pauseNavigationCameraMotion;
- (void)_stopNavigationCameraMotion;
- (void)_startNavigationCameraMotionAnimated:(_Bool)arg1;
- (void)_updateWithMatchedLocation:(id)arg1;
- (id)currentRouteMatch;
- (void)navigationDisplay:(id)arg1 didChangeUserTrackingMode:(long long)arg2;
- (void)mapView:(id)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)navigationDebugViewsTracePlaybackDidSeekToGuideMePortionOfTransitLeg:(id)arg1;
- (void)navigationDebugViewsTracePlaybackDidSeek:(id)arg1;
- (void)navigationDebugViewsTracePlaybackSpeedDidChange:(id)arg1 speedMultiplier:(double)arg2;
- (_Bool)pressesBegan:(id)arg1;
- (void)_directionsListViewButtonTapped:(id)arg1;
- (void)guidanceSignsDisplayChoseToggleGuidance:(id)arg1;
- (void)guidanceSignsDisplayChoseZoomIn:(id)arg1;
- (void)guidanceSignsDisplayChoseZoomOut:(id)arg1;
- (void)_dismissListView:(id)arg1;
- (id)directionsStepsNavController;
- (id)directionsStepsTableViewController;
- (id)_threeDButton;
- (void)_speakRepeatedPeriodicAudio:(id)arg1;
- (void)_stopRepeatedPeriodicAudio;
- (void)_startRepeatedPeriodicAudio;
- (void)_handleDefaultsChange:(id)arg1;
- (void)_presentDirectionsStepsList;
- (_Bool)presentMenu;
- (void)_setCameraDisplayMode:(long long)arg1;
- (long long)_cameraDisplayMode;
- (_Bool)_supportsCameraDisplayModeChanges;
- (void)guidanceSignsDisplayDidAnimateSign:(id)arg1;
- (void)guidanceSignsDisplayWillAnimateSign:(id)arg1;
- (void)guidanceSignsDisplayChoseOverview:(id)arg1;
- (void)guidanceSignsDisplayChoseEndNavigation:(id)arg1;
- (void)guidanceSignsDisplayUpdateBlur:(id)arg1 frame:(struct CGRect)arg2;
- (void)guidanceSignsDisplayToggleNavigationBar:(id)arg1;
- (void)guidanceSignsDisplayRepeatGuidance:(id)arg1;
- (void)guidanceSignsDisplayDidInvalidateMinimumEdgeInsets:(id)arg1;
- (void)guidanceCurrentRoadDisplayDidInvalidateMinimumEdgeInsets:(id)arg1;
- (void)_updateInsets;
- (void)navigationOverviewBarSizeWillChange:(id)arg1;
- (id)currentExpandedTravelTimeForNavigationOverviewBar:(id)arg1 forTimeInterval:(double)arg2;
- (void)navigationOverviewBarEndTapped:(id)arg1;
- (void)navigationOverviewBarOverviewTapped:(id)arg1;
- (id)directionsController;
- (void)directionsStepsTableViewController:(id)arg1 didTapRowForSearchResult:(id)arg2;
- (_Bool)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1;
- (void)directionsStepsTableViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2;
- (void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2;
- (void)navigationSession:(id)arg1 ignoredLocation:(id)arg2;
- (void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2;
- (void)navigationSessionWillEnd:(id)arg1;
- (void)navigationSession:(id)arg1 didEnableGuidance:(_Bool)arg2;
- (void)navigationSessionWillResumeNavigatorFromPause:(id)arg1;
- (void)navigationSessionWillPauseNavigator:(id)arg1;
- (void)navigationSession:(id)arg1 willStartNavigatorForRoute:(id)arg2;
- (void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2;
- (void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
- (void)directionsSessionUpdatedTrafficIncidents:(id)arg1;
- (void)directionsSessionUpdatedETA:(id)arg1;
- (void)_appResigningActiveWithOurViewVisible:(id)arg1;
- (void)_endNavigationAfterArrivalInBackground;
- (void)_discardArrivalInBackgroundTimer;
- (void)_startArrivalInBackgroundTimer;
- (void)navigationSession:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 andLegIndex:(unsigned long long)arg3;
- (void)navigationSessionWillStopNavigator:(id)arg1;
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
- (void)_updateRoutePreloadSession;
- (void)directionsSessionDidCancelRoute:(id)arg1;
- (void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2;
- (void)directionsSessionDidCancelRecalculate:(id)arg1;
- (void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2;
- (void)directionsSessionWillRecalculateRoute:(id)arg1;
- (void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2;
- (void)directionsSession:(id)arg1 didAppendRoutesInRouteSet:(id)arg2;
- (void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2;
- (void)directionsSessionDidFailToRequestRoute:(id)arg1 problemDetails:(CDStruct_649113e9 *)arg2;
- (void)directionsSessionWillRequestRoute:(id)arg1;
- (void)directionsSessionDidFailToRecordTrace:(id)arg1;
- (void)navigationSession:(id)arg1 didChangeState:(int)arg2;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSession:(id)arg1 willStartForRoute:(id)arg2;
- (void)_performRepeatableUpdatesAgainIfNeeded;
- (void)_repeatUpdatesForKey:(id)arg1;
- (void)_removeAllRepeatableUpdates;
- (void)_removeAllRepeatableUpdatesForKeys:(id)arg1;
- (void)_removeRepeatableUpdateForKey:(id)arg1;
- (id)_signRepeatableUpdateKeys;
- (void)_performRepeatableUpdateForKey:(id)arg1 onEachGuidanceOutput:(CDUnknownBlockType)arg2;
- (void)_eachGuidanceOutput:(CDUnknownBlockType)arg1;
- (void)_sendTrafficRerouteFeedbackForAlert:(id)arg1 actionType:(int)arg2;
- (void)_dismissTopBarAlertViewOnlyIfTrafficAlertView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isDismissingTrafficAlertView;
- (void)_dismissTrafficAlertWithTimer:(id)arg1 acceptedNewRoute:(_Bool)arg2 timedOut:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissTrafficAlertWithTimer:(id)arg1;
- (void)_updateTopBarAlertView;
- (void)_showTrafficAlertViewForAlert:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)topBarAlertViewWasSwiped:(id)arg1;
- (void)topBarAlertViewWasTapped:(id)arg1;
- (void)topBarAlertViewButtonWasTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)destinationTimeZone;
- (void)_setRoute:(id)arg1;
- (void)_alertTraceRecorderFailed;
- (void)_endNavModeAnimated:(_Bool)arg1 isNavigationEnding:(_Bool)arg2 destination:(long long)arg3;
- (void)endNavModeAnimated:(_Bool)arg1 isNavigationEnding:(_Bool)arg2;
- (void)endNavModeAnimated:(_Bool)arg1;
- (void)_clearNavigationRoute;
- (void)goToOverviewAnimated:(_Bool)arg1;
- (void)goToOverview;
- (void)_dismissNavWithDestination:(long long)arg1 animated:(_Bool)arg2;
- (void)_displayFailureAlertWithTitle:(id)arg1;
@property(readonly, nonatomic) MKMapView *mapView;
- (void)_cleanUp;
- (void)prepareToRunNavigationAnimated:(_Bool)arg1 startCamera:(_Bool)arg2;
- (void)prepareToRunNavigationAnimated:(_Bool)arg1;
- (void)modeWasSelected;
- (id)navigationItem;
- (void)hideAutohidingContentWithAnimation:(id)arg1;
- (void)showAutohidingContentWithAnimation:(id)arg1;
- (id)starkChromeViewController;
- (id)mainChromeViewController;
- (id)_mainChromeViewControllerFromMapsDelegateIfNeeded:(_Bool)arg1;
- (id)_chromeViewControllerOfClass:(Class)arg1;
- (void)_didEndApplicationResumeAnimation:(id)arg1;
- (void)didReleaseViewForLockScreenDisplay;
- (void)_appDidBecomeActiveWithOurViewVisible;
- (void)didEndDisplayingViewInLockScreenDisplay;
- (void)willBeginDisplayingViewInLockScreenDisplay;
- (void)viewNeedsLayoutInLockScreenDisplay;
- (id)viewForLockScreenDisplayWithReleaseRequestBlock:(CDUnknownBlockType)arg1;
- (void)layoutForUnobscuredBoundsChange;
- (void)modeDidDisappear:(_Bool)arg1;
- (void)modeWillDisappear:(_Bool)arg1;
- (void)modeDidAppear:(_Bool)arg1;
- (void)modeWillAppear:(_Bool)arg1;
- (_Bool)overridesChromeViewDidAppearStatusBarHiddenUpdates;
- (void)setCameraShouldAnimateToRoute;
- (void)_updateGuidanceRoadDescription:(id)arg1 locationIsUnreliable:(_Bool)arg2;
- (void)resetNavigationMode;
- (void)sizeClassDidChangeToSizeClass:(CDStruct_912cb5d2)arg1;
- (void)didRotate;
- (void)willRotateWithDuration:(double)arg1;
- (void)willAnimateRotationWithDuration:(double)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_deviceOrientationDidChange:(id)arg1;
- (void)_endDisplayingMessageInTopBar;
- (id)_overviewBar;
- (void)_setTopBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_hideTopBarIfAppropriateAnimated:(_Bool)arg1;
- (void)_hideTopBarIfAppropriate:(id)arg1;
- (void)_showTopBarAnimated:(_Bool)arg1;
- (void)_toggleTopBar:(id)arg1;
- (void)_discardTopBarHidingTimer;
- (double)hiddenTopMargin;
- (void)_startTopBarHidingTimerWithDuration:(double)arg1;
- (void)_stopTopBarHidingTimer;
- (void)_resumeTopBarHidingTimerWithDuration:(double)arg1;
- (void)_suspendTopBarHidingTimer;
- (_Bool)_isTopBarSupposedToBeHidden;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)parentFocusEnvironment;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (void)updateBlurDisabledBackgroundColor:(id)arg1 blurViewStyle:(long long)arg2 transitionToBackdropStyle:(long long)arg3;
- (void)didUpdateHFPPreferenceForAudioSetting:(_Bool)arg1;
- (void)didPickRouteForAudioSetting;
- (void)didHideAudioSettings;
- (void)didShowAudioSettings;
- (_Bool)needsAudioControl;
- (void)didRemoveFromChromeViewController;
- (void)willChangeToLightLevel:(long long)arg1 animation:(id)arg2;
- (void)willRemoveFromChromeViewController;
- (void)chromeDidBecomeSuppressed;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (id)overlayItemsForState:(id)arg1;
- (double)autohideIdlenessInterval;
- (id)mapViewDelegate;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (_Bool)_canBecomeLockScreenLayerSource;
- (_Bool)canDisplayTraffic;
- (_Bool)shouldSlideTopBar;
- (void)_refreshCameraPosition;
- (id)_controlBarItems;
- (id)_emptyButton;
- (id)_directionsListViewControl;
- (void)_showTraceControls;
@property(readonly, nonatomic) MNTracePlayer *tracePlayer;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) double zoomScale;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end