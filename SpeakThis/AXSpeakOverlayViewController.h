//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXSpeakOverlayViewController : UIViewController <AXUINubbitDelegate, AXSpeakOverlayControlBarDelegate>
{
    _Bool _inTabMode;
    _UIBackdropView *_containingView;
    AXAccessQueueTimer *_collapseTimer;
    _Bool _nubbitMovedOutsideOfTabMode;
    id <AXSpeakOverlayViewControllerDelegate> _delegate;
    NSArray *_highlightSelectionRects;
    AXSpeakOverlayControlBar *_bar;
    QSSelectionHighlightView *_highlightView;
    NSString *_currentAppBundleIdentifier;
    struct CGPoint _nubbitMoveStartPosition;
    struct CGPoint _gestureMoveStartPosition;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) NSString *currentAppBundleIdentifier; // @synthesize currentAppBundleIdentifier=_currentAppBundleIdentifier;
@property(nonatomic) struct CGPoint gestureMoveStartPosition; // @synthesize gestureMoveStartPosition=_gestureMoveStartPosition;
@property(nonatomic) struct CGPoint nubbitMoveStartPosition; // @synthesize nubbitMoveStartPosition=_nubbitMoveStartPosition;
@property(retain, nonatomic) QSSelectionHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) AXSpeakOverlayControlBar *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) NSArray *highlightSelectionRects; // @synthesize highlightSelectionRects=_highlightSelectionRects;
@property(nonatomic) __weak id <AXSpeakOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nubbitDidUpdatePosition:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tabModeButtonPressed;
- (void)controlBarDragged:(struct CGPoint)arg1;
- (void)headerTapped;
- (void)slowDownButtonPressed;
- (void)speedUpButtonPressed;
- (void)pauseButtonPressed;
- (void)stopButtonPressed;
- (void)playButtonPressed;
- (void)rewindButtonPressed;
- (void)fastForwardButtonPressed;
- (_Bool)isSpeaking;
- (void)didStop;
- (void)didResume;
- (void)didPause;
- (void)hide;
- (void)_updateForTabMode;
- (void)_unregisterNubbit;
- (void)_registerNubbit;
- (void)_saveNubbitPosition;
- (struct CGPoint)_denormalizedNubbitPositionForViewSize:(struct CGSize)arg1;
- (void)_enqueueCollapseTimer;
- (void)showWithPosition:(struct CGPoint)arg1 forApplication:(id)arg2;
- (id)title;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end