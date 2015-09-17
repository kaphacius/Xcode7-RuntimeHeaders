//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ASTGestureRecorderMainViewController : PSViewController <ASTGestureRecorderViewControllerDelegate, ASTGestureRecorderControlsViewDelegate, UITextFieldDelegate>
{
    _Bool _inReplayMode;
    _Bool _shouldRecordRealTimeGesture;
    _Bool _isDisplayLinkInEffect;
    ASTGestureRecorderStyleProvider *_styleProvider;
    ASTGestureRecorderViewController *_gestureRecorderViewController;
    ASTGestureRecorderControlsView *_controlsView;
    UILabel *_instructionsLabel;
    UIBarButtonItem *_saveButton;
    unsigned long long _leftButtonIdentifier;
    unsigned long long _rightButtonIdentifier;
    double _gestureRecordingDidStartTimeInterval;
    id <ASTGestureRecorderMainViewControllerDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    id _appDidResignActiveNotificationHandlerToken;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) _Bool isDisplayLinkInEffect; // @synthesize isDisplayLinkInEffect=_isDisplayLinkInEffect;
@property(nonatomic) _Bool shouldRecordRealTimeGesture; // @synthesize shouldRecordRealTimeGesture=_shouldRecordRealTimeGesture;
@property(retain, nonatomic) id appDidResignActiveNotificationHandlerToken; // @synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(nonatomic) id <ASTGestureRecorderMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isInReplayMode) _Bool inReplayMode; // @synthesize inReplayMode=_inReplayMode;
@property(nonatomic) double gestureRecordingDidStartTimeInterval; // @synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval;
@property(nonatomic) unsigned long long rightButtonIdentifier; // @synthesize rightButtonIdentifier=_rightButtonIdentifier;
@property(nonatomic) unsigned long long leftButtonIdentifier; // @synthesize leftButtonIdentifier=_leftButtonIdentifier;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) ASTGestureRecorderControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) ASTGestureRecorderViewController *gestureRecorderViewController; // @synthesize gestureRecorderViewController=_gestureRecorderViewController;
@property(retain, nonatomic) ASTGestureRecorderStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderViewController:(id)arg1 setChromeVisible:(_Bool)arg2;
- (_Bool)isChromeVisibleForGestureRecorderViewController:(id)arg1;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
- (void)gestureRecorderViewControllerDidStartRecordingAtomicFingerPath:(id)arg1;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
- (void)_manageDisplayLinkManager:(_Bool)arg1;
- (id)_defaultInstructionalText;
- (void)_saveReplayableGesture;
- (void)_didSaveGestureWithName:(id)arg1;
- (_Bool)_canSaveGestureWithName:(id)arg1;
- (void)_saveWithMessage:(id)arg1;
- (void)_hide;
- (void)_reset;
- (void)_releaseOutlets;
- (void)_enterReplayMode;
- (void)_enterWaitingMode;
- (void)_clearProgressView;
- (void)_updateProgressView:(id)arg1;
- (void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 color:(int *)arg3 title:(id *)arg4;
- (void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(_Bool)arg4 animate:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_hideChromeButtonTapped:(id)arg1;
- (void)_hideChrome;
- (void)_unhideChrome;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initForRealTimeGesture:(_Bool)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end