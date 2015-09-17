//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BrowserPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate>
{
    UIPopoverPresentationController *_popoverPresentationController;
}

+ (_Bool)_popoverPresentationController:(id)arg1 hasValidPresentedViewControllerWithDelegateClass:(Class)arg2;
+ (void)attachDelegateToReloadOptionsPopoverPresentationController:(id)arg1;
+ (_Bool)isPopoverPresentationControllerShowingFromNavigationBar:(id)arg1;
+ (void)attachDelegateToReaderAppearancePopoverPresentationController:(id)arg1;
+ (void)attachDelegateToPopoverPresentationController:(id)arg1 presentingFromButtonIdentifier:(long long)arg2;
+ (void)_attachDelegate:(id)arg1 toPopoverPresentationController:(id)arg2;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (struct CGRect)sourceRect;
- (id)sourceView;
@property(readonly, nonatomic) BrowserController *browserController;
- (void)updatePopoverPosition;
- (id)initWithPopoverPresentationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end