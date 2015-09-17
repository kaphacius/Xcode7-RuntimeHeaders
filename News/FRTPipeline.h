//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTPipeline : NSObject
{
    _Bool _cancelled;
    FRTPreparedHeadlineCellDataSource *_preparedHeadlineDataSource;
    FRTHeadlineCardSizer *_sizer;
    FRTAbstractRanker *_ranker;
    FRTAbstractRanker *_adRanker;
    FRTAbstractRanker *_widgetRanker;
    FRTHeadlineCardDealer *_dealer;
    FRTFeedSettings *_feedSettings;
}

@property(copy, nonatomic) FRTFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) FRTHeadlineCardDealer *dealer; // @synthesize dealer=_dealer;
@property(retain, nonatomic) FRTAbstractRanker *widgetRanker; // @synthesize widgetRanker=_widgetRanker;
@property(retain, nonatomic) FRTAbstractRanker *adRanker; // @synthesize adRanker=_adRanker;
@property(retain, nonatomic) FRTAbstractRanker *ranker; // @synthesize ranker=_ranker;
@property(retain, nonatomic) FRTHeadlineCardSizer *sizer; // @synthesize sizer=_sizer;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FRTPreparedHeadlineCellDataSource *preparedHeadlineDataSource; // @synthesize preparedHeadlineDataSource=_preparedHeadlineDataSource;
- (void).cxx_destruct;
- (id)processHeadlines:(id)arg1 previousBatchContext:(id)arg2 nextBatchContext:(id)arg3;
- (void)cancel;
- (id)initWithFeedSettings:(id)arg1 maximumSubBatchRowSpan:(unsigned long long)arg2 tileProminenceScoreBalanceValue:(double)arg3 qualityOfService:(long long)arg4;
- (id)init;

@end