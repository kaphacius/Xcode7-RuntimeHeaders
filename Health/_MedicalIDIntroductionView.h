//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _MedicalIDIntroductionView : UIView
{
    UIImageView *_glyph;
    UILabel *_medicalIDLabel;
    UITextView *_descriptionView;
    UIImageView *_descriptionFader;
    UIButton *_createMedicalIDButton;
}

@property(readonly, nonatomic) UIButton *createMedicalIDButton; // @synthesize createMedicalIDButton=_createMedicalIDButton;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)_resizableFaderImage;
- (void)layoutSubviews;
- (void)_updateFontSizes;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end