//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRArticlePrefetchManager : NSObject <FCKeyedOperationQueueDelegate, FCNetworkReachabilityObserving>
{
    FCCloudContext *_context;
    FRFlintDataProviderPool *_dataProviderPool;
    FCKeyedOperationQueue *_prefetchQueue;
    NSMutableDictionary *_prefetchRequestsByID;
}

@property(retain, nonatomic) NSMutableDictionary *prefetchRequestsByID; // @synthesize prefetchRequestsByID=_prefetchRequestsByID;
@property(retain, nonatomic) FCKeyedOperationQueue *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain, nonatomic) FRFlintDataProviderPool *dataProviderPool; // @synthesize dataProviderPool=_dataProviderPool;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_prefetchRequestsChanged;
- (void)wifiReachabilityDidChange:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetPrefetchStateForArticleID:(id)arg1 withHeadline:(id)arg2;
- (void)removePrefetchInterestInHeadline:(id)arg1;
- (void)addPrefetchInterestInHeadline:(id)arg1 priority:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCloudContext:(id)arg1 flintDataProviderPool:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end