//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VoiceOverGestureHelpView : UIView
{
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    VoiceOverGestureHelpViewController *_delegate;
    UINavigationBar *_navBar;
}

@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) VoiceOverGestureHelpViewController *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)hide;
- (void)show;
- (void)setTitleText:(id)arg1 infoText:(id)arg2;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end