//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoChromeViewController : ChromeViewController <UINavigationControllerDelegate>
{
    UINavigationController *_navController;
    NSMutableSet *_transitionContexts;
    NanoPinsManager *_pinsManager;
    NanoRouteAnnotationManager *_routeManager;
}

+ (Class)chromeViewItemClass;
@property(readonly, nonatomic) NanoRouteAnnotationManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) NanoPinsManager *pinsManager; // @synthesize pinsManager=_pinsManager;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)containsMode:(id)arg1;
- (id)_transitionContextForFromController:(id)arg1 toController:(id)arg2;
- (void)setModes:(id)arg1 animated:(_Bool)arg2;
- (void)setModes:(id)arg1 withTransition:(id)arg2;
- (void)_setModes:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3;
- (void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(_Bool)arg3;
- (void)insertMode:(id)arg1 aboveMode:(id)arg2 withTransition:(id)arg3;
- (void)_insertMode:(id)arg1 aboveMode:(id)arg2 withTransition:(id)arg3 animated:(_Bool)arg4;
- (void)removeMode:(id)arg1 animated:(_Bool)arg2;
- (void)removeMode:(id)arg1 withTransition:(id)arg2;
- (void)_removeMode:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3;
- (void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(_Bool)arg3;
- (void)replaceMode:(id)arg1 withMode:(id)arg2 withTransition:(id)arg3;
- (void)_replaceMode:(id)arg1 withMode:(id)arg2 withTransition:(id)arg3 animated:(_Bool)arg4;
- (void)replaceTopModeWithMode:(id)arg1 animated:(_Bool)arg2;
- (void)replaceTopModeWithMode:(id)arg1 withTransition:(id)arg2;
- (void)_replaceTopModeWithMode:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3;
- (void)popToFirstModeOfClass:(Class)arg1 push:(id)arg2 animated:(_Bool)arg3;
- (void)popToMode:(id)arg1 animated:(_Bool)arg2;
- (void)popToMode:(id)arg1 withTransition:(id)arg2;
- (void)_popToMode:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3;
- (void)popToRootModeAnimated:(_Bool)arg1;
- (void)popToRootModeWithTransition:(id)arg1;
- (void)_popToRootModeWithTransition:(id)arg1 animated:(_Bool)arg2;
- (void)popModeWithTransition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popModeWithTransition:(id)arg1;
- (void)popModeAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popModeAnimated:(_Bool)arg1;
- (void)_popModeIncludeNavController:(_Bool)arg1 withTransition:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushMode:(id)arg1 animated:(_Bool)arg2;
- (void)pushMode:(id)arg1 withTransition:(id)arg2;
- (void)_pushMode:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)setMapEdgeInsets:(struct UIEdgeInsets)arg1 forMode:(id)arg2 animated:(_Bool)arg3;
- (void)_setMapEdgeInsetsWithoutAnimating:(struct UIEdgeInsets)arg1 forMode:(id)arg2;
- (void)layoutForUnobscuredBoundsChange;
- (_Bool)_useBuiltinTransitions;
- (id)_itemForViewController:(id)arg1;
- (id)enteredForegroundDate;
- (id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)_topNanoMode;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)topViewController;
- (id)_navController;
- (id)passThroughView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end