//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PUICAnimatedEmojiChooserAccessibilityElement : UIAccessibilityElement
{
    _Bool _isTopChooser;
    _Bool _isFullSizeChooser;
    id _animatedEmojiView;
}

@property _Bool isFullSizeChooser; // @synthesize isFullSizeChooser=_isFullSizeChooser;
@property _Bool isTopChooser; // @synthesize isTopChooser=_isTopChooser;
@property(retain, nonatomic) id animatedEmojiView; // @synthesize animatedEmojiView=_animatedEmojiView;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;

@end