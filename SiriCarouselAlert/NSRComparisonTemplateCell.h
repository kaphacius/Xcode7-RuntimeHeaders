//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRComparisonTemplateCell : NSRTemplateCell
{
    NSRLabel *_leftTitleLabel;
    NSRLabel *_leftValueLabel;
    NSRImageView *_leftImageView;
    NSRLabel *_rightTitleLabel;
    NSRLabel *_rightValueLabel;
    NSRImageView *_rightImageView;
    NSRLabel *_footnoteLabel;
    NSRKeylineView *_verticalKeyline;
}

+ (float)lastLineBaselineDistanceFromBottomWithTemplate:(id)arg1;
+ (int)defaultLayoutType;
+ (id)_compactTitleFont;
+ (float)_compactTitleLeading;
+ (float)_valueSectionHeightShort;
+ (float)_valueSectionHeightRegular;
+ (float)_titleSectionHeightThreeColumn;
+ (float)_titleSectionHeight;
+ (float)_imageSectionHeight;
+ (id)_valueFontShort;
+ (id)_valueFontRegular;
+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2;
+ (id)_compactTitleLabel;
+ (id)_standardTitleLabel;
- (void).cxx_destruct;
- (id)_layoutValues;
- (void)setTemplateObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end