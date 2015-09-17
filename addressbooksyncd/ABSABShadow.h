//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSABShadow : NSObject <ABSSyncStateMutable>
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSObject<OS_dispatch_source> *_idleTimer;
    struct sqlite3_stmt *statements[5];
    int specific;
}

- (void).cxx_destruct;
- (void)replaceObject:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)forEach:(CDUnknownBlockType)arg1;
- (id)getSyncObjectForDiffKey:(id)arg1;
- (id)_fetchByPortableKey:(id)arg1;
- (void)deleteAll;
- (void)_delete:(id)arg1;
- (void)_update:(id)arg1;
- (void)updateRecord:(id)arg1 modTime:(id)arg2;
- (void)_runOnQueueAsync:(CDUnknownBlockType)arg1;
- (void)_runOnQueueSyncIfNeeded:(CDUnknownBlockType)arg1;
- (void)_runOnQueueSync:(CDUnknownBlockType)arg1;
- (void)_doOpWhileOnQueue:(CDUnknownBlockType)arg1;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (_Bool)_prepareStatements;
- (_Bool)_execSql:(const char *)arg1;
- (_Bool)_createDb;
- (void)dealloc;
- (void)_closeDb;
- (void)_openDb;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end