//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADPurchaseJSO : ADJavaScriptObject <ADPurchaseJSO_Bindings>
{
}

+ (void)initializeInContext:(id)arg1;
+ (_Bool)availableForImpression:(id)arg1;
+ (id)translateSupportedPaymentNetworks:(id)arg1;
- (void)requestPaymentForPurchase:(id)arg1;
- (id)configurationForPurchase;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;

@end