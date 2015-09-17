//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkNavigationBar : UINavigationBar
{
    UIView *_overrideFocusView;
}

@property(nonatomic) __weak UIView *overrideFocusView; // @synthesize overrideFocusView=_overrideFocusView;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end