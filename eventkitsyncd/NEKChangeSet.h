//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKChangeSet : NSObject
{
    struct __CFArray *_inserts;
    struct __CFArray *_updates;
    struct __CFArray *_deletes;
    struct CalDatabase *_database;
}

- (id)description;
- (void)enumerateChanges:(int)arg1 forEntitiesOfType:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (struct __CFArray *)changedRecordIDsForEntitiesOfType:(int)arg1 changeType:(int)arg2;
- (void)setDeletes:(struct __CFArray *)arg1;
- (void)setUpdates:(struct __CFArray *)arg1;
- (void)setInserts:(struct __CFArray *)arg1;
- (struct __CFArray *)deletes;
- (struct __CFArray *)updates;
- (struct __CFArray *)inserts;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)initWithInserts:(struct __CFArray *)arg1 updates:(struct __CFArray *)arg2 deletes:(struct __CFArray *)arg3 database:(struct CalDatabase *)arg4;

@end