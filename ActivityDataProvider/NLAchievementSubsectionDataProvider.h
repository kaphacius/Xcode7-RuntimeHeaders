//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLAchievementSubsectionDataProvider : NSObject <CSLSUIProvider, NLActivitySubsectionDataProvider>
{
    NSObject<OS_dispatch_queue> *_bulletinQueue;
    NSMutableDictionary *_bulletinRequestsByRecordID;
    CSLPITimer *_timer;
    id <NLActivitySubsectionDataProviderDelegate> delegate;
}

+ (id)coachingSubmanagerIdentifier;
+ (id)subsectionIdentifier;
+ (long long)sectionSubtype;
@property(nonatomic) __weak id <NLActivitySubsectionDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(id)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (void)handleBulletinActionResponse:(id)arg1;
- (_Bool)_isAchievementAlertDisabled;
- (void)_showAlertForAchievement:(id)arg1;
- (void)_showDemoAchievement2;
- (void)_showDemoAchievement;
- (void)showCoachingAlertRequest:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end