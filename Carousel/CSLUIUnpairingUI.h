//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUIUnpairingUI : NSObject
{
    int _deviceIsUnpairingToken;
    int _deviceUnpairedToken;
    UIWindow *_overlayWindow;
    CSLSAlertSuppressionAssertion *_alertSuppression;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLSAlertSuppressionAssertion *alertSuppression; // @synthesize alertSuppression=_alertSuppression;
@property(retain, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
@property(nonatomic) int deviceUnpairedToken; // @synthesize deviceUnpairedToken=_deviceUnpairedToken;
@property(nonatomic) int deviceIsUnpairingToken; // @synthesize deviceIsUnpairingToken=_deviceIsUnpairingToken;
- (void).cxx_destruct;
- (void)hideSpinner:(id)arg1;
- (void)displaySpinner:(id)arg1;
- (id)init;

@end