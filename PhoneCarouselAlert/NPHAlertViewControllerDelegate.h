//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NPHAlertViewControllerDelegate <NSObject>
- (void)alertViewControllerRequestedDial:(TUDialRequest *)arg1;
- (void)alertViewControllerUpdatedCallConfiguration:(NPHAlertViewController *)arg1 source:(NPHCallConfigurationChangeSource *)arg2;
- (void)alertViewControllerRequestedDeactivation:(NPHAlertViewController *)arg1;
- (unsigned int)alertViewControllerRequestedActivation:(NPHAlertViewController *)arg1;
@end