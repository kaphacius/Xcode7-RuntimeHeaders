//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUnreadNotificationStoreItem : NSObject
{
    _Bool _unread;
    _Bool _clearable;
    NSDate *_date;
    unsigned int _bulletinContentHash;
    CSLBulletinKey *_bulletinKey;
    NSString *_bulletinID;
}

+ (id)notificationStoreItemWithBulletin:(id)arg1;
@property(readonly, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(retain, nonatomic) CSLBulletinKey *bulletinKey; // @synthesize bulletinKey=_bulletinKey;
@property(readonly, nonatomic) unsigned int bulletinContentHash; // @synthesize bulletinContentHash=_bulletinContentHash;
@property(nonatomic, getter=isClearable) _Bool clearable; // @synthesize clearable=_clearable;
@property(nonatomic, getter=isUnread) _Bool unread; // @synthesize unread=_unread;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *sectionID;
@property(readonly, nonatomic) NSString *publisherMatchID;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithBulletinKey:(id)arg1 date:(id)arg2 unread:(_Bool)arg3 bulletinContentHash:(unsigned int)arg4 clearable:(_Bool)arg5 bulletinID:(id)arg6;
- (id)initWithBulletinKey:(id)arg1 date:(id)arg2 unread:(_Bool)arg3 bulletinContentHash:(unsigned int)arg4 clearable:(_Bool)arg5;

@end