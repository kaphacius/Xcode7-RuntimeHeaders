//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLDailyGoalCompletionManager : NSObject <NLCoachingSubmanager, HDDailyGoalDetectionDelegate>
{
    id <HDHealthDaemon> _healthDaemon;
    NLBridgeSettings *_bridgeSettings;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_dailyGoalTypesMetToday;
    NSMutableSet *_goalTypesToFire;
    id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate;
}

+ (id)submanagerIdentifier;
@property(nonatomic) __weak id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate; // @synthesize coachingSubmanagerDelegate;
- (void).cxx_destruct;
- (void)wristOnStateChangedTo:(_Bool)arg1;
- (void)coachingAlertRequestsWereProcessed:(id)arg1 submanagerIdentifiersWithProcessedRequests:(id)arg2;
- (id)coachingAlertRequestsForPollingReason:(unsigned int)arg1;
- (void)resetDailyGoalCompletions;
- (void)concludeRunWithSuccess:(_Bool)arg1;
- (void)runForStandingHoursWithPreviousHoursToday:(unsigned int)arg1 currentHoursToday:(unsigned int)arg2;
- (void)runForBriskMinutesWithPreviousMinutesToday:(double)arg1 currentMinutesToday:(double)arg2;
- (void)runForCaloriesWithPreviousBurnToday:(double)arg1 currentBurnToday:(double)arg2 calorieGoalToday:(double)arg3;
- (void)_addDailyGoalTypeMetToday:(unsigned int)arg1;
- (void)_addDailyGoalTypePreviouslyMetToday:(unsigned int)arg1;
- (_Bool)_areGoalCompletionAlertsEnabled;
- (void)_queue_resetDailyGoalTypesMetToday;
- (void)_resetDailyGoalTypesMetToday;
- (id)initWithHealthDaemon:(id)arg1 bridgeSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end