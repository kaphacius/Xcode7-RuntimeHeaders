//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedCollectionViewLayoutIntegrator : NSObject <FROnScreenAdManagerDataSource, FROnScreenAdManagerDelegate>
{
    _Bool _collectionViewIsScrolling;
    _Bool _isCancelled;
    _Bool _currentlyExtendingRegions;
    id <FRFeedCollectionViewLayoutIntegratorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_integratorSerialQueue;
    FROnScreenAdManager *_adManager;
    id <FRFeedCollectionViewLayoutIntegratorDataSource> _dataSource;
    double _preloadAboveRange;
    double _preloadBelowRange;
    FRFeedCollectionViewLayoutBlueprint *_currentBlueprint;
    id <FRFeedCollectionViewLayoutIntegratorDataSource> _backgroundDataSource;
    struct CGPoint _lastContentOffset;
    struct CGRect _bounds;
}

@property(nonatomic) _Bool currentlyExtendingRegions; // @synthesize currentlyExtendingRegions=_currentlyExtendingRegions;
@property(retain, nonatomic) id <FRFeedCollectionViewLayoutIntegratorDataSource> backgroundDataSource; // @synthesize backgroundDataSource=_backgroundDataSource;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain) FRFeedCollectionViewLayoutBlueprint *currentBlueprint; // @synthesize currentBlueprint=_currentBlueprint;
@property(nonatomic) _Bool collectionViewIsScrolling; // @synthesize collectionViewIsScrolling=_collectionViewIsScrolling;
@property(nonatomic) double preloadBelowRange; // @synthesize preloadBelowRange=_preloadBelowRange;
@property(nonatomic) double preloadAboveRange; // @synthesize preloadAboveRange=_preloadAboveRange;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) id <FRFeedCollectionViewLayoutIntegratorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FROnScreenAdManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *integratorSerialQueue; // @synthesize integratorSerialQueue=_integratorSerialQueue;
@property(nonatomic) __weak id <FRFeedCollectionViewLayoutIntegratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adManager:(id)arg1 didUpdateBlueprint:(id)arg2 withDiffFromCurrentBlueprint:(id)arg3;
- (_Bool)adManager:(id)arg1 visibilityForObjectID:(id)arg2;
- (id)currentBlueprintForAdManager:(id)arg1;
- (void)_dataSource:(id)arg1 loadBlueprint:(id)arg2 withLookAheadRange:(double)arg3 atEnd:(long long)arg4 layingOutIfNotAlreadyCached:(_Bool)arg5;
- (id)_extendBlueprint:(id)arg1 withRegion:(id)arg2 atEnd:(long long)arg3;
- (id)_dataSource:(id)arg1 loadRegionWithBatchID:(id)arg2 referencingBlueprint:(id)arg3 layingOutIfNotAlreadyCached:(_Bool)arg4;
- (void)_dataSource:(id)arg1 prewarmBlueprint:(id)arg2 aroundObjectWithID:(id)arg3 withHeightRange:(double)arg4 layingOutIfNotAlreadyCached:(_Bool)arg5;
- (void)_enqueueWorkToExpandRegionsForCurrentContentOffset;
- (id)_dataSource:(id)arg1 batchIDOfNextRegionToExtendBlueprint:(id)arg2 towards:(long long)arg3;
- (void)reloadRegionWithIDAnimated:(id)arg1;
- (_Bool)canExpandCurrentBlueprintWithRegionsToward:(long long)arg1;
- (void)ensureExpansionOfCellWithID:(id)arg1 adType:(long long)arg2;
- (void)updateCurrentContentOffset:(struct CGPoint)arg1;
- (void)_dataSource:(id)arg1 updateGlobalMinAndMaxIndexesOfBlueprint:(id)arg2;
- (void)prewarmBlueprintAroundObjectWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadFirstBlueprintAroundObjectWithID:(id)arg1;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (void)cancel;
- (id)initWithBounds:(struct CGRect)arg1 dataSource:(id)arg2 serialQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end