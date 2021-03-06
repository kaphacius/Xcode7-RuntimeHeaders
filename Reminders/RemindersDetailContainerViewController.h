//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersDetailContainerViewController : UIViewController
{
    RemindersCardController *_cardController;
    UIView *_dimmingView;
    NSArray *_cardConstraints;
    NSArray *_dimmingConstraints;
    RemindersCardContentController *_contentController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) RemindersCardContentController *contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) RemindersCardController *cardController; // @synthesize cardController=_cardController;
- (void).cxx_destruct;
- (void)setDimmed:(_Bool)arg1;
- (void)setupConstraints;
- (struct UIEdgeInsets)cardInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)loadView;

@end