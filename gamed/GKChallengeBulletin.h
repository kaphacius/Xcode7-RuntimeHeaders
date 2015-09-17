//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKChallengeBulletin : GKGameplayBulletin
{
    GKChallengeInternal *_challenge;
    NSString *_challengeID;
    GKStoreItemInternal *_storeItem;
}

+ (void)expireChallengeList;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;
- (unsigned long long)launchEventType;
- (id)customChallengeSoundPathForBundleID:(id)arg1;
- (void)assembleBulletin;
- (void)notifyClient:(id)arg1;
- (void)notifyApp;
- (_Bool)isAppRunning;
- (void)refreshData;
- (void)setGameName:(id)arg1;
- (id)gameName;
- (void)setOriginatorPlayer:(id)arg1;
- (id)originatorPlayer;
- (void)setOriginatorPlayerID:(id)arg1;
- (id)originatorPlayerID;
- (void)setReceiverPlayer:(id)arg1;
- (id)receiverPlayer;
- (void)setReceiverPlayerID:(id)arg1;
- (id)receiverPlayerID;
- (id)gameDescriptor;
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)URLContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end