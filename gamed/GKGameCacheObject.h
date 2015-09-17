//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;
+ (id)_gamesForFullGameDescriptors:(id)arg1 context:(id)arg2;
+ (id)gamesForGameDescriptors:(id)arg1 context:(id)arg2;
+ (id)gamesForBundleIDs:(id)arg1 context:(id)arg2;
+ (id)gameForBundleID:(id)arg1 context:(id)arg2;
+ (id)gameForGameDescriptor:(id)arg1 context:(id)arg2;
+ (id)fetchSortDescriptors;
+ (const void *)uniqueObjectIDLookupKey;
+ (id)uniqueAttributeName;
- (id)gameDescriptor;
- (id)leaderboardSetWithIdentifier:(id)arg1;
- (id)internalRepresentation;
- (_Bool)storePiecesExpired;
- (_Bool)storePiecesValid;
- (void)updateStorePiecesWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;
- (void)updateWithPushGameDescriptor:(id)arg1;
- (void)updateWithGameDescriptor:(id)arg1;
- (_Bool)isValid;
- (void)invalidate;

// Remaining properties
@property(retain, nonatomic) GKAchievementDescriptionListCacheObject *achievementDescriptionList; // @dynamic achievementDescriptionList;
@property(retain, nonatomic) NSSet *achievementLists; // @dynamic achievementLists;
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *artistName; // @dynamic artistName;
@property(nonatomic) float averageUserRating; // @dynamic averageUserRating;
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *defaultCategory; // @dynamic defaultCategory;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *externalVersion; // @dynamic externalVersion;
@property(retain, nonatomic) NSSet *flowRates; // @dynamic flowRates;
@property(retain, nonatomic) NSSet *gameRecords; // @dynamic gameRecords;
@property(nonatomic) _Bool hasAggregateLeaderboard; // @dynamic hasAggregateLeaderboard;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSSet *invites; // @dynamic invites;
@property(retain, nonatomic) NSSet *leaderboardLists; // @dynamic leaderboardLists;
@property(retain, nonatomic) GKLeaderboardSetListCacheObject *leaderboardSetList; // @dynamic leaderboardSetList;
@property(retain, nonatomic) NSSet *leaderboards; // @dynamic leaderboards;
@property(retain, nonatomic) NSSet *listEntries; // @dynamic listEntries;
@property(nonatomic) unsigned int maxAchievementPoints; // @dynamic maxAchievementPoints;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int numberOfAchievements; // @dynamic numberOfAchievements;
@property(nonatomic) unsigned int numberOfCategories; // @dynamic numberOfCategories;
@property(nonatomic) unsigned int numberOfLeaderboardSets; // @dynamic numberOfLeaderboardSets;
@property(nonatomic) long long numberOfUserRatings; // @dynamic numberOfUserRatings;
@property(nonatomic) _Bool owned; // @dynamic owned;
@property(retain, nonatomic) NSSet *playerLists; // @dynamic playerLists;
@property(retain, nonatomic) NSSet *players; // @dynamic players;
@property(retain, nonatomic) NSSet *playersToInvite; // @dynamic playersToInvite;
@property(nonatomic) _Bool prerendered; // @dynamic prerendered;
@property(retain, nonatomic) NSString *priceDisplay; // @dynamic priceDisplay;
@property(retain, nonatomic) NSSet *recentPlayerLists; // @dynamic recentPlayerLists;
@property(retain, nonatomic) NSSet *recommendationEntries; // @dynamic recommendationEntries;
@property(retain, nonatomic) NSString *shortViewItemURL; // @dynamic shortViewItemURL;
@property(nonatomic) NSString *softwareType; // @dynamic softwareType;
@property(retain, nonatomic) NSDate *storePiecesExpirationDate; // @dynamic storePiecesExpirationDate;
@property(readonly) Class superclass;
@property(nonatomic) _Bool supportsAchievements; // @dynamic supportsAchievements;
@property(nonatomic) _Bool supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property(nonatomic) _Bool supportsLeaderboards; // @dynamic supportsLeaderboards;
@property(nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;
@property(retain, nonatomic) NSString *tellAFriendMessageContentsUrl; // @dynamic tellAFriendMessageContentsUrl;
@property(retain, nonatomic) NSSet *topGameEntries; // @dynamic topGameEntries;
@property(retain, nonatomic) GKTurnBasedSessionListCacheObject *turnBasedSessionList; // @dynamic turnBasedSessionList;
@property(retain, nonatomic) NSSet *turnBasedSessions; // @dynamic turnBasedSessions;
@property(retain, nonatomic) NSString *viewItemURL; // @dynamic viewItemURL;

@end