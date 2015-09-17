//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FROfflineAwareViewControllerTransitionConductor : NSObject <FCNetworkReachabilityObserving, FRViewControllerTransitionAnimationDataSource, FRViewControllerTransitionConducting>
{
    id <FRViewControllerTransitionAnimationDataSource> _animationDataSource;
    id <FROfflineAwareViewControllerTransitionConductorDataSource> _offlineViewControllerDataSource;
    UIViewController<FROfflineModeSupport> *_lastRequestedViewController;
    UIViewController<FROfflineModeSupport> *_contentViewController;
    FRViewControllerTransitionConductor *_transitionConductor;
    FCNetworkReachability *_networkReachability;
    NSObject<OS_dispatch_group> *_activeTransitionGroup;
    long long _offlineReason;
}

@property(nonatomic) long long offlineReason; // @synthesize offlineReason=_offlineReason;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *activeTransitionGroup; // @synthesize activeTransitionGroup=_activeTransitionGroup;
@property(retain, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(retain, nonatomic) FRViewControllerTransitionConductor *transitionConductor; // @synthesize transitionConductor=_transitionConductor;
@property(nonatomic) __weak UIViewController<FROfflineModeSupport> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak UIViewController<FROfflineModeSupport> *lastRequestedViewController; // @synthesize lastRequestedViewController=_lastRequestedViewController;
@property(nonatomic) __weak id <FROfflineAwareViewControllerTransitionConductorDataSource> offlineViewControllerDataSource; // @synthesize offlineViewControllerDataSource=_offlineViewControllerDataSource;
@property(nonatomic) __weak id <FRViewControllerTransitionAnimationDataSource> animationDataSource; // @synthesize animationDataSource=_animationDataSource;
- (void).cxx_destruct;
- (void)_offlineAwareTransitionToContentViewController:(id)arg1 animated:(_Bool)arg2 isOnline:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_viewControllerForContentViewController:(id)arg1 isNetworkReachable:(_Bool)arg2;
- (void)_refreshCurrentViewController;
- (void)_refreshCurrentViewControllerWhenNotTransitioning;
- (_Bool)isOnline;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)viewControllerTransitionConductor:(id)arg1 animationParametersForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)contentViewControllerAvailabilityHasBeenDetermined;
@property(readonly, nonatomic) __weak UIViewController *currentViewController;
- (void)transitionToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContainerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end