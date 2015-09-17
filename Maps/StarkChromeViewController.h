//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkChromeViewController : MapsChromeViewController <UIGestureRecognizerDelegate, MapsChromeViews, UIViewControllerTransitioningDelegate, UIFocusEnvironment>
{
    _Bool _didLoadSimulatedInteractionModelFromDefaults;
    NSTimer *_autohideIdleTimer;
    UITapGestureRecognizer *_autohideTapRecognizer;
    unsigned long long _autohideInterruptionsCount;
    NSHashTable *_interactionTokens;
    UIView *_previouslyFocusedView;
    StarkChromeState *_lastOverlayState;
    _Bool _starkStatusBarIsHidden;
    _Bool _displayed;
    _Bool _ignoreTopBarUpdates;
    NSMutableSet *_physicalButtonsStarted;
    _Bool _shouldEnable3DMode;
    _Bool _shouldTurnNorthUp;
    _Bool _navigationOverviewShouldShowRoute;
    _Bool _haveVehicleDirection;
    long long _interactionModel;
    double _topBarInsets;
    long long _debugSimulatedInteractionModel;
    StarkOverlayView *_overlayView;
    StarkRouteGeniusAnnotationsManager *_routeGeniusAnnotationsManager;
    StarkAlertViewController *_currentAlert;
    long long _overrideUserTrackingMode;
    struct CGRect _viewBoundsNotObscuredByStatusBar;
}

+ (Class)userLocationViewClass;
+ (Class)containingViewClass;
+ (Class)chromeViewItemClass;
@property(nonatomic) _Bool haveVehicleDirection; // @synthesize haveVehicleDirection=_haveVehicleDirection;
@property(nonatomic) _Bool navigationOverviewShouldShowRoute; // @synthesize navigationOverviewShouldShowRoute=_navigationOverviewShouldShowRoute;
@property(nonatomic) _Bool shouldTurnNorthUp; // @synthesize shouldTurnNorthUp=_shouldTurnNorthUp;
@property(nonatomic) _Bool shouldEnable3DMode; // @synthesize shouldEnable3DMode=_shouldEnable3DMode;
@property(nonatomic) long long overrideUserTrackingMode; // @synthesize overrideUserTrackingMode=_overrideUserTrackingMode;
@property(retain, nonatomic) StarkAlertViewController *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) StarkOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double topBarInsets; // @synthesize topBarInsets=_topBarInsets;
@property(nonatomic) struct CGRect viewBoundsNotObscuredByStatusBar; // @synthesize viewBoundsNotObscuredByStatusBar=_viewBoundsNotObscuredByStatusBar;
@property(nonatomic) long long interactionModel; // @synthesize interactionModel=_interactionModel;
- (void).cxx_destruct;
- (void)recenterAndZoomMapView:(_Bool)arg1 toZoomLevel:(double)arg2 withUserTrackingMode:(long long)arg3 enter3DMode:(_Bool)arg4 retryCount:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)recenterAndZoomMapView:(_Bool)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
- (void)stopTrackingCurrentLocation;
- (void)startTrackingCurrentLocation;
- (id)newTraits;
- (_Bool)getPreferredUserInterfaceIdiom:(out long long *)arg1;
- (void)reinsertMapViewInViewHierarchy:(id)arg1 userLocationView:(id)arg2;
- (void)reinsertMapViewInViewHierarchy;
- (CDUnknownBlockType)presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentAlert:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)endInterruptingAutohideWithToken:(id)arg1;
- (void)beginInterruptingAutohideWithToken:(id)arg1;
- (void)_removeAutohideGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_addAutohideGestureRecognizer;
- (void)_stopAutohideIdleTimer;
- (void)_restartAutohideIdleTimer;
- (void)restartAutohideIdleTimerIfStarted;
- (void)_startAutohideIdleTimerIfStopped;
- (_Bool)isAutohidingContentHiddenForMode:(id)arg1;
@property(readonly, nonatomic, getter=isAutohidingContentForCurrentModeHidden) _Bool autohidingContentForCurrentModeHidden;
- (void)_setAutohidingContentForCurrentModeHidden:(_Bool)arg1;
- (struct UIEdgeInsets)labelEdgeInsets;
- (void)interruptAutohideForIncidentalInteraction;
- (void)_endAutohideInterruptingInteractionsWithCount:(unsigned long long)arg1;
- (void)_beginAutohideInterruptingInteractionsWithCount:(unsigned long long)arg1;
- (void)_autohideGestureRecognizerDetectedTap:(id)arg1;
- (void)_autohideBecameIdle;
- (void)_updateAutohideBehavior;
- (void)setAutohideBehavior:(long long)arg1 forMode:(id)arg2;
- (struct CGRect)_frameForTopAlertView:(id)arg1;
- (void)_willPresentTopBarAlertView:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (void)willUpdateFocusToView:(id)arg1;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (double)_overlayOffset;
- (struct CGRect)_overlayFrame;
- (void)_layoutOverlayView;
- (void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2;
- (void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (_Bool)handlePressesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)handlePressesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)handlePressesChanged:(id)arg1 withEvent:(id)arg2;
- (_Bool)handlePressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)handleWheelChangedWithEvent:(id)arg1;
- (_Bool)handleMoveWithEvent:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_zoomOut;
- (void)_zoomIn;
- (void)_layoutForInteractionModelChange;
- (_Bool)_viewControllerWasSelected;
@property(nonatomic) long long debugSimulatedInteractionModel; // @synthesize debugSimulatedInteractionModel=_debugSimulatedInteractionModel;
- (_Bool)_interactionModelChangedAfterUpdate;
- (void)layoutForUnobscuredBoundsChange;
- (_Bool)isCurrentMode:(id)arg1;
- (void)pushMode:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)unobscuredBoundsInContainingViewWithOptions:(long long)arg1;
- (id)_currentOverlayState;
- (id)_overlayItemsForItem:(id)arg1;
- (void)reloadOverlayAnimated:(_Bool)arg1;
- (void)_updateOverlayInGroupAnimation:(id)arg1;
- (struct UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(_Bool)arg1;
- (_Bool)_starkTopBarModifiesInsets;
- (_Bool)_starkStatusBarModifiesInsets;
- (struct UIEdgeInsets)_viewportInsets;
- (void)_resetMapViewDefaults:(id)arg1;
- (void)performInitialConfigurationOnMapView:(id)arg1;
- (void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1;
- (void)setMapView:(id)arg1;
- (id)topItem;
- (id)mapViewCurrentRouteMatch:(id)arg1;
@property(readonly, nonatomic) StarkRouteGeniusAnnotationsManager *routeGeniusAnnotationsManager; // @synthesize routeGeniusAnnotationsManager=_routeGeniusAnnotationsManager;
- (id)_topStarkChromeMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIView *containingView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapView *mapView;
@property(readonly) Class superclass;

@end