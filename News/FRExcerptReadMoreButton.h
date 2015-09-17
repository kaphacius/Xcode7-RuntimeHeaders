//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRExcerptReadMoreButton : UIButton
{
    UIImageView *_pillView;
    UILabel *_readLabel;
    UILabel *_targetDomainLabel;
    NSURL *_targetURL;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_updateButtonState;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end