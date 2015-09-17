//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDDashboardViewController : WDReorderableTableViewController <WDDashboardDataUnitGroupsObserver, WDReorderableTableViewControllerDelegate, WDDataProviderOrderObserver>
{
    WDControllerManager *_controllerManager;
    WDTimeScopeControl *_timeSpanControl;
    NSMutableArray *_dashboardDataUnitGroups;
    NSMutableDictionary *_dashboardChartItems;
    NSIndexPath *_placeholderIndex;
    _UINavigationControllerPalette *_palette;
    UIImageView *_dashboardIconView;
    UILabel *_dashboardEmptyLabel;
    UILabel *_dashboardEmptyHelpLabel;
    _Bool _hasSetupConstraints;
    NSUserActivity *_userActivity;
}

- (void).cxx_destruct;
- (void)dataProviderOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (void)reorderingDidFinishForTableViewController:(id)arg1;
- (void)tableViewController:(id)arg1 rowDidMoveFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableViewController:(id)arg1 reorderingDidBeginAtIndexPath:(id)arg2;
- (void)_attachPaletteIfNecessary;
- (void)_localeDidChange:(id)arg1;
- (void)_reloadData;
- (_Bool)_hasCards;
- (void)_adjustNoCardsEnabled;
- (void)_reloadItems;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (id)_categoryForGroup:(id)arg1;
- (id)_itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numItems;
- (void)dashboardDataUnitGroupsUpdated:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithControllerManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end