//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinQueue : NSObject
{
    NSMutableArray *_bulletinQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <CSLBulletinQueueDequeueDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLBulletinQueueDequeueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)purge;
- (id)firstBulletin;
- (id)dequeueNextBulletinAlertItemAndDidCoalesce:(_Bool *)arg1;
- (void)enqueueBulletins:(id)arg1 playLightsAndSirens:(_Bool)arg2;
- (void)enqueueBulletin:(id)arg1 playLightsAndSirens:(_Bool)arg2;
- (_Bool)replaceBulletin:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)hasBulletin:(id)arg1;
- (void)invalidateBulletinOfIDs:(id)arg1;
- (void)removeBulletin:(id)arg1;
- (unsigned int)indexOfBulletinOfBulletinID:(id)arg1;
- (id)init;

@end