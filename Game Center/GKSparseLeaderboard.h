//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKSparseLeaderboard : GKLeaderboard
{
    GKGame *_game;
    GKPlayer *_player;
    struct _NSRange _totalRange;
    struct _NSRange _displayedRange;
    NSArray *_showcasedScores;
    unsigned long long _maxLoaded;
    struct _NSRange _currentRange;
    NSMutableArray *_allLeaderboardItems;
    NSMutableDictionary *_playerIDToLeaderboardItems;
    NSObject<OS_dispatch_queue> *_loadQueue;
    _Bool _loaded;
    GKScore *_comparePlayerScore;
    NSError *_error;
    GKLeaderboardItem *_localPlayerItem;
    GKLeaderboardItem *_comparePlayerItem;
}

@property(retain, nonatomic) GKLeaderboardItem *comparePlayerItem; // @synthesize comparePlayerItem=_comparePlayerItem;
@property(retain, nonatomic) GKLeaderboardItem *localPlayerItem; // @synthesize localPlayerItem=_localPlayerItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadQueue; // @synthesize loadQueue=_loadQueue;
@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GKScore *comparePlayerScore; // @synthesize comparePlayerScore=_comparePlayerScore;
@property(nonatomic) struct _NSRange displayedRange; // @synthesize displayedRange=_displayedRange;
@property(readonly, nonatomic) struct _NSRange totalRange; // @synthesize totalRange=_totalRange;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool showcasedScoresAdjacent;
- (id)showcasedLeaderboardItemAtShowcaseIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeToLoadForRank:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange loadedRange;
- (id)visibleLeaderboardItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfLeaderboardItems;
- (id)leaderboardItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool displayComparePlayer;
@property(readonly, nonatomic) _Bool moreScoresAvailable;
@property(readonly, nonatomic) _Bool displayLocalPlayer;
- (void)addLeaderboardItems:(id)arg1;
- (id)placeholderLeaderboardItemsForRankRange:(struct _NSRange)arg1;
- (id)description;
- (void)setLocalPlayerScore:(id)arg1;
- (void)dealloc;
- (id)initWithGame:(id)arg1;

@end