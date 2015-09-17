//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLSyncStoreManager : NSObject <SYStoreDelegate>
{
    _Bool _shouldWatchInitiateInitialSync;
    _Bool _syncTrapDidFinish;
    _Bool _enableEncryption;
    _Bool _isSyncCoordinatorReady;
    NSString *_watchBuildVersion;
    id <CLSyncStoreManagerDelegate> _delegate;
    CLSilo *_syncStoreSilo;
    int _syncPriority;
    NSString *_clientName;
    SYStore *_syncStore;
}

+ (_Bool)isWatchBuildVersionBondiAndLater;
@property(nonatomic) _Bool isSyncCoordinatorReady; // @synthesize isSyncCoordinatorReady=_isSyncCoordinatorReady;
@property(nonatomic) _Bool enableEncryption; // @synthesize enableEncryption=_enableEncryption;
@property(retain, nonatomic) SYStore *syncStore; // @synthesize syncStore=_syncStore;
@property(nonatomic) _Bool syncTrapDidFinish; // @synthesize syncTrapDidFinish=_syncTrapDidFinish;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(nonatomic) int syncPriority; // @synthesize syncPriority=_syncPriority;
@property(retain, nonatomic) CLSilo *syncStoreSilo; // @synthesize syncStoreSilo=_syncStoreSilo;
@property(nonatomic) id <CLSyncStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(nonatomic) _Bool shouldWatchInitiateInitialSync; // @synthesize shouldWatchInitiateInitialSync=_shouldWatchInitiateInitialSync;
- (void)syncStoreDidSetupAfterPairing:(id)arg1;
- (_Bool)syncStoreShouldPerformInitialFullSync:(id)arg1;
- (void)syncStore:(id)arg1 peerFinishedProcessingMessageWithContext:(id)arg2;
- (void)syncStore:(id)arg1 sentMessageWithContext:(id)arg2;
- (void)syncStore:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (void)syncStoreDidUnpair:(id)arg1;
- (void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreWillUpdate:(id)arg1;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (void)updateSyncStoreState:(_Bool)arg1 forKey:(id)arg2;
- (void)updateActivePairedWatchInfo;
- (void)createSyncStoreState;
- (void)handleUnpairing;
- (void)handlePairing;
- (void)checkSyncStoreState;
- (void)invalidate;
- (void)setNeedsFullSync;
- (void)sentAllDeltaChanges;
- (void)didHandleResetNotification;
- (void)sendingResetNotification;
- (void)didHandlePairingNotification;
- (_Bool)isSyncRestricted;
- (_Bool)isSyncStoreActive;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)setSyncStoreSerializer:(id)arg1;
- (void)setIsDeltaSyncInProgress:(_Bool)arg1;
- (void)setFullPathForSyncState:(id)arg1;
- (void)dealloc;
- (id)initWithClientName:(id)arg1 SYStoreServiceID:(id)arg2 PSYServiceID:(id)arg3 priority:(int)arg4 isMaster:(_Bool)arg5 silo:(id)arg6 delegate:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end