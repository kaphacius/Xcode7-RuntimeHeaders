//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HOSHomeViewController : PSEditableListController <HSUserListManagerTableDelegate>
{
    HMHome *_home;
    HOSHomeTableManager *_tableViewManager;
}

@property(retain, nonatomic) HOSHomeTableManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)_reallyDeleteHome;
- (void)deleteHome;
- (void)didLock;
- (void)suspend;
- (void)setEditable:(_Bool)arg1;
- (void)managerDidSendInvitations:(id)arg1;
- (void)managerDidDismissWithError:(id)arg1;
- (void)managerDidUpdateUserList;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end