//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDSampleTypeDateRangeController : NSObject
{
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    struct NSDictionary *_dateRangesBySampleType;
}

@property(readonly, nonatomic) NSDictionary *dateRangesBySampleType; // @synthesize dateRangesBySampleType=_dateRangesBySampleType;
- (void).cxx_destruct;
- (void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2;
- (void)_resultsDidUpdate:(struct NSDictionary *)arg1;
- (void)_beginUpdatesWithRetryAttemptCount:(long long)arg1;
- (void)_alertObserverDidUpdateDateRanges:(id)arg1;
- (void)_alertObserversDidUpdateDateRanges;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)dateRangeForSampleType:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end