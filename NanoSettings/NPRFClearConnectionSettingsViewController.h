//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFClearConnectionSettingsViewController : PUICViewController
{
    UILabel *_messageLabel;
    UIButton *_buttonClear;
    UIView *_buttonBar;
}

@property(retain, nonatomic) UIView *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(retain, nonatomic) UIButton *buttonClear; // @synthesize buttonClear=_buttonClear;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)buttonClearTapped;
- (void)deleteKeyChainForService:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end