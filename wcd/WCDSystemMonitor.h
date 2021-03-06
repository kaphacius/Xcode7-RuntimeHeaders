//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDSystemMonitor : NSObject
{
    _Bool _initialSetUpComplete;
    _Bool _activeDeviceConnected;
    _Bool _isPaired;
    _Bool _remoteFirstUnlocked;
    NSString *_deviceInformation;
    NSString *_pairingID;
    NSSet *_iOSApplicationsContainingWatchApp;
    NSDictionary *_iOSAppBundleIDToExtensionBundleID;
    NSSet *_iOSApplicationsWithWatchAppInstalled;
    NSSet *_iOSApplicationsContainingComplications;
    NSSet *_iOSApplicationsContainingActiveComplications;
    NSDictionary *_iOSAppBundleIDToUniqueInstallID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_initialSetUpGroup;
    NSHashTable *_observers;
    BKSApplicationStateMonitor *_monitor;
    NSMutableDictionary *_monitoredBundleIDs;
    NSDictionary *_currentInstalledApplicationsInformation;
    NSDictionary *_watchAppBundleIDToiOSAppBundleID;
    NSMutableSet *_internalActiveGlanceIDs;
    NSMutableDictionary *_glanceTimers;
    NSMutableSet *_internalActiveNotificationIDs;
    NSMutableDictionary *_notificationTimers;
}

+ (id)sharedSystemMonitor;
@property(retain) NSMutableDictionary *notificationTimers; // @synthesize notificationTimers=_notificationTimers;
@property(retain) NSMutableSet *internalActiveNotificationIDs; // @synthesize internalActiveNotificationIDs=_internalActiveNotificationIDs;
@property(retain) NSMutableDictionary *glanceTimers; // @synthesize glanceTimers=_glanceTimers;
@property(retain) NSMutableSet *internalActiveGlanceIDs; // @synthesize internalActiveGlanceIDs=_internalActiveGlanceIDs;
@property(readonly, copy) NSDictionary *watchAppBundleIDToiOSAppBundleID; // @synthesize watchAppBundleIDToiOSAppBundleID=_watchAppBundleIDToiOSAppBundleID;
@property(retain) NSDictionary *currentInstalledApplicationsInformation; // @synthesize currentInstalledApplicationsInformation=_currentInstalledApplicationsInformation;
@property(retain) NSMutableDictionary *monitoredBundleIDs; // @synthesize monitoredBundleIDs=_monitoredBundleIDs;
@property(retain) BKSApplicationStateMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSObject<OS_dispatch_group> *initialSetUpGroup; // @synthesize initialSetUpGroup=_initialSetUpGroup;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSDictionary *iOSAppBundleIDToUniqueInstallID; // @synthesize iOSAppBundleIDToUniqueInstallID=_iOSAppBundleIDToUniqueInstallID;
@property(readonly, copy) NSSet *iOSApplicationsContainingActiveComplications; // @synthesize iOSApplicationsContainingActiveComplications=_iOSApplicationsContainingActiveComplications;
@property(readonly, copy) NSSet *iOSApplicationsContainingComplications; // @synthesize iOSApplicationsContainingComplications=_iOSApplicationsContainingComplications;
@property(readonly, copy) NSSet *iOSApplicationsWithWatchAppInstalled; // @synthesize iOSApplicationsWithWatchAppInstalled=_iOSApplicationsWithWatchAppInstalled;
@property(readonly, copy) NSDictionary *iOSAppBundleIDToExtensionBundleID; // @synthesize iOSAppBundleIDToExtensionBundleID=_iOSAppBundleIDToExtensionBundleID;
@property(readonly, copy) NSSet *iOSApplicationsContainingWatchApp; // @synthesize iOSApplicationsContainingWatchApp=_iOSApplicationsContainingWatchApp;
@property(nonatomic) _Bool remoteFirstUnlocked; // @synthesize remoteFirstUnlocked=_remoteFirstUnlocked;
@property(readonly, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(readonly, nonatomic) _Bool isPaired; // @synthesize isPaired=_isPaired;
@property(nonatomic) _Bool activeDeviceConnected; // @synthesize activeDeviceConnected=_activeDeviceConnected;
@property(readonly, nonatomic) _Bool initialSetUpComplete; // @synthesize initialSetUpComplete=_initialSetUpComplete;
@property(retain, nonatomic) NSString *deviceInformation; // @synthesize deviceInformation=_deviceInformation;
- (void).cxx_destruct;
- (void)notifyObservers:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)watchConnectivityServiceAvailable;
- (id)extensionBundleIDForCompanionAppID:(id)arg1;
- (void)watchAppBundleIDForCompanionAppBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)dataContainerURLForBundleID:(id)arg1;
- (id)watchDirectoryURLForBundleID:(id)arg1;
- (void)updateInstalledComplicationsInformation:(id)arg1;
- (_Bool)updateInstalledApplicationsInformation:(id)arg1;
- (void)removeNotificationTimerForIdentifier:(id)arg1;
- (void)restartNotificationTimerWithIdentifier:(id)arg1;
- (void)restartNotificationTimerIfNeccessaryWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeNotificationIDs;
- (void)removeActiveNotificationIdentifier:(id)arg1;
- (void)addActiveNotificationIdentifier:(id)arg1;
- (void)removeGlanceTimerForIdentifier:(id)arg1;
- (void)restartGlanceTimerWithIdentifier:(id)arg1;
- (void)restartGlanceTimerIfNeccessaryWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeGlanceIDs;
- (void)removeActiveGlanceIdentifier:(id)arg1;
- (void)addActiveGlanceIdentifier:(id)arg1;
- (void)setIsPaired:(_Bool)arg1 pairingID:(id)arg2;
- (void)setIOSApplicationsContainingActiveComplications:(id)arg1;
- (id)applicationStateStringForState:(unsigned int)arg1;
- (unsigned int)applicationStateForBundleID:(id)arg1;
- (void)stopMonitoringBundleID:(id)arg1;
- (void)startMonitoringBundleID:(id)arg1;
- (void)handleApplicationStateChange:(id)arg1;
- (void)handleUIActiveStateChanged;
- (void)onqueue_handlePairingChanged;
- (void)onqueue_handleInstalledApplicationsChanged;
- (void)handlePairingChangedNotification:(id)arg1;
- (void)onqueue_handleActiveComplicationsChanged;
- (void)debugInfoRequested:(id)arg1;
- (void)subscribeToAllNotifications;
- (id)stateDump;
- (void)setupMonitor;
- (void)setUpInitialState;
- (id)init;

@end