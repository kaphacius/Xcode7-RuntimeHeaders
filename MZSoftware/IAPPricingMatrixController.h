//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IAPPricingMatrixController : NSObject
{
    NSWindow *pricingMatrixWindow;
    WebView *pricingMatrixWebView;
    NSProgressIndicator *progressIndicator;
    NSTextField *loadingTextField;
    NSString *_purpleSoftwareAppType;
    NSNumber *_tier;
    NSString *_iapType;
    id <IAPPricingMatrixControllerProtocol> _delegate;
    NSArray *_topLevelObjects;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
@property(nonatomic) __weak id <IAPPricingMatrixControllerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)windowShouldClose:(id)arg1;
- (void)undisplayLoadingProgressIndicator:(id)arg1;
- (void)displayLoadingProgressIndicator:(id)arg1;
- (id)_pricingMatrixURL;
- (void)credentialsUpdated:(id)arg1;
- (void)display;
- (void)loadInterface;
- (id)initMacAppTierPricingForTier:(unsigned long long)arg1 iapType:(id)arg2;
- (id)initIOSAppTierPricingForTier:(unsigned long long)arg1 iapType:(id)arg2;
- (id)initPricingMatrixForMacOSApps;
- (id)initPricingMatrixForIOSApps;
- (id)_initWithPurpleAppType:(id)arg1 tier:(id)arg2 iapType:(id)arg3;
- (id)init;
- (void)dealloc;

@end