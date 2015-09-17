//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WebBookmarksServer : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCListener *_listener;
    NSMutableArray *_connections;
    NSMutableArray *_readingListReplyConnections;
    NSMutableArray *_indexedDatabaseUsages;
    WBUHistory *_history;
    _Bool _isAlreadyClearingHistory;
    WebBookmarksServerReadingListHandler *_readingListHandler;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)_logWarningWithMessage:(id)arg1 connection:(id)arg2;
- (void)_connection:(id)arg1 getCurrentlySelectedSearchEngineWithMessage:(id)arg2;
- (void)_cloudHistorySaveChangesDidComplete:(id)arg1;
- (_Bool)_isCloudHistoryEnabled;
- (void)_saveChangesToCloudHistoryStore;
- (void)_finishClearingAllHistory;
- (void)_clearAllHistory;
- (void)_connection:(id)arg1 clearAllSafariHistoryWithMessage:(id)arg2;
- (void)_connection:(id)arg1 getSafariDataUsageSummaryWithMessage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariPersistentURLCacheStorage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariAllWebSecurityOriginWithMessage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariWebSecurityOriginWithMessage:(id)arg2;
- (void)_deleteDataForWebsiteDataRecord:(id)arg1 matchingWebKitWebsiteDataRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_legacyDeleteSafariWebSecurityOriginForWebsiteDataRecord:(id)arg1;
- (void)_connection:(id)arg1 getSafariWebDataUsageWithMessage:(id)arg2;
- (void)_generateWebsiteDataRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_removeAllIDBData;
- (_Bool)_removeIDBDataForHost:(id)arg1;
- (void)_refreshIndexedDatabaseUsage;
- (void)_initializeSafariWebDataIfNeeded;
- (void)_connection:(id)arg1 didTogglePrivateBrowsingWithMessage:(id)arg2;
- (void)_connection:(id)arg1 didToggleCloudTabsWithMessage:(id)arg2;
- (void)_clearCloudTabsForCurrentDeviceForConnection:(id)arg1;
- (void)_clearAllCloudTabDevicesForConnection:(id)arg1;
- (void)_addToReadingListWithMessage:(id)arg1 forConnection:(id)arg2;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end