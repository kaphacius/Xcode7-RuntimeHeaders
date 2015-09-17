//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADRewardsJSO : ADJavaScriptObject <ADRewardsJSO_Bindings>
{
    NSMutableSet *_lookedUpRewards;
}

@property(retain, nonatomic) NSMutableSet *lookedUpRewards; // @synthesize lookedUpRewards=_lookedUpRewards;
- (void)reportRedeemFailureForReward:(id)arg1 withErrorMessage:(id)arg2;
- (void)userRedeemedReward:(id)arg1;
- (void)_processRewardResponse:(id)arg1 forToken:(id)arg2;
- (void)lookupReward:(id)arg1;
@property(readonly, nonatomic) NSArray *rewardTokens;
- (void)_reportResult:(_Bool)arg1 forReward:(id)arg2 withErrorMessage:(id)arg3;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) JSValue *listener;

@end