//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDDataUnitGroupDescriptionView : UIView
{
    HKDataUnitGroup *_dataUnitGroup;
    unsigned long long _style;
    UILabel *_descriptionHeadingLabel;
    UITextView *_descriptionTextView;
    UITextView *_attributionTextView;
    UITextView *_cautionaryTextView;
}

+ (id)_cautionaryTextFontForStyle:(unsigned long long)arg1;
+ (id)_attributionTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingFontForStyle:(unsigned long long)arg1;
+ (id)_metricsForStyle:(unsigned long long)arg1;
+ (double)minimumHeightForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDataUnitGroup:(id)arg1 style:(unsigned long long)arg2;

@end