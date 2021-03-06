//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRQuickActionMenuControlPresenter : NSObject
{
    CDUnknownBlockType _setup;
    CDUnknownBlockType _tearDown;
    CDUnknownBlockType _transition;
    CDUnknownBlockType _completion;
    double _duration;
    FRQuickActionMenuControl *_quickActionMenuControl;
}

+ (id)quickActionMenuControlTransitionWithSetup:(CDUnknownBlockType)arg1 tearDown:(CDUnknownBlockType)arg2 duration:(double)arg3 transition:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) __weak FRQuickActionMenuControl *quickActionMenuControl; // @synthesize quickActionMenuControl=_quickActionMenuControl;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType transition; // @synthesize transition=_transition;
@property(copy, nonatomic) CDUnknownBlockType tearDown; // @synthesize tearDown=_tearDown;
@property(copy, nonatomic) CDUnknownBlockType setup; // @synthesize setup=_setup;
- (void).cxx_destruct;
- (void)_beginDismissalAnimated:(_Bool)arg1;
- (void)_beginPresentationAnimated:(_Bool)arg1;

@end