//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NMGSyncManager : MSPSyncManager
{
    id <NMGSyncManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <NMGSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)completedSync;
- (void)notifyObservers;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (id)readHistory;
- (id)readPins;
- (id)readBookmarks;

@end