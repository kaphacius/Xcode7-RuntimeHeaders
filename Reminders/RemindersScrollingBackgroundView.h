//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersScrollingBackgroundView : UIView
{
    UIImage *_textureImage;
}

+ (id)kitPaperTextureImage;
@property(retain) UIImage *textureImage; // @synthesize textureImage=_textureImage;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)resizeForRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end