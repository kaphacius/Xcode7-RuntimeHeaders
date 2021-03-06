//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXBackBoardGlue : NSObject <AXBackBoardServerInstanceDelegate>
{
}

+ (_Bool)isDisplayBacklightOff;
+ (int)siriViewServicePid;
+ (int)assistiveTouchPid;
+ (int)accessibilityUIPid;
+ (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
+ (void)processExternalHIDEvent:(struct __IOHIDEvent *)arg1;
+ (struct CGPoint)displayConvertToCAScreen:(struct CGPoint)arg1;
+ (struct CGPoint)displayConvertFromCAScreen:(struct CGPoint)arg1;
+ (void)sendUserEventOccurred;
+ (void)setInvertColorsEnabled:(_Bool)arg1;
+ (id)hidClientConnectionManager;
+ (_Bool)invertColorsEnabled;
+ (void)initialize;
- (void)setVoiceOverItemChooserVisible:(_Bool)arg1;
- (void)setDisableSystemGestureRecognitionInEvents:(_Bool)arg1;
- (void)userEventOccurred;
- (void)enableEventTap:(_Bool)arg1 forApplication:(int)arg2;
- (unsigned int)contextIdHosterForContextId:(unsigned int)arg1;
- (unsigned int)contextIdForDisplayPoint:(struct CGPoint)arg1;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4;
- (struct CGRect)convertFrame:(struct CGRect)arg1 toContextId:(unsigned int)arg2;
- (struct CGRect)convertFrame:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (void)zoomListenerRegistered;
- (void)registerEventListener:(_Bool)arg1;
- (void)wakeUpDeviceIfNecessary;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
- (void)setSiriViewServicePid:(int)arg1;
- (int)accessibilityUIPid;
- (void)setAccessibilityUIPid:(int)arg1;
- (void)setAssistiveTouchPid:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end