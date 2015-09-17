//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FROnboardingFadeAndScaleAppearanceAnimator : NSObject <FROnboardingAnimator>
{
    _Bool _isRunning;
    FROnboardingSubscribableItem *_item;
    double _delay;
    double _duration;
    double _currentAlpha;
    double _startingTime;
    FRAnimationFloatFunction *_floatCurveFunction;
    struct CGAffineTransform _currentTransform;
}

@property(retain, nonatomic) FRAnimationFloatFunction *floatCurveFunction; // @synthesize floatCurveFunction=_floatCurveFunction;
@property(nonatomic) double startingTime; // @synthesize startingTime=_startingTime;
@property(nonatomic) struct CGAffineTransform currentTransform; // @synthesize currentTransform=_currentTransform;
@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) FROnboardingSubscribableItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_updateValuesWithPercentComplete:(double)arg1;
- (void)updateTickWithAnimationEngine:(id)arg1 sessionTimeAtLastTick:(double)arg2 currentSessionTime:(double)arg3;
- (void)updateCellWithCurrentStateOfItem:(id)arg1;
- (void)addedToAnimationEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end