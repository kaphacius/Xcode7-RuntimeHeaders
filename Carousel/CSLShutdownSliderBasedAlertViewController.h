//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLShutdownSliderBasedAlertViewController : UIViewController <_UIActionSliderDelegate, CSLPIButtonHandlerProtocol>
{
    _Bool _isCompactDevice;
    _Bool _canDeactivateFromButtons;
    _Bool _disableButtonsAfterSliderCompleted;
    UIButton *_cancelButton;
    CSLShutDownActionSliderView *_powerDownSlider;
    CSLShutDownActionSliderView *_ecoModeSlider;
    CSLShutDownActionSliderView *_lockSlider;
    CSLShapeView *_darkeningUnderlayView;
    UIView *_backdropView;
    UIView *_fullScreenDimmingView;
    UIView *_scalingView;
    ORBAnimator *_orbAnimator;
    _Bool _orbZoomActive;
    _Bool _animatedSlidersOnViewDidAppear;
    id <CSLShutdownAlertProviderDelegate> _alertProviderDelegate;
    id <CSLShutdownContainerViewControllerDelegate> _containerDelegate;
}

@property(nonatomic) __weak id <CSLShutdownContainerViewControllerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <CSLShutdownAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate=_alertProviderDelegate;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1;
- (void)animateSliderToCompletion:(CDUnknownBlockType)arg1;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(float)arg2;
- (void)killTopAppBecauseButton:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)canBecomeFirstResponder;
- (void)batteryStateChanged:(id)arg1;
- (void)noteDeviceLockStateChanged:(id)arg1;
- (_Bool)powerSliderEnabled;
- (_Bool)lockButtonEnabled;
- (void)_ecoModeButtonPressed;
- (void)_handleBacklightChangeForLocking;
- (void)_lockButtonPressed;
- (void)_cancelButtonPressed;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateExclusionPathForSlider:(id)arg1;
- (void)showViews:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (float)knobWidth;
- (void)_endOrbZoom:(_Bool)arg1;
- (void)_setOrbZoomProgress:(float)arg1;
- (void)_beginOrbZoom;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end