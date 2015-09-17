//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKChallengeInvite : NSObject <NSSecureCoding>
{
    NSString *_challengeID;
    GKChallengeInternal *_challenge;
    GKPlayerInternal *_receivingPlayer;
    GKPlayerInternal *_issuingPlayer;
    GKStoreItemInternal *_storeItem;
    NSString *_goalText;
    NSDictionary *_pushDescriptor;
    NSString *_gameTitle;
    NSString *_resolvedBundleID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *pushDescriptor; // @synthesize pushDescriptor=_pushDescriptor;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) NSString *resolvedBundleID; // @synthesize resolvedBundleID=_resolvedBundleID;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *goalText; // @synthesize goalText=_goalText;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)loadGoalTextForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadDetailsWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithChallenge:(id)arg1;
- (id)challengeInternalObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end