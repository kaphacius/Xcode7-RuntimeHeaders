//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNGuidanceSignBackgroundView : UIView
{
    UIImageView *_outerBackdrop;
    UIImageView *_innerBackdrop;
    MNSignStyle *_style;
}

@property(retain, nonatomic) MNSignStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end