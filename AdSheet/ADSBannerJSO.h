//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADSBannerJSO : ADJavaScriptObject <ADSBannerJSO_Bindings>
{
    NSObject<OS_dispatch_queue> *_iVarQueue;
    NSString *_bannerCustomMetadata;
    ADWebView *_webView;
    ADSStoryboardController *_storyboardController;
    _Bool _contentVisible;
    _Bool _isModalInterstitial;
    ADSBannerAnalyticsJSO *_analytics;
}

+ (void)initializeInContext:(id)arg1;
@property(nonatomic) _Bool isModalInterstitial; // @synthesize isModalInterstitial=_isModalInterstitial;
@property(nonatomic) _Bool contentVisible; // @synthesize contentVisible=_contentVisible;
@property(readonly, nonatomic) long long networkType;
@property(readonly, nonatomic) ADSBannerAnalyticsJSO *analytics; // @synthesize analytics=_analytics;
- (void)selectActionWithIdentifier:(id)arg1;
- (id)availableActions;
- (_Bool)isTargetApplicationInstalled;
- (id)targetApplicationVersion;
- (_Bool)canOpenURL:(id)arg1;
@property(copy, nonatomic) NSString *bannerCustomMetadata;
@property(readonly, nonatomic) struct CGPoint tapLocation;
@property(readonly, nonatomic) struct CGRect rectOnScreen;
@property(nonatomic) __weak ADSStoryboardController *storyboardController;
@property(nonatomic) __weak ADWebView *webView;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

@end