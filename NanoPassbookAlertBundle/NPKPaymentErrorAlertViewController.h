//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPKPaymentErrorAlertViewController : NPKPaymentAlertViewController
{
    unsigned int _paymentErrorType;
    PUICContentUnavailableView *_paymentErrorView;
}

@property(retain, nonatomic) PUICContentUnavailableView *paymentErrorView; // @synthesize paymentErrorView=_paymentErrorView;
@property(nonatomic) unsigned int paymentErrorType; // @synthesize paymentErrorType=_paymentErrorType;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForPresentation;
- (id)errorMessage;
- (id)errorTitle;
- (id)initWithPaymentErrorType:(unsigned int)arg1;

@end