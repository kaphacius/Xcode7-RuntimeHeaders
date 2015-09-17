//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRPickerCollectionViewCell : FRFeedBasedCollectionViewCell
{
    UIView *_bottomBannerView;
    UILabel *_titleLabel;
}

+ (id)placeholderBackgroundColor;
+ (id)placeholderBannerColor;
+ (double)fontSizeForWidth:(double)arg1;
+ (double)bannerHeightForWidth:(double)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomBannerView; // @synthesize bottomBannerView=_bottomBannerView;
- (void).cxx_destruct;
- (_Bool)isRemovable;
- (_Bool)isSubscribedTo;
- (_Bool)isAddable;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end