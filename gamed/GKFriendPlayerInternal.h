//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal
{
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;
+ (int)familiarity;
+ (id)propertiesToFetch;
- (void)setLastPlayedGame:(id)arg1;
- (id)lastPlayedGame;
- (void)setLastPlayedDate:(id)arg1;
- (id)lastPlayedDate;
- (void)setStatus:(id)arg1;
- (id)status;
- (int)defaultFamiliarity;
- (_Bool)isFriend;
- (void)dealloc;
- (void)updateWithProperties:(id)arg1;
- (void)updateWithCacheObject:(id)arg1;

@end