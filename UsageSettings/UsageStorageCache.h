//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface UsageStorageCache : NSObject
{
    PSUsageBundleManager *_usageBundlesManager;
    NSMutableDictionary *_mediaCache;
    NSMutableArray *_appsCache;
    NSArray *_usageBundlesCache;
    NSObject<OS_dispatch_queue> *_cache_operation_queue;
    _Bool _cacheUpdateCancelled;
}

- (void).cxx_destruct;
- (void)populateUsageAppsCacheWithHandler:(CDUnknownBlockType)arg1;
- (float)specialStorageUsageForBundleID:(id)arg1;
- (id)checkAndFixUpVersion:(id)arg1;
- (void)populateMediaCache;
- (float)sizeForMediaQuery:(id)arg1 withGroupingType:(long long)arg2 storingInCache:(id)arg3 withKey:(id)arg4;
- (id)mediaCollectionForKey:(id)arg1;
- (void)removeMediaCollectionCacheForKey:(id)arg1;
- (void)populateUsageBundlesCacheWithHandler:(CDUnknownBlockType)arg1;
- (void)cancelUsageDataPopulation;
- (void)populateUsageDataWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end