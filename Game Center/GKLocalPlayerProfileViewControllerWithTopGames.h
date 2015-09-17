//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKLocalPlayerProfileViewControllerWithTopGames : GKLocalPlayerProfileViewController
{
    _Bool _didSetConstraints;
    GKGamesViewController *_topGamesViewController;
    _GKCollectionViewWrapperAdaptorView *_topGamesViewWrapperView;
    NSLayoutConstraint *_topGamesWrapperViewWidthConstraint;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;
}

@property(nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property(nonatomic) _Bool didSetConstraints; // @synthesize didSetConstraints=_didSetConstraints;
@property(retain, nonatomic) NSLayoutConstraint *topGamesWrapperViewWidthConstraint; // @synthesize topGamesWrapperViewWidthConstraint=_topGamesWrapperViewWidthConstraint;
@property(retain, nonatomic) _GKCollectionViewWrapperAdaptorView *topGamesViewWrapperView; // @synthesize topGamesViewWrapperView=_topGamesViewWrapperView;
@property(retain, nonatomic) GKGamesViewController *topGamesViewController; // @synthesize topGamesViewController=_topGamesViewController;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)automaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (id)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (void)didUpdateModel;
- (void)adjustConstraintsForOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end