//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersListAddShareesController : UIViewController <MFComposeRecipientViewDelegate, MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    MFComposeRecipientView *_composeView;
    UIScrollView *_composeScrollView;
    UITableView *_searchResultsView;
    MFSearchShadowView *_shadowView;
    _Bool _showingSearchField;
    MFContactsSearchResultsModel *_searchResultsModel;
    MFContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    NSNumber *_lastSearchId;
    _Bool _ABAccessDenied;
    NSString *_searchAccountID;
}

@property(copy, nonatomic) NSString *searchAccountID; // @synthesize searchAccountID=_searchAccountID;
- (void).cxx_destruct;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)animationDidStop:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)searchWithText:(id)arg1;
- (id)_searchManager;
- (double)_maxScrollerHeight;
- (void)_hideSearchFieldAndCancelOutstandingSearches:(_Bool)arg1;
- (void)_showSearchField;
- (id)_searchResultsView;
- (id)_shadowView;
- (id)shareesAfterForceCommit:(_Bool)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end