//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFPINKeypadButton : UIButton
{
    UIView *_backgroundView;
    _Bool _visible;
    float _backgroundInsetX;
    float _backgroundInsetY;
}

@property(nonatomic) float backgroundInsetY; // @synthesize backgroundInsetY=_backgroundInsetY;
@property(nonatomic) float backgroundInsetX; // @synthesize backgroundInsetX=_backgroundInsetX;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end