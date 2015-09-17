//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKLeaderboardScoreCell : GKCollectionViewCell
{
    _Bool _isAchievementCell;
    GKLeaderboard *_leaderboard;
    GKPlayerPhotoView *_iconView;
    GKLabel *_nameLabel;
    GKLabel *_scoreLabel;
    GKLabel *_rankLabel;
}

+ (double)defaultShowcaseRowHeight;
+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property(retain, nonatomic) GKLabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) GKLabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GKPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isAchievementCell; // @synthesize isAchievementCell=_isAchievementCell;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (id)popoverSourceView;
- (_Bool)canRemoveItem;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (void)setRepresentedItem:(id)arg1;
- (struct CGRect)alignmentRectForText;
@property(retain, nonatomic) GKScore *score;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)establishConstraints;

@end