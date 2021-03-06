//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRRecommendationController : NSObject <FRTagRecommendationEngineObserver, FCStreamingResultsObserving>
{
    FCStreamingResults *_recommendedTags;
    FCStreamingResults *_recommendedChannels;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FCStreamingResults *recommendedChannels; // @synthesize recommendedChannels=_recommendedChannels;
@property(retain, nonatomic) FCStreamingResults *recommendedTags; // @synthesize recommendedTags=_recommendedTags;
- (void).cxx_destruct;
- (void)results:(id)arg1 didFetchObjectsInRange:(struct _NSRange)arg2;
- (void)resultsDidFinish:(id)arg1;
- (void)recommendationEngineDidUpdate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithTagRecommendationEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end