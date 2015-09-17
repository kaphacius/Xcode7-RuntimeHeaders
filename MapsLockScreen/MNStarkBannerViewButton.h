//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNStarkBannerViewButton : UIControl
{
    UILabel *_textLabel;
    UIColor *_unselectedTextColor;
    UIColor *_selectedTextColor;
    UIImage *_unselectedImage;
    UIImage *_selectedImage;
    UIView *_highlightView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *highlightColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end