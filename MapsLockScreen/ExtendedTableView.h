//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ExtendedTableView : UITableView
{
    long long _countOfActiveUpdateBlocks;
}

- (void)setDataSource:(id)arg1;
- (void)reloadData;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)_noteDataSourceChangedIfPossible;
- (void)endUpdates;
- (void)beginUpdates;

@end