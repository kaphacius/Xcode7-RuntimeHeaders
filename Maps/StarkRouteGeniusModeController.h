//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkRouteGeniusModeController : NSObject <StarkRouteGeniusFullSignViewDelegate, StarkLikelyRouteUpdaterObserver, StarkNavigationStartupDelegate, StarkGuidanceButtonOverlaySignDelegate, StarkMapBrowsingMode>
{
    StarkRouteGeniusFullSignView *_fullOverlaySign;
    StarkETAOnlyOverlaySign *_smallOverlaySign;
    StarkGuidanceButtonOverlaySign *_guidanceButtonOverlaySign;
    CDUnknownBlockType _completion;
    NSArray *_overlayItems;
    _Bool _showingFullSign;
    long long _outcome;
    StarkLikelyRouteUpdater *_likelyRouteUpdater;
    id <MapsChromeViews> _views;
    _Bool _isCurrent;
    StarkNavigationStartupSession *_currentSession;
    NSTimer *_etaUpdateTimer;
    _Bool _shouldRecenter;
    StarkMapBrowsingModeController *_mapBrowsingMode;
    StarkRouteGeniusLikelyRoutesProvider *_provider;
    SearchResult *_startPin;
    SearchResult *_destinationPin;
    id <StarkRouteGeniusModeDelegate> _delegate;
}

@property(nonatomic) __weak id <StarkRouteGeniusModeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldRecenter; // @synthesize shouldRecenter=_shouldRecenter;
@property(retain, nonatomic) SearchResult *destinationPin; // @synthesize destinationPin=_destinationPin;
@property(retain, nonatomic) SearchResult *startPin; // @synthesize startPin=_startPin;
@property(readonly, nonatomic) StarkRouteGeniusLikelyRoutesProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak StarkMapBrowsingModeController *mapBrowsingMode; // @synthesize mapBrowsingMode=_mapBrowsingMode;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)parentFocusEnvironment;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (void)dismiss;
- (void)resetLoading;
- (void)navigationStartupSession:(id)arg1 didFinishWithError:(id)arg2;
- (void)navigationStartupSession:(id)arg1 willRouteFromWaypoint:(id)arg2 toWaypoint:(id)arg3;
- (id)chrome;
- (void)_updateTraffic;
- (void)likelyRouteUpdaterUpdatedETA:(id)arg1;
- (void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2;
- (void)likelyRouteUpdaterRerouted:(id)arg1;
- (void)_updateSearchPins;
- (void)_updateETA;
- (void)_scheduleETAUpdate;
- (void)_cancelScheduledETAUpdate;
- (void)_updateSigns;
- (void)_updateAnnotations;
- (void)_completeWithRoute:(id)arg1 outcome:(long long)arg2;
- (void)signViewSelectedRoute:(id)arg1;
- (void)signViewCanceledRoute:(id)arg1;
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;
- (void)likelyRouteUpdaterArrived:(id)arg1;
- (void)_updateOverlayItems;
- (void)layoutForUnobscuredBoundsChange;
- (void)starkGuidanceOverlayButtonTapped:(id)arg1;
- (id)overlayItemsForState:(id)arg1;
- (void)startNavigationToLikelyRoute:(id)arg1 withGuidance:(_Bool)arg2;
- (void)collapseOverlay;
- (_Bool)starkTopBarModifiesInsets;
- (void)tappedSign;
- (void)setLikelyRouteUpdater:(id)arg1;
- (void)dealloc;
- (void)resignCurrentMode;
- (void)becomeCurrentModeWithViews:(id)arg1;
- (id)initWithProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end