//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver>
{
    _DKPeriod *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    _Bool _enabled;
    _Bool _FirstWakeUINotificationEnabled;
    _Bool _SoftwareUpdateUINotificationEnabled;
}

+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+ (id)fetchMostRecentPastEventForStream:(id)arg1;
+ (id)prettyPrintDateAsLocalTime:(id)arg1;
+ (id)eventStream;
@property(nonatomic) _Bool SoftwareUpdateUINotificationEnabled; // @synthesize SoftwareUpdateUINotificationEnabled=_SoftwareUpdateUINotificationEnabled;
@property(nonatomic) _Bool FirstWakeUINotificationEnabled; // @synthesize FirstWakeUINotificationEnabled=_FirstWakeUINotificationEnabled;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (_Bool)didQualifyingScreenLockEndInEligibilityPeriod;
- (void)unregisterHandleBacklightEvents;
- (void)registerHandleBacklightEvents;
- (void)receiveNotificationEvent:(id)arg1;
- (void)handleScreenUnlockEvent;
- (void)handleBacklightTurnedOnEvent;
- (void)handleBacklightTurnedOffEvent;
- (void)showFirstWakeupUINotification;
- (void)showSoftwareUpdateUINotification;
- (void)showUINotification:(id)arg1;
- (id)getNextSWUpdatePrediction;
- (id)convertUTCToLocalTimeString:(id)arg1;
- (_Bool)eligibleForFirstWakeUINotification;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)setUINotificationEligibility;
- (_Bool)isUINotificationEnabledForKey:(id)arg1;
- (_Bool)isInternalBuild;
- (void)recordFirstWakeup:(id)arg1;
- (void)setupNotificationEligiblityPeriod;
- (id)firstWakeupEventWithValue:(_Bool)arg1;
- (_Bool)isFirstBacklightOn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end