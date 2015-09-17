//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedCollectionViewLayoutBlueprintDiff : NSObject
{
    NSArray *_insertedIndexPaths;
    NSArray *_removedIndexPaths;
    NSArray *_updatedIndexPaths;
    NSMutableIndexSet *_mutableInsertedIndexes;
    NSMutableIndexSet *_mutableRemovedIndexes;
    NSMutableIndexSet *_mutableUpdatedIndexes;
}

@property(retain, nonatomic) NSMutableIndexSet *mutableUpdatedIndexes; // @synthesize mutableUpdatedIndexes=_mutableUpdatedIndexes;
@property(retain, nonatomic) NSMutableIndexSet *mutableRemovedIndexes; // @synthesize mutableRemovedIndexes=_mutableRemovedIndexes;
@property(retain, nonatomic) NSMutableIndexSet *mutableInsertedIndexes; // @synthesize mutableInsertedIndexes=_mutableInsertedIndexes;
@property(readonly, nonatomic) NSArray *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
@property(readonly, nonatomic) NSArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(readonly, nonatomic) NSArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)finalize;
- (id)init;

@end