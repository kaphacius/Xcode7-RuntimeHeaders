//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MonthViewContainerViewController : MainViewControllerContainer
{
    CompactWidthMonthViewController *_compactWidthController;
    MultiColumnMonthViewController *_compactHeightController;
    LargeMonthViewController *_regularController;
}

@property(retain, nonatomic) LargeMonthViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) MultiColumnMonthViewController *compactHeightController; // @synthesize compactHeightController=_compactHeightController;
@property(retain, nonatomic) CompactWidthMonthViewController *compactWidthController; // @synthesize compactWidthController=_compactWidthController;
- (void).cxx_destruct;
- (_Bool)childViewControllerNeedsToBeInsettedFromNavigationElements;
- (Class)childViewControllerClassForTraits:(id)arg1;
- (id)childViewControllerForRegularWidthRegularHeight;
- (id)childViewControllerForRegularWidthCompactHeight;
- (id)childViewControllerForCompactWidthRegularHeight;
- (id)childViewControllerForUnknownTraits;
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)currentChildViewController;

@end