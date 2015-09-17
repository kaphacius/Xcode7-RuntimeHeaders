//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTDisplayManager : NSObject <AXUIClientDelegate>
{
    NSLock *_lock;
    _Bool _displayShutdown;
    _Bool _shouldHideCursor;
    unsigned int _currentCursorContextID;
    struct CGPath *_currentCursorPath;
    AXUIClient *_uiClient;
    struct CGRect _currentCursorFrame;
}

+ (id)displayManager;
+ (void)initialize;
@property(retain, nonatomic) AXUIClient *uiClient; // @synthesize uiClient=_uiClient;
@property(nonatomic) _Bool shouldHideCursor; // @synthesize shouldHideCursor=_shouldHideCursor;
@property(nonatomic) struct CGPath *currentCursorPath; // @synthesize currentCursorPath=_currentCursorPath;
@property(nonatomic) unsigned int currentCursorContextID; // @synthesize currentCursorContextID=_currentCursorContextID;
@property(nonatomic) struct CGRect currentCursorFrame; // @synthesize currentCursorFrame=_currentCursorFrame;
- (void)setVoiceOverCaptionText:(id)arg1 withRange:(struct _NSRange)arg2 language:(id)arg3;
- (void)highlightBrailleDots:(id)arg1;
- (void)flashBrailleInsertedText:(id)arg1;
- (void)setScreenCurtainEnabled:(_Bool)arg1;
- (void)updateBrailleUIWithOrientation:(int)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;
- (void)hideBrailleUI;
- (void)showBrailleUIWithOrientation:(int)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;
- (void)updateVisualRotor:(id)arg1;
- (void)_handleRotorDidChange:(id)arg1;
- (void)setSwipeFrames:(id)arg1;
- (struct CGRect)_adjustFrameToFitScreen:(struct CGRect)arg1;
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(_Bool)arg5 animated:(_Bool)arg6;
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(_Bool)arg5;
- (void)_updateZoom:(struct CGRect)arg1 element:(id)arg2;
- (void)setCursorFrame:(struct CGRect)arg1;
- (void)setCursorFrameForElement:(id)arg1 animated:(_Bool)arg2;
- (void)setCursorFrameForElement:(id)arg1;
- (void)clearCursorFrame;
- (void)shutdown;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end