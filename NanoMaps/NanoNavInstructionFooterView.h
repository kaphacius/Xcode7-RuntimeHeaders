//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoNavInstructionFooterView : UIView
{
    UILabel *_firstLine;
    UILabel *_secondLine;
    MapsAutoLayoutContext *_context;
    _Bool _firstLineOnly;
    _Bool _hasEphemeralData;
    _Bool _shouldUseShadowPadding;
    _Bool _ephemeralDataHidden;
    UIImageView *_imageView;
}

@property(nonatomic) _Bool ephemeralDataHidden; // @synthesize ephemeralDataHidden=_ephemeralDataHidden;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)setEphemeralDataHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureForStep:(id)arg1 inRoute:(id)arg2 withStatus:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end