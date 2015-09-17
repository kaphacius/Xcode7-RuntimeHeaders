//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ZoomLabeledSliderCell : PSTableCell
{
    _Bool _segmented;
    UIView *_leftView;
    UISlider *_sliderView;
    UIView *_rightView;
    UILabel *_rightLabel;
}

@property(nonatomic) _Bool segmented; // @synthesize segmented=_segmented;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UISlider *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
- (void)_updateRightLabelWithValue:(double)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (void)handleSliderBeingDragged:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end