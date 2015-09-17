//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLAlertProvider : NSObject <NLNanoExtendedHealthStoreAlertDelegate, NLSedentaryAlertViewControllerDelegate, BBObserverDelegate, CSLSUIProvider, CUISAlertProvider>
{
    NLNanoExtendedHealthStore *_extendedHealthStore;
    NLSedentaryAlertViewController *_sedentaryActivityAlertViewController;
    NLSedentaryAlertViewController *_energyActivityAlertViewController;
    _Bool _isDoNotDisturbActive;
    BBObserver *_bbObserver;
    HKHealthStore *_healthStore;
    id <CUISAlertProviderDelegate> alertProviderDelegate;
}

@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_setupExtendedHealthStoreIfRequired;
- (id)init;
- (void)activityAlertViewControllerDidActivate:(id)arg1;
- (void)activityAlertViewControllerDidDeactivate:(id)arg1;
- (void)activityAlertViewControllerDidMuteToDismiss:(id)arg1;
- (void)activityAlertViewControllerDidTimeout:(id)arg1;
- (void)activityAlertViewControllerDidPressToDismiss:(id)arg1;
- (void)activityAlertViewControllerDidSwipeToDismiss:(id)arg1;
- (void)_dismissActivityAlertViewController:(id)arg1 dismissReason:(int)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)showCoachingAlertRequests:(id)arg1;
- (void)hideSedentaryActivityAlert;
- (void)showSedentaryAlertOfType:(int)arg1 withTimeoutDate:(id)arg2 withActiveHourCount:(int)arg3 withTotalCount:(int)arg4;
- (void)_saveCoachingEventForViewController:(id)arg1 reason:(int)arg2;
- (void)_recordSedentaryEventInAggdWithDismissReason:(int)arg1 timeInterval:(double)arg2 alertType:(int)arg3;
- (void)_activateSedentaryActivityAlertViewController:(id)arg1;
- (id)_sedentaryActivityAlertViewControllerOfType:(int)arg1 withTimeoutDate:(id)arg2 withActiveHourCount:(int)arg3 withTotalHourCount:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end