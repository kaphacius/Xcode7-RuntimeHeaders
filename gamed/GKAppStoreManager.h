//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAppStoreManager : NSObject
{
}

+ (id)sharedManager;
- (void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)accountIsLoggedIntoAStore;
- (void)stopObservingStoreFrontChangesFor:(id)arg1;
- (void)beginObservingStoreFrontChangesFor:(id)arg1 withSelector:(SEL)arg2;

@end