//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDelayedDeletePhotoCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;
}

+ (id)writerWithDatabaseConnection:(id)arg1;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;
- (void)bindParametersForGetOldPhotosStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;
- (id)getOldPhotosSQL;
- (void)bindParametersForDeleteOldPhotosStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;
- (id)deleteOldPhotosSQL;
- (void)bindParametersForPhotoStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;
- (id)photosInsertSQL;
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;
- (id)requestsInsertSQL;
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end