//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRDispatchDataController : NSArrayController
{
    id _observableObject;
    NSString *_keyPath;
    NSMutableArray *_selectedObjects;
}

- (BOOL)setSelectedObjects:(id)arg1;
- (BOOL)removeSelectedObjects:(id)arg1;
- (BOOL)addSelectedObjects:(id)arg1;
- (id)selectedData;
- (id)selectedObjects;
- (void)setFilterPredicate:(id)arg1;
- (void)addObject:(id)arg1;
- (void)setContent:(id)arg1;
- (void)_reloadSelectedObjectsWithContent:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)init;

@end