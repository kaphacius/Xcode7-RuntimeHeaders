//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRInterstitialAdViewController : UIViewController <FRArticlePageViewControllerTransitioning>
{
    _Bool _isActiveArticleViewController;
    _Bool _hasPresentedAdView;
    ADInterstitialAd *_ad;
    UIView *_adView;
}

@property(nonatomic) _Bool hasPresentedAdView; // @synthesize hasPresentedAdView=_hasPresentedAdView;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) ADInterstitialAd *ad; // @synthesize ad=_ad;
@property(nonatomic) _Bool isActiveArticleViewController; // @synthesize isActiveArticleViewController=_isActiveArticleViewController;
- (void).cxx_destruct;
- (void)removeInterstitial;
- (void)_updateAdView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInterstitialAd:(id)arg1;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end