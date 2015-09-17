//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTagSearchResults : NSObject
{
    NSString *_searchString;
    long long _searchMethod;
    FCStreamingResults *_topicResults;
    FCStreamingResults *_channelResults;
    NSDate *_startDate;
    NSDate *_endDate;
    id <FCTagProviding> _cachedTopHit;
    NSArray *_cachedChannels;
    NSArray *_cachedTopics;
}

@property(retain, nonatomic) NSArray *cachedTopics; // @synthesize cachedTopics=_cachedTopics;
@property(retain, nonatomic) NSArray *cachedChannels; // @synthesize cachedChannels=_cachedChannels;
@property(retain, nonatomic) id <FCTagProviding> cachedTopHit; // @synthesize cachedTopHit=_cachedTopHit;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) FCStreamingResults *channelResults; // @synthesize channelResults=_channelResults;
@property(readonly, nonatomic) FCStreamingResults *topicResults; // @synthesize topicResults=_topicResults;
@property(readonly, nonatomic) long long searchMethod; // @synthesize searchMethod=_searchMethod;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *fetchedChannelResults;
@property(readonly, nonatomic) NSArray *fetchedTopicResults;
- (id)_fetchedResults:(id)arg1;
- (id)filteredTopics;
- (id)filteredChannels;
- (id)channelResultAtIndex:(unsigned long long)arg1;
- (id)topicResultAtIndex:(unsigned long long)arg1;
- (id)topHit;
- (unsigned long long)numberOfChannelResults;
- (unsigned long long)numberOfTopicResults;
- (_Bool)hasChannelResults;
- (_Bool)hasTopicResults;
- (_Bool)hasTopHit;
- (_Bool)hasSearchResults;
- (id)initWithTopicResults:(id)arg1 channelResults:(id)arg2 searchString:(id)arg3 searchMethod:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6;

@end