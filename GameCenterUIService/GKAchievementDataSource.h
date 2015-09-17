//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAchievementDataSource : GKCollectionDataSource
{
    GKGameRecord *_gameRecord;
    NSArray *_achievements;
    NSArray *_localAchievements;
    struct UIEdgeInsets _collectionLayoutInsets;
}

@property(nonatomic) struct UIEdgeInsets collectionLayoutInsets; // @synthesize collectionLayoutInsets=_collectionLayoutInsets;
@property(retain, nonatomic) NSArray *localAchievements; // @synthesize localAchievements=_localAchievements;
@property(retain, nonatomic) NSArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)heightMultipliersForSizeCategories;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (long long)itemCount;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end