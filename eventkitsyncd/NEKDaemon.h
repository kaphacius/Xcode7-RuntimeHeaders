//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKDaemon : NSObject <NEKSyncControllerDelegate, NEKSyncCoordinatorDelegate>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_daemonQueue;
    NEKSyncCoordinator *_syncCoordinator;
    NEKPreferencesObserver *_preferencesObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (void)syncController:(id)arg1 syncDidFailWithError:(id)arg2;
- (void)syncControllerDidCompleteSending:(id)arg1;
- (void)syncControllerDidCompleteFullSync:(id)arg1;
- (void)syncController:(id)arg1 hasProgressed:(double)arg2;
- (void)_blockUntilUnlock;
- (void)_triggerIncrementalSync;
- (void)_triggerFullSync;
- (void)_databaseChangedExternally;
- (void)_checkForPairingChange;
- (void)_registerForXpcActivity;
- (void)_registerForNotifications;
- (void)run;
- (_Bool)startSyncControllerIfNeeded;
- (void)startSyncControllerIfNeededAndPossible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end