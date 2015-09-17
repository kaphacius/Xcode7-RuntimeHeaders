//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTHeadlineCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _isSeen;
    _Bool _hasVideo;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_excerptFont;
    long long _cellType;
    NSString *_cachedExcerpt;
    double _verticalWhiteSpace;
    NSString *_titleFontName;
    double _titleFontSize;
    NSString *_subtitleFontName;
    double _subtitleFontSize;
    NSString *_excerptFontName;
    double _excerptFontSize;
    long long _textAlignment;
    double _titleLineHeight;
    double _subtitleLineHeight;
    double _excerptLineHeight;
    long long _borderSpecification;
    long long _columnSpan;
    long long _rowSpan;
    long long _imagePosition;
    struct CGRect _imageViewFrame;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
    struct CGRect _excerptFrame;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _backgroundColorInsets;
    struct CGRect _logoImageFrame;
    struct CGRect _accessoryViewFrame;
}

+ (id)_layoutAttributesForImageOnTopPremiumHeadline:(id)arg1 layoutData:(id)arg2 feedSettings:(id)arg3;
+ (id)_layoutAttributesForGenericHeadline:(id)arg1 layoutData:(id)arg2 withFeedSettings:(id)arg3;
+ (id)layoutAttributesForHeadline:(id)arg1 layoutData:(id)arg2 withFeedSettings:(id)arg3;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) _Bool isSeen; // @synthesize isSeen=_isSeen;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(nonatomic) long long borderSpecification; // @synthesize borderSpecification=_borderSpecification;
@property(nonatomic) double excerptLineHeight; // @synthesize excerptLineHeight=_excerptLineHeight;
@property(nonatomic) double subtitleLineHeight; // @synthesize subtitleLineHeight=_subtitleLineHeight;
@property(nonatomic) double titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double excerptFontSize; // @synthesize excerptFontSize=_excerptFontSize;
@property(retain, nonatomic) NSString *excerptFontName; // @synthesize excerptFontName=_excerptFontName;
@property(nonatomic) double subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property(retain, nonatomic) NSString *subtitleFontName; // @synthesize subtitleFontName=_subtitleFontName;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(nonatomic) double verticalWhiteSpace; // @synthesize verticalWhiteSpace=_verticalWhiteSpace;
@property(copy, nonatomic) NSString *cachedExcerpt; // @synthesize cachedExcerpt=_cachedExcerpt;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(nonatomic) struct CGRect logoImageFrame; // @synthesize logoImageFrame=_logoImageFrame;
@property(nonatomic) struct UIEdgeInsets backgroundColorInsets; // @synthesize backgroundColorInsets=_backgroundColorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGRect excerptFrame; // @synthesize excerptFrame=_excerptFrame;
@property(nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (id)excerptParagraphStyle;
- (id)subtitleParagraphStyle;
- (id)titleParagraphStyle;
- (_Bool)customIsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIFont *excerptFont; // @synthesize excerptFont=_excerptFont;
@property(readonly, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)populateWithProtobuf:(id)arg1;
- (id)protobufRepresentation;

@end