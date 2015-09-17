//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TwoLineTopBarTitleView : UIView
{
    UIView *_labelContainer;
    TopBarStyledLabel *_primaryLabel;
    TopBarStyledLabel *_secondaryLabel;
    NSLayoutConstraint *_interLabelBaselineConstraint;
    NSLayoutConstraint *_centeringConstraint;
    _Bool _dimmed;
    _Bool _darkUI;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)topBarTitleViewWithRoute:(id)arg1;
@property(nonatomic) _Bool darkUI; // @synthesize darkUI=_darkUI;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void).cxx_destruct;
- (id)_secondaryAttributeCollection;
- (id)_primaryAttributeCollection;
- (void)_updateLabelAttributes;
- (void)clearStrings;
@property(copy, nonatomic) NSString *secondaryAccessibilityText;
@property(copy, nonatomic) CDUnknownBlockType secondaryTextProvider;
@property(copy, nonatomic) CDUnknownBlockType primaryTextProvider;
- (id)_nearestNavigationBarParent;
- (void)_setupBaseConstraints;
- (double)_interLabelBaselineDistance;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end