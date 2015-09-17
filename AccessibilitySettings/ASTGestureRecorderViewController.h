//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ASTGestureRecorderViewController : UIViewController <ASTGestureRecorderViewDelegate, ASTGestureRecorderFingerPathCollectionDelegate>
{
    _Bool _shouldPreventFurtherRecording;
    _Bool _trackingTouches;
    _Bool _inReplayMode;
    _Bool _shouldRecordRealTimeGesture;
    ASTGestureRecorderStyleProvider *_styleProvider;
    id <ASTGestureRecorderViewControllerDelegate> _delegate;
    ASTGestureRecorderFingerPathCollection *_fingerPathCollection;
    ASTGestureRecorderFingerPathCollection *_dynamicFingerPathCollection;
    double _trackingTouchesDidStartTimeInterval;
    unsigned long long _replayTimestampIndex;
    unsigned long long _replayTimestampsCount;
    NSMutableArray *_replayDynamicFingerPaths;
    NSMutableDictionary *_instantReplayTimestampIndexes;
    NSMutableDictionary *_instantReplayPartialFingerPaths;
}

@property(retain, nonatomic) NSMutableDictionary *instantReplayPartialFingerPaths; // @synthesize instantReplayPartialFingerPaths=_instantReplayPartialFingerPaths;
@property(retain, nonatomic) NSMutableDictionary *instantReplayTimestampIndexes; // @synthesize instantReplayTimestampIndexes=_instantReplayTimestampIndexes;
@property(nonatomic) _Bool shouldRecordRealTimeGesture; // @synthesize shouldRecordRealTimeGesture=_shouldRecordRealTimeGesture;
@property(retain, nonatomic) NSMutableArray *replayDynamicFingerPaths; // @synthesize replayDynamicFingerPaths=_replayDynamicFingerPaths;
@property(nonatomic) unsigned long long replayTimestampsCount; // @synthesize replayTimestampsCount=_replayTimestampsCount;
@property(nonatomic) unsigned long long replayTimestampIndex; // @synthesize replayTimestampIndex=_replayTimestampIndex;
@property(nonatomic, getter=isInReplayMode) _Bool inReplayMode; // @synthesize inReplayMode=_inReplayMode;
@property(nonatomic) double trackingTouchesDidStartTimeInterval; // @synthesize trackingTouchesDidStartTimeInterval=_trackingTouchesDidStartTimeInterval;
@property(nonatomic, getter=isTrackingTouches) _Bool trackingTouches; // @synthesize trackingTouches=_trackingTouches;
@property(nonatomic) _Bool shouldPreventFurtherRecording; // @synthesize shouldPreventFurtherRecording=_shouldPreventFurtherRecording;
@property(retain, nonatomic) ASTGestureRecorderFingerPathCollection *dynamicFingerPathCollection; // @synthesize dynamicFingerPathCollection=_dynamicFingerPathCollection;
@property(retain, nonatomic) ASTGestureRecorderFingerPathCollection *fingerPathCollection; // @synthesize fingerPathCollection=_fingerPathCollection;
@property(nonatomic) id <ASTGestureRecorderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASTGestureRecorderStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)gestureRecorderFingerPathCollection:(id)arg1 didUpdateFingerPathAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderFingerPathCollection:(id)arg1 didInsertFingerPathAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderView:(id)arg1 setChromeVisible:(_Bool)arg2;
- (_Bool)isChromeVisibleForGestureRecorderView:(id)arg1;
- (_Bool)canToggleChromeForGestureRecorderView:(id)arg1;
- (id)gestureRecorderView:(id)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_freezeAllDynamicFingerPaths;
- (void)_updateDynamicFingerPathsWithTouches:(id)arg1 touchesDidEnd:(_Bool)arg2;
- (void)_didFinishReplayingRecordedGesture;
- (void)_didStopRecordingAtomicFingerPath;
- (void)_didStartRecordingAtomicFingerPath;
- (double)_maximumDurationOfRecordedGesture;
- (void)_releaseOutlets;
- (void)_clearWeakReferencesWithOutlets;
- (void)_endInstantReplay;
- (void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1;
- (void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1;
- (void)_advanceInstantReplayForStaticFingerAtIndex:(id)arg1;
- (void)_exitReplayMode;
- (void)_advanceReplay;
- (void)freezeAllDynamicFingerPaths;
- (void)reloadAllFingerPaths;
- (void)replayRecordedGesture;
- (void)preventFurtherRecording;
- (void)deleteAllFingerPaths;
- (id)recordedReplayableGestureRepresentation;
- (id)recordedGesturePropertyListRepresentationWithName:(id)arg1;
- (void)hideStaticView;
- (void)loadView;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, retain, nonatomic) ASTGestureRecorderView *gestureRecorderView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end