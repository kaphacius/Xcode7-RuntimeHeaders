//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRPercentageRatingView : NSRRatingView
{
    NSRLabel *_label;
    NSRImageView *_imageView;
}

+ (id)_fontForSize:(int)arg1;
+ (id)_labelForSize:(int)arg1;
+ (float)_centeredBaselineForFont:(id)arg1 imageSize:(struct CGSize)arg2;
+ (float)_imagePaddingForContentSize:(int)arg1;
+ (struct CGSize)_imageSizeForRatingContentSize:(int)arg1 imageType:(int)arg2;
+ (id)_percentageImageWithType:(int)arg1 forSize:(int)arg2;
+ (float)imageDistanceBelowBaselineWithRating:(id)arg1 ratingViewSize:(int)arg2;
+ (float)baselineDistanceFromBoundsTopWithRating:(id)arg1 ratingViewSize:(int)arg2;
+ (struct CGSize)sizeWithRating:(id)arg1 ratingViewSize:(int)arg2;
- (void).cxx_destruct;
- (int)_imageType;
- (void)layoutSubviews;
- (_Bool)isVibrant;
- (void)setRating:(id)arg1;

@end