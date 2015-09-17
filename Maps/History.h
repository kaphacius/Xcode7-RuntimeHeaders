//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface History : NSObject <NMMapsAppXPCInterface, MapsSyncedClient>
{
    MapsSyncManager *_syncManager;
    NSObject<OS_dispatch_queue> *_saveQ;
    id <HistoryDelegate> _delegate;
    NSUserActivity *_recentUserActivity;
    NSXPCConnection *_connection;
    NSMutableArray *_history;
    NSMutableArray *_syncedHistory;
    NSMutableArray *_failedSearches;
    NSMutableArray *_failedDirectionsRequests;
    _Bool _addressBookCallbackWasRegistered;
    _Bool _shouldSendHistoryDidChangeNotifications;
}

+ (id)sharedHistory;
+ (id)sharedHistoryCreatingIfMissing:(_Bool)arg1;
+ (id)beginHoldingUIInterferingTasks;
+ (void)beginPrecachingHistoryIfNeeded;
@property(nonatomic) __weak id <HistoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldSendHistoryDidChangeNotifications; // @synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications;
- (void).cxx_destruct;
- (void)updateHistoryItem:(id)arg1;
- (void)updateDroppedPin:(id)arg1;
- (void)stopDirections;
- (void)updateDirectionsStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearPreviewRouteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startDirectionsToPreviewRouteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)syncManagerDidUpdateSyncedItems:(id)arg1;
- (void)updateSyncedItemAtIndexes:(id)arg1;
- (void)removeSyncedItemsAtIndexes:(id)arg1;
- (void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
- (_Bool)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newSyncedItemForSyncData:(id)arg1;
@property(readonly, nonatomic) NSArray *syncedItems;
@property(readonly, nonatomic) _Bool syncSupportsKVO;
@property(readonly, nonatomic) _Bool syncShouldUseItemPositions;
@property(readonly, nonatomic) _Bool syncShouldUseCustomStore;
@property(readonly, nonatomic) _Bool syncInvertedOrdering;
@property(readonly, nonatomic) NSString *syncIdentifier;
@property(readonly, nonatomic) NSArray *orderedHistory;
@property(readonly, nonatomic) NSArray *allHistory;
@property(readonly, nonatomic) unsigned long long orderedHistoryCount;
- (void)updateAddressForSearchResult:(id)arg1;
- (void)updateHistoryItemTimestamp:(id)arg1;
- (void)updatePlaceDisplayHistoryItem:(id)arg1 byReplacingWithItem:(id)arg2;
- (void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2;
- (void)removeAllItems;
- (void)addStateToHistory;
- (void)_addHistoryItem:(id)arg1 isDirectionsFailure:(_Bool)arg2 isSearchFailure:(_Bool)arg3;
- (_Bool)_containsFailedDirectionsHistoryItem:(id)arg1;
- (void)addSearchRequestHistoryItem:(id)arg1 isFailure:(_Bool)arg2;
- (void)addDirectionsHistoryItem:(id)arg1 isFailure:(_Bool)arg2;
- (void)addHistoryItem:(id)arg1;
- (void)_dedupeAndSortHistory;
- (void)_startSyncIfNotYetStarted;
- (void)_startSyncIfPossible;
- (void)_registerAddressBookIfUnregistered;
- (void)_registerAddressBookIfPossible;
- (_Bool)_isValidHistoryItem:(id)arg1;
- (void)_createCompanionConnection;
- (void)dealloc;
- (id)init;
- (void)holdingStateDidChange;
- (_Bool)_holdingUIInterferingTasksIsUseful;
- (void)_removeInvalidItems;
- (void)_madeChanges;
- (void)_saveFailuresWithTaskName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_saveFailedDirectionsRequests;
- (void)_saveFailedSearches;
- (void)_saveHistory;
- (void)_updateHistory;
- (id)allRAPUserSearches;
- (id)allRAPUserDirectionsRequests;
- (void)mergeWithLocalStoreOnNextLaunch;
- (void)resetSyncState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end