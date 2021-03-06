//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDTabBarController : UITabBarController <MFMailComposeViewControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_exportQueue;
    unsigned long long _backgroundTask;
    MFMailComposeViewController *_mailComposeVC;
    WDExportManager *_exportManager;
    NSArray *_controlsToDisable;
}

- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_sendExportEmail;
- (void)_presentAlertControllerMessage:(id)arg1 addExportButton:(_Bool)arg2;
- (void)verifyExport;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setControlsToDisableDuringExport:(id)arg1;
- (id)initWithControllerManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end