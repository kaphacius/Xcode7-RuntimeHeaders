//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSVSDialogTableViewCell : PUICTableViewCell <NSRDynamicType>
{
    NSRLabel *_dialogLabel;
    NSString *_displayString;
    NSVSDialog *_dialog;
    float _topPadding;
}

+ (int)firstLineTextStyle;
+ (float)desiredBaselineForCellBelowLayoutType:(int)arg1;
+ (int)defaultLayoutType;
+ (float)heightWithDialog:(id)arg1 suggestedSize:(struct CGSize)arg2;
@property(nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) NSVSDialog *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)updateLayoutAttributesForPreferredContentSizeCategory;
- (void)_updateAttributedString;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end