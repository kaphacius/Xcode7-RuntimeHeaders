//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLCrossfadeTransaction : IOSSHLTransaction <CSLNavigationTransactionAnimator>
{
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    id <CSLNavigationTransactionAnimatorDelegate> _navigationTransactionAnimatorDelegate;
}

@property(nonatomic) __weak id <CSLNavigationTransactionAnimatorDelegate> navigationTransactionAnimatorDelegate; // @synthesize navigationTransactionAnimatorDelegate=_navigationTransactionAnimatorDelegate;
@property(readonly, nonatomic) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;
- (id)_customizedDescriptionProperties;
- (void)_addDeactivationTransactionIfNeeded;
- (void)_addActivationTransactionIfNeeded;
- (id)wrapperViewForView:(id)arg1 size:(struct CGSize)arg2;
- (void)_didComplete;
- (void)_begin;
- (id)initWithFromViewController:(id)arg1 toViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end