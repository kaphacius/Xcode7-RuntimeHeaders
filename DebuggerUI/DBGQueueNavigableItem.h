//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGQueueNavigableItem : DBGDebugNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    BOOL _needsOnlyLiveThreads;
    BOOL _hasOnlyLiveThreads;
}

@property(readonly) BOOL hasOnlyLiveThreads; // @synthesize hasOnlyLiveThreads=_hasOnlyLiveThreads;
- (void).cxx_destruct;
- (id)liveThreadChildItems;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)image;
- (id)subtitle;
- (id)name;

@end