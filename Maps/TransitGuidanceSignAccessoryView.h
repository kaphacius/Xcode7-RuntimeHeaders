//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitGuidanceSignAccessoryView : GuidanceSignAccessoryView
{
    TransitGuidanceSignAccessoryViewItem *_item;
    NSLayoutConstraint *_topToLabelConstraint;
    NSLayoutConstraint *_labelToButtonConstraint;
    id <TransitGuidanceSignAccessoryViewProtocol> _delegate;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <TransitGuidanceSignAccessoryViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_stringFromItem;
- (void)setItem:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)_incidentButtonTapped:(id)arg1;
- (void)_updateConstraintsValue;
- (void)_createConstraints;
- (void)_updateFonts;
- (void)_createSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end