//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRViewControllerTransitionConductor : NSObject <FRViewControllerTransitionConducting>
{
    id <FRViewControllerTransitionAnimationDataSource> _animationDataSource;
    UIViewController *_containerViewController;
    UIViewController *_currentViewController;
}

@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <FRViewControllerTransitionAnimationDataSource> animationDataSource; // @synthesize animationDataSource=_animationDataSource;
- (void).cxx_destruct;
- (void)transitionToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContainerViewController:(id)arg1;

@end