//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXForceTouchSensitivityTestViewController : UIViewController
{
    UIImageView *_messageImageView;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIImageView *messageImageView; // @synthesize messageImageView=_messageImageView;
- (void)doneButtonTapped;
- (void)animateDoneButtonSlideIn;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;

@end