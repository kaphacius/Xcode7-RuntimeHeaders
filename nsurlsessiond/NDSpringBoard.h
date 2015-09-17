//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;
    BKSSystemService *_service;
    NSMutableDictionary *_assertions;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_appStates;
    NSMutableDictionary *_observedBackgroundSettings;
    _Bool _backgroundUpdatesAllowed;
    NSMutableSet *_monitoredBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedSpringBoard;
- (void).cxx_destruct;
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;
- (_Bool)wakeUpApp:(id)arg1 forSession:(id)arg2;
- (_Bool)takeAssertionForBundleID:(id)arg1 sessionID:(id)arg2;
- (id)assertionNameForIdentifier:(id)arg1;
- (void)releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;
- (void)_onqueue_releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;
- (_Bool)application:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2;
- (_Bool)applicationHasBackgroundTaskCompletion:(id)arg1;
- (_Bool)application:(id)arg1 hasAssertion:(unsigned int)arg2 withName:(id)arg3;
- (_Bool)applicationIsBeingDebugged:(id)arg1;
- (_Bool)applicationIsSuspended:(id)arg1;
- (_Bool)applicationIsAwake:(id)arg1;
- (_Bool)applicationIsForeground:(id)arg1;
- (unsigned int)applicationStateForBundleID:(id)arg1;
- (void)stopMonitoringBundleID:(id)arg1;
- (void)startMonitoringBundleID:(id)arg1;
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;
- (void)addObserver:(id)arg1 forApplication:(id)arg2;
- (void)handleApplicationStateChange:(id)arg1;
- (void)handleBackgroundSettingsChange;
- (id)getBackgroundSettingsAppList;
- (void)handleAppSwitcherQuitAppNotification:(id)arg1;
- (void)setupMonitor;
- (void)dealloc;
- (id)init;

@end