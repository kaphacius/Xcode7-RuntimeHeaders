//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PUSRemotePasscodeInstructionViewController : UIViewController
{
    long long _action;
    id <PUSRemotePasscodeViewControllerDelegate> _delegate;
    UILabel *_instructionLabel;
}

@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(nonatomic) __weak id <PUSRemotePasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_cancel;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAction:(long long)arg1;

@end