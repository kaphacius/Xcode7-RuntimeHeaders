//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeldsparContext : NSObject <FRFeldsparContext>
{
    FCReadingHistory *_readingHistory;
    FCCloudContext *_cloudContext;
    FCFeedManager *_feedManager;
    FRScrollPositionController *_scrollHistoryController;
    FRAppActivityMonitor *_appActivityMonitor;
    FRFeedPrefetchCoordinator *_feedPrefetchCoordinator;
    FRFeedAdController *_feedController;
    FRWebViewExcerptPool *_webViewPool;
    FRFontManager *_fontManager;
    FRNonArticleHeadlineVendor *_nonArticleVendor;
    FRTagImageCache *_tagImageCache;
    FRTagRecommendationEngine *_tagRecommendationEngine;
    FRRecommendationController *_recommendationController;
    FRAdSegmentsMonitor *_adSegmentsMonitor;
    FRAppInterestController *_appInterestController;
    FRFlintDataProviderPool *_flintDataProviderPool;
    FRArticlePrefetchManager *_articlePrefetchManager;
    FRLocalDraftController *_localDraftController;
    FRSpotlightManager *_spotlightManager;
}

@property(retain, nonatomic) FRSpotlightManager *spotlightManager; // @synthesize spotlightManager=_spotlightManager;
@property(retain, nonatomic) FRLocalDraftController *localDraftController; // @synthesize localDraftController=_localDraftController;
@property(retain, nonatomic) FRArticlePrefetchManager *articlePrefetchManager; // @synthesize articlePrefetchManager=_articlePrefetchManager;
@property(retain, nonatomic) FRFlintDataProviderPool *flintDataProviderPool; // @synthesize flintDataProviderPool=_flintDataProviderPool;
@property(retain, nonatomic) FRAppInterestController *appInterestController; // @synthesize appInterestController=_appInterestController;
@property(retain, nonatomic) FRAdSegmentsMonitor *adSegmentsMonitor; // @synthesize adSegmentsMonitor=_adSegmentsMonitor;
@property(retain, nonatomic) FRRecommendationController *recommendationController; // @synthesize recommendationController=_recommendationController;
@property(retain, nonatomic) FRTagRecommendationEngine *tagRecommendationEngine; // @synthesize tagRecommendationEngine=_tagRecommendationEngine;
@property(retain, nonatomic) FRTagImageCache *tagImageCache; // @synthesize tagImageCache=_tagImageCache;
@property(retain, nonatomic) FRNonArticleHeadlineVendor *nonArticleVendor; // @synthesize nonArticleVendor=_nonArticleVendor;
@property(retain, nonatomic) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain, nonatomic) FRWebViewExcerptPool *webViewPool; // @synthesize webViewPool=_webViewPool;
@property(retain, nonatomic) FRFeedAdController *feedController; // @synthesize feedController=_feedController;
@property(retain, nonatomic) FRFeedPrefetchCoordinator *feedPrefetchCoordinator; // @synthesize feedPrefetchCoordinator=_feedPrefetchCoordinator;
@property(retain, nonatomic) FRAppActivityMonitor *appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(retain, nonatomic) FRScrollPositionController *scrollHistoryController; // @synthesize scrollHistoryController=_scrollHistoryController;
@property(retain, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool inOfflineMode;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end