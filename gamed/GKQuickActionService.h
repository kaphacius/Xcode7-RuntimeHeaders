//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKQuickActionService : NSObject
{
    NSMutableSet *_quickActionBundleIdentifiers;
    NSError *_previousError;
    NSDate *_dateOfPreviousError;
}

+ (void)allQuickActionsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)quickActionsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sortQuickActionDictionary:(struct NSMutableDictionary *)arg1;
+ (void)sortQuickActionArray:(struct NSMutableArray *)arg1;
+ (id)quickActionQueue;
+ (_Bool)supportsForceTouch;
+ (id)sharedService;
@property(retain) NSDate *dateOfPreviousError; // @synthesize dateOfPreviousError=_dateOfPreviousError;
@property(retain) NSError *previousError; // @synthesize previousError=_previousError;
@property(retain) NSMutableSet *quickActionBundleIdentifiers; // @synthesize quickActionBundleIdentifiers=_quickActionBundleIdentifiers;
- (void)loadFriendRequestsIntoDictionary:(id)arg1 group:(id)arg2;
- (void)loadMultiplayerInvitesIntoDictionary:(struct NSMutableDictionary *)arg1 group:(id)arg2;
- (void)loadMultiplayerTurnsIntoDictionary:(struct NSMutableDictionary *)arg1 group:(id)arg2;
- (void)loadChallengesIntoDictionary:(struct NSMutableDictionary *)arg1 group:(id)arg2;
- (void)loadGamesIntoDictionary:(struct NSMutableDictionary *)arg1 group:(id)arg2;
- (void)addQuickAction:(id)arg1 toDictionary:(struct NSMutableDictionary *)arg2 forBundleID:(id)arg3;
- (void)loadQuickActionData;
- (void)addKeysToQuickActionData:(id)arg1;
- (void)updateQuickActionData;
- (void)clearSavedQuickActionData;
- (id)storageFilePathForEnvironment:(long long)arg1;
- (void)dealloc;
- (id)init;

@end