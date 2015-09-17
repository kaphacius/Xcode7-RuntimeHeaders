//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoNavOverviewModeController : PassThroughViewController <NMGizmoXPC, NanoNavTransitioningViewController, PassThroughViewControllerDelegate, MKMapViewDelegatePrivate, NanoNavChromeModeController>
{
    NanoNavMapRepresentationView *_mapRepresentation;
    NanoNavPreviewFooterView *_previewButtons;
    MapsAutoLayoutContext *_layoutContext;
    NanoNavTransitHeaderView *_transitHeader;
    _Bool _showsHeader;
    NSTimer *_snapBackTimer;
    NanoAppChromeViewController *_chromeViewController;
    NanoNavBarView *_footerView;
    NanoNavBarView *_headerView;
    NSString *_errorText;
}

@property(retain, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(readonly, nonatomic) NanoNavBarView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) NanoNavBarView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (void)_debug_fetchStateSnapshot:(CDUnknownBlockType)arg1;
- (void)historyUpdated;
- (void)pinsUpdated;
- (void)bookmarksUpdated;
- (void)updatePreviewButtons;
- (void)setShowsHeader:(_Bool)arg1;
- (void)updateInsets:(_Bool)arg1;
- (_Bool)respectBackButtonPopping;
- (void)handleNavigationStepChanged;
- (void)handleNavigationRouteStatusChanged;
- (void)handleNavigationRouteDetailsAndStatusChanged;
- (id)transitionControllerForPopToMode:(id)arg1;
- (id)transitionControllerForPushFromMode:(id)arg1;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (id)passThroughView;
- (id)actionGroup;
- (void)statusBarWasTapped;
- (void)refreshTitle;
- (void)_snapBackToRouteOverview:(id)arg1;
- (void)_recenterCameraOnRouteAnimated:(_Bool)arg1;
- (void)_cancelPreviewedRoute:(id)arg1;
- (void)_startPreviewedRoute:(id)arg1;
- (id)_disposableXPCConnection;
- (_Bool)mapIsVisible;
- (void)performOrderOutAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performOrderInAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_errorTextTapped:(id)arg1;
- (void)setErrorText:(id)arg1 animated:(_Bool)arg2;
- (id)viewController;
- (_Bool)shouldAllowActivityContinuation;
- (_Bool)allowsEdgeSwipePop;
- (_Bool)showsMapView;
- (void)reloadConstraints:(_Bool)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end