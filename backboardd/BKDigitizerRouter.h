//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BKDigitizerRouter : NSObject
{
    CADisplayLink *_hidDisplayLink;
    _Bool _dispatchingTouchesOnDisplayLink;
    NSMutableArray *_blocks;
    NSMutableSet *_clientTaskPortsWithEventsInCurrentFrame;
    int _activeTouchCount;
}

+ (id)sharedRouter;
- (void)routeEventWithBlock:(CDUnknownBlockType)arg1 event:(struct __IOHIDEvent *)arg2 clientTaskPort:(unsigned int)arg3;
- (void)_updateDisplayLinkPausedWithEvent:(struct __IOHIDEvent *)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchEventsFromQueue:(id)arg1;
- (void)_resetClientTaskPorts:(id)arg1;
- (_Bool)_shouldRecommendCoalescingEventToClientTaskPort:(unsigned int)arg1;
- (void)_recordSentEventForClientTaskPort:(unsigned int)arg1;
- (_Bool)_shouldDispatchUsingDisplayLinkAtTime:(double)arg1;
- (double)_positionWithinCurrentFrameAtTime:(double)arg1 duration:(double *)arg2;
- (void)startRunLoop;
- (void)dealloc;
- (id)init;

@end