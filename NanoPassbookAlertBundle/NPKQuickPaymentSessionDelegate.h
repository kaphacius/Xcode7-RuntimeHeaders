//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NPKQuickPaymentSessionDelegate <NSObject>

@optional
- (void)paymentSessionDidSelectValueAddedService:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidSelectPayment:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidExitField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSessionDidEnterField:(NPKQuickPaymentSession *)arg1;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didCompleteForReason:(unsigned int)arg2 withPaymentTransaction:(PKPaymentTransaction *)arg3 valueAddedServiceTransactions:(NSArray *)arg4 valueAddedServicePasses:(NSArray *)arg5;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didFailTransactionForPass:(PKPass *)arg2 withValueAddedServiceTransactions:(NSArray *)arg3 forValueAddedServicePasses:(NSArray *)arg4;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didActivatePass:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 willActivatePass:(PKPass *)arg2;
- (void)paymentSession:(NPKQuickPaymentSession *)arg1 didMakePassCurrent:(PKPass *)arg2;
@end