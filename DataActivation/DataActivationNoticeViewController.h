//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DataActivationNoticeViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_doneButton;
    id <DataActivationNoticeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <DataActivationNoticeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_donePressed;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3;

@end