//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NBUsageStorageReporter : NSObject <PSStorageReporting>
{
    NSMutableDictionary *_allBackups;
    NBManager *_backupManager;
    NSObject<OS_dispatch_queue> *_backupManagerQueue;
    NSObject<OS_dispatch_semaphore> *_backupManageSemaphorer;
    NSArray *_cachedBundleApps;
    NSMutableDictionary *_cachedCategorySizes;
}

@property(retain, nonatomic) NSMutableDictionary *cachedCategorySizes; // @synthesize cachedCategorySizes=_cachedCategorySizes;
@property(retain, nonatomic) NSArray *cachedBundleApps; // @synthesize cachedBundleApps=_cachedBundleApps;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *backupManageSemaphorer; // @synthesize backupManageSemaphorer=_backupManageSemaphorer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backupManagerQueue; // @synthesize backupManagerQueue=_backupManagerQueue;
@property(retain, nonatomic) NBManager *backupManager; // @synthesize backupManager=_backupManager;
@property(retain, nonatomic) NSMutableDictionary *allBackups; // @synthesize allBackups=_allBackups;
- (void).cxx_destruct;
- (float)sizeForCategory:(id)arg1;
- (_Bool)deleteDataForCategory:(id)arg1 withError:(id *)arg2;
- (Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
- (_Bool)allowDeletionForCategory:(id)arg1;
- (id)usageBundleApps;
- (void)populateUsageBundleApps;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end