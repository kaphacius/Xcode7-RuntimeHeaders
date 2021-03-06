//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GroupAnimation : NSObject
{
    NSMutableArray *_preparations;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
    _Bool _didPrepare;
    _Bool _didAnimate;
    _Bool _didComplete;
    _Bool _preventsAnimationDuringPreparation;
    _Bool _animated;
}

+ (id)animationForImplicitAnimationState;
+ (id)animationForAnimatedFlag:(_Bool)arg1;
+ (double)defaultAnimationDuration;
+ (id)animation;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool preventsAnimationDuringPreparation; // @synthesize preventsAnimationDuringPreparation=_preventsAnimationDuringPreparation;
- (void).cxx_destruct;
- (void)runWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned int)arg3;
- (void)runWithDefaultOptions;
- (void)complete:(_Bool)arg1;
- (void)animate;
- (void)prepare;
- (_Bool)_hasPrepared;
- (void)addPreparation:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end