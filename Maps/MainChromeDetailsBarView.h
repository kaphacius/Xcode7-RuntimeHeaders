//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MainChromeDetailsBarView : UIView
{
    BlurView *_backdrop;
    BarShadowView *_shadow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIButton *_button;
    UIView *_contentView;
    UIView *_spacer;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _isDark;
    NSArray *_activityIndicatorConstraints;
    NSLayoutConstraint *_primaryToTopContraint;
    NSLayoutConstraint *_secondaryToPrimaryConstraint;
    NSLayoutConstraint *_primaryTrailingToButtonConstraint;
    NSLayoutConstraint *_centerPrimaryLabelYConstraint;
    NSLayoutConstraint *_centerPrimaryLabelXConstraint;
    NSLayoutConstraint *_primaryLabelLeadingConstraint;
    _Bool _enabled;
    MainChromeDetailsBarContent *_content;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (double)defaultHeight;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MainChromeDetailsBarContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)transitionToPrivateStyle:(long long)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_updateActivityIndicatorFromContent;
- (_Bool)_showsActivity;
- (void)_updateFromContent;
- (void)setContent:(id)arg1 animated:(_Bool)arg2;
- (void)_updateTextColorFromContent;
- (void)setLightness:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 settingsButtonWidth:(double)arg2;

@end