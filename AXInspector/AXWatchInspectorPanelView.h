//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXWatchInspectorPanelView : UIView
{
    UILabel *_titleLabel;
    UILabel *_labelLabel;
    UILabel *_hintLabel;
    UILabel *_valueLabel;
    UILabel *_traitsLabel;
}

@property(retain, nonatomic) UILabel *traitsLabel; // @synthesize traitsLabel=_traitsLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg1 withLocalizedFormatStringKey:(id)arg2 onLabel:(id)arg3;
- (void)setAccessibilityTraitsText:(id)arg1;
- (void)setAccessibilityValueTest:(id)arg1;
- (void)setAccessibilityHintTest:(id)arg1;
- (void)setAccessibilityLabelText:(id)arg1;
- (void)_addTitleSeparatorViewForFrame:(struct CGRect)arg1;
- (void)_addView:(id)arg1 AtPositionWithIndex:(unsigned long long)arg2 forFrame:(struct CGRect)arg3;
- (void)_roundTopTwoCorners;
- (id)initWithFrame:(struct CGRect)arg1;

@end