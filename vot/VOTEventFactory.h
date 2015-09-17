//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTEventFactory : NSObject <VOTBrailleGestureManagerDelegate, VOTGesturedTextInputManagerDelegate, VOTElementUpdateProtocol, VOTGestureKeyboardDelegate>
{
    NSObject<VOTElementManagementProtocol> *_elementManager;
    NSObject<VOTRotorManagementProtocol> *_rotorManager;
    NSObject<VOTDirectTouchManagementProtocol> *_directTouchManager;
    id <VOTEventFactoryCallbackProtocol> _delegate;
    SCRCGestureFactory *_gestureFactory;
    int _state;
    int _direction;
    long long _rotorSoundZone;
    long long _continuityZone;
    double _startPinchDistance;
    long long _fingerCount;
    double _travelDistance;
    struct CGPoint _tapHoldOffset;
    VOTGestureEvent *_lastDownEvent;
    NSRecursiveLock *_currentElementLock;
    VOTElement *_currentElement;
    double _lastEchoTime;
    double _rotateStartTime;
    long long _rotateDirection;
    SCRCTargetSelectorTimer *_tapHoldTimer;
    SCRCTargetSelectorTimer *_scrollStatusTimer;
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;
    SCRCTargetSelectorTimer *_memorizeSoundTimer;
    SCRCTargetSelectorTimer *_systemControlLocationTimer;
    double _currentTouchForce;
    double _previewFingerStartingForce;
    struct CGPoint _previewFingerLocation;
    NSMutableArray *_previewFingerContextId;
    _Bool _isInPreview;
    double _previewStartTime;
    _Bool _isPreviewPinned;
    struct CGPoint _nativeSlidingOffset;
    struct CGPoint _nativeSlidingCenter;
    double _lastTwoFingerSlideTime;
    double _oldVolumeChangeDistance;
    double _volumeChangeDistance;
    SCRCTargetSelectorTimer *_volumeChangeTimer;
    struct __AXObserver *_axEventObserver;
    VOTGestureEvent *_currentGestureEvent;
    NSArray *_directInteractionElements;
    NSString *_zoomListenerIdentifier;
    struct {
        int direction;
        unsigned long long count;
        double continuityDistance;
        double distanceTraveled;
        struct CGPoint firstCountPoint;
    } _zigzag;
    double _lastNativeSlideCancel;
    NSMutableArray *_tapAndHoldContextIds;
    struct CGPoint _systemControlStartPoint;
    int _systemControlPosition;
    _Bool _systemControlActivated;
    double _systemControlStartSwipeTime;
    double _systemControlFingerDownFollowupTime;
    unsigned long long _lastScrollEventTime;
    long long _currentAccumulatedScroll;
    _Bool _scrollWheelIsActive;
    struct {
        _Bool tapAndHoldMode;
        _Bool orbMode;
        _Bool firedScrollStatus;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
    } _flags;
    double _gestureKeyboardShiftLockStartTime;
    AXAccessQueueTimer *_handwritingCaptureTimer;
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;
    AXEventProcessor *_eventProcessor;
    VOTElement *_lastTouchedDirectTouchElement;
}

+ (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;
+ (void)_updateZoomFrame:(struct CGRect)arg1;
+ (void)initialize;
@property(retain, nonatomic) VOTElement *lastTouchedDirectTouchElement; // @synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement;
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXAccessQueueTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;
- (void)brailleGestureManager:(id)arg1 setForcedOrientation:(int)arg2 shouldAnnounce:(_Bool)arg3;
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(int)arg2 inDirection:(long long)arg3;
- (_Bool)_shouldDismissPreviewOnLift;
- (void)_liftPreviewFinger;
- (void)_switchToTrackingMode;
- (void)_switchToTapAndHoldMode;
- (void)_simulatePop;
- (void)_reducePreviewFingerStartingForce:(double)arg1;
- (void)_simulatePreviewActionGesture;
- (_Bool)_isPreviewElementSelected;
- (void)directInteractionModeStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;
- (void)_handleKeyboardVisibilityChanged:(id)arg1;
- (void)_handleElementPreviewNotification:(id)arg1;
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;
- (void)_processTapAndHoldMode:(id)arg1;
- (void)_processIdle:(struct CGPoint)arg1;
- (void)_tapHoldFired;
- (void)_twoFingerHoldFired;
- (void)_stopMemorizingSession;
- (void)_startLabelElementSoundPlay;
- (void)currentElementDidUpdate:(id)arg1;
- (void)directInteractionElementsUpdated:(id)arg1;
- (void)_cancelTapAndHold:(struct CGPoint)arg1;
- (void)_cancelTapAndHoldWithValue:(id)arg1;
- (void)cancelTapAndHold:(struct CGPoint)arg1;
- (void)_scrollStatusFired;
@property(nonatomic) int orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;
- (void)startTapAndHoldMode;
- (id)currentElement;
- (void)_processGestureEvent:(id)arg1;
- (_Bool)_handleOrbEvent:(id)arg1;
- (id)_touchLocationsForGestureEvent:(id)arg1;
- (void)updateOrientation;
- (_Bool)_gestureEventIsInvalid:(id)arg1;
- (_Bool)directTouchElementsPresent;
- (_Bool)_handleDirectInteractionEvent:(id)arg1;
- (_Bool)_shouldUseGesturedTextInputManager;
- (void)_feedEventToHandwritingRecognition:(id)arg1;
- (void)gestureTappingCallbackWithFactory:(id)arg1;
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 location:(struct CGPoint)arg4;
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;
- (struct CGPoint)_averagePointForLastDownEvent;
- (void)_resetSystemControlStatus;
- (void)_sendSystemControlEvent:(id)arg1;
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;
- (void)_systemControlLocationTimer;
- (void)_volumeChangeTimer;
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;
- (_Bool)_shouldAttemptTracking;
- (_Bool)_isTapAndHoldPending;
- (void)gestureTrackingCallbackWithFactory:(id)arg1;
- (void)processEvent:(id)arg1;
- (_Bool)processEventAsGesturedTextInput:(id)arg1;
- (id)_currentGesturedTextInputManager;
- (int)_registerForAXNotifications:(_Bool)arg1;
- (_Bool)registerForEvents;
- (void)unregisterForEvents;
- (void)resetEventFactory;
- (void)_handleRotorChangedNotification:(id)arg1;
- (void)dealloc;
- (void)shutdown;
- (void)_registerForZoomListener;
- (void)_registerForIOHIDUsage;
- (_Bool)_eventFilter:(id)arg1;
- (id)_preprocessEventForSimulator:(id)arg1;
- (void)_handleIOHIDEvent:(id)arg1;
- (void)_updateTapSpeedFromPreferences;
- (id)init;
@property(readonly, nonatomic) VOTHandwritingManager *handwritingManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end