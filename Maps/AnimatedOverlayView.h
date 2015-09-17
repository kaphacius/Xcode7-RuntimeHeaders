//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AnimatedOverlayView : UIView
{
    UITextField *_associatedTextField;
    UIView *_clippingView;
    UITextField *_textField;
    _Bool _isAnimating;
}

@property(retain, nonatomic) UITextField *associatedTextField; // @synthesize associatedTextField=_associatedTextField;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (void).cxx_destruct;
- (void)orientationWillChangeToInterfaceOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 associatedTextField:(id)arg2;

@end