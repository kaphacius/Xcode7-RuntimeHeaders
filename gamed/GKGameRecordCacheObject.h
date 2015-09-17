//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameRecordCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;
+ (id)fetchSortDescriptors;
+ (id)entityName;
+ (id)recordForGame:(id)arg1 playerProfile:(id)arg2;
+ (id)recordsForGames:(id)arg1 playerProfile:(id)arg2;
- (id)internalRepresentation;
- (void)updateAchievementsWithServerRepresentation:(id)arg1;
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSNumber *achievementPoints; // @dynamic achievementPoints;
@property(retain, nonatomic) GKAchievementPointsEntryCacheObject *achievementPointsEntry; // @dynamic achievementPointsEntry;
@property(retain, nonatomic) NSNumber *achievements; // @dynamic achievements;
@property(retain, nonatomic) NSString *defaultLeaderboardIdentifier; // @dynamic defaultLeaderboardIdentifier;
@property(retain, nonatomic) NSNumber *friendRank; // @dynamic friendRank;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(retain, nonatomic) NSNumber *maxFriendRank; // @dynamic maxFriendRank;
@property(retain, nonatomic) NSNumber *maxRank; // @dynamic maxRank;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(retain, nonatomic) NSNumber *rank; // @dynamic rank;
@property(nonatomic) _Bool valid; // @dynamic valid;

@end