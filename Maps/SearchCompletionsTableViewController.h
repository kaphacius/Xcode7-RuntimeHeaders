//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchCompletionsTableViewController : UITableViewController <MKSearchCompleterDelegate, ExtendedTableViewDelegate, SearchManagerObserver, MKLocationManagerObserver, BrowseManagerObserver, SearchResultQuickActionMenuPresenterDelegate, SearchBarSearchManagerDelegate, BrowseViewDelegate, BrowseViewMapsDelegate>
{
    id <SearchCompletionsTableViewControllerDelegate> _delegate;
    SearchBarSearchManager *_searchManager;
    MKLocalSearchCompleter *_searchCompleter;
    NSArray *_systemCompletions;
    NSArray *_localCompletions;
    NSArray *_tableSafeLocalCompletions;
    NSArray *_serverCompletions;
    NSArray *_tableSafeServerCompletions;
    NSArray *_routineCompletions;
    NSArray *_tableSafeRoutineCompletions;
    UIView *_bottomLine;
    NSString *_query;
    NSString *_visibleQuery;
    SearchResult *_customSearchResult;
    _Bool _suggestsDroppedPin;
    _Bool _suggestsCurrentLocation;
    _Bool _suggestsRouteCompletions;
    _Bool _suggestsServerCompletions;
    _Bool _stopShowingDefaultSuggestions;
    _Bool _delegateRespondsToScrollViewDidScroll;
    _Bool _suggestsRoutinePredictedLocations;
    int _searchMode;
    long long _idiom;
    SearchCompletionTableViewCell *_favoritesCell;
    NSArray *_orderedSections;
    _Bool _pendingReset;
    _Bool _finishedLocalCompletions;
    _Bool _finishedServerCompletions;
    _Bool _isScrolling;
    _Bool _showBrowse;
    _Bool _shouldUpdateTheView;
    _Bool _shouldIgnoreBrowseUpdate;
    _Bool _showcollection;
    id <HistoryUIHold> _historyUIHold;
    SearchBarSearchResults *_localSearchResults;
    BrowseCellView *_browseCell;
    TitleRowBrowseView *_titleRow;
    RTRoutineManager *_routineManager;
    MKLocationManager *_locationManager;
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;
    _Bool _suggestsHistory;
    _Bool _opaque;
    _Bool _showsLocalSuggestionsForEmptyQuery;
    _Bool _showsQueryAsCompletionIfNoneFound;
    _Bool _showsQueryAsCompletionAsDisambiguation;
    _Bool _showsCollectionsButton;
    _Bool _showsShortcutView;
    _Bool _disableBrowse;
    NSArray *_serverCategoriesCompletions;
    SearchInfo *_refinementResults;
    UIView *_noContentView;
    GEOLocation *_currentLocation;
    double _lastContentOffset;
}

@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool disableBrowse; // @synthesize disableBrowse=_disableBrowse;
@property(nonatomic) _Bool showsShortcutView; // @synthesize showsShortcutView=_showsShortcutView;
@property(nonatomic) _Bool showsCollectionsButton; // @synthesize showsCollectionsButton=_showsCollectionsButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) SearchInfo *refinementResults; // @synthesize refinementResults=_refinementResults;
@property(retain, nonatomic) NSArray *orderedSections; // @synthesize orderedSections=_orderedSections;
@property(nonatomic) _Bool showsQueryAsCompletionAsDisambiguation; // @synthesize showsQueryAsCompletionAsDisambiguation=_showsQueryAsCompletionAsDisambiguation;
@property(nonatomic) _Bool showsQueryAsCompletionIfNoneFound; // @synthesize showsQueryAsCompletionIfNoneFound=_showsQueryAsCompletionIfNoneFound;
@property(nonatomic) _Bool suggestsRoutinePredictedLocations; // @synthesize suggestsRoutinePredictedLocations=_suggestsRoutinePredictedLocations;
@property(nonatomic) _Bool suggestsRouteCompletions; // @synthesize suggestsRouteCompletions=_suggestsRouteCompletions;
@property(nonatomic) _Bool showsLocalSuggestionsForEmptyQuery; // @synthesize showsLocalSuggestionsForEmptyQuery=_showsLocalSuggestionsForEmptyQuery;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) _Bool stopShowingDefaultSuggestions; // @synthesize stopShowingDefaultSuggestions=_stopShowingDefaultSuggestions;
@property(nonatomic) _Bool suggestsHistory; // @synthesize suggestsHistory=_suggestsHistory;
@property(nonatomic) _Bool suggestsServerCompletions; // @synthesize suggestsServerCompletions=_suggestsServerCompletions;
@property(nonatomic) _Bool suggestsCurrentLocation; // @synthesize suggestsCurrentLocation=_suggestsCurrentLocation;
@property(nonatomic) _Bool suggestsDroppedPin; // @synthesize suggestsDroppedPin=_suggestsDroppedPin;
@property(retain, nonatomic) SearchResult *customSearchResult; // @synthesize customSearchResult=_customSearchResult;
@property(retain, nonatomic) NSString *visibleQuery; // @synthesize visibleQuery=_visibleQuery;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *routineCompletions; // @synthesize routineCompletions=_routineCompletions;
@property(retain, nonatomic) NSArray *serverCategoriesCompletions; // @synthesize serverCategoriesCompletions=_serverCategoriesCompletions;
@property(retain, nonatomic) NSArray *serverCompletions; // @synthesize serverCompletions=_serverCompletions;
@property(retain, nonatomic) NSArray *localCompletions; // @synthesize localCompletions=_localCompletions;
@property(retain, nonatomic) NSArray *systemCompletions; // @synthesize systemCompletions=_systemCompletions;
@property(nonatomic) __weak id <SearchCompletionsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;
- (_Bool)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)updateSavedLocation:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)extendedTableViewDataSourceContentDidChange:(id)arg1;
- (_Bool)_isDisplayingAnyRows;
- (void)browseManagerStateUpdated;
- (double)browseViewParentWidth:(id)arg1;
- (void)browseViewUpdateHeight:(id)arg1;
- (void)browseViewCloseSelected:(id)arg1;
- (void)browseView:(id)arg1 actionSelected:(unsigned long long)arg2;
- (void)browseView:(id)arg1 categorySelected:(id)arg2;
- (void)browseView:(id)arg1 categoryShown:(id)arg2;
- (id)browseCell;
- (void)didSelectCustomInitialItemAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (_Bool)isFiltering;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellWithMainScreenClass:(Class)arg1 starkClass:(Class)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadTableViewData;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)indexOfCustomInitialItemForIndexPath:(id)arg1;
- (void)reloadCustomInitialItemAtIndex:(long long)arg1 animation:(long long)arg2;
- (void)reloadCustomInitialItemsWithAnimation:(long long)arg1;
- (id)cellForCustomInitialItemAtIndex:(long long)arg1;
- (long long)numberOfCustomInitialItemCells;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)completerDidUpdateResults:(id)arg1 finished:(_Bool)arg2;
- (void)receivedSearchResults:(id)arg1 forSearchString:(id)arg2;
- (void)updateLocalResultsForSearchString:(id)arg1;
- (void)updateDelegateAfterCompletionResults;
- (_Bool)hasCompletionsForQuery:(id)arg1;
- (_Bool)_shouldShowDefaultCompletions;
- (void)queryString:(id)arg1 filterCategory:(id)arg2 traits:(id)arg3 forSearchMode:(int)arg4 withSource:(int)arg5;
- (void)queryString:(id)arg1 traits:(id)arg2 forSearchMode:(int)arg3 withSource:(int)arg4;
- (void)queryCategory:(id)arg1;
- (void)_defaultRoutineCompletionsForSearchMode:(int)arg1;
- (id)_filterPredictedLocationsOfInterest:(id)arg1;
- (id)_defaultCompletionsForSearchMode:(int)arg1;
- (id)_directionsHomeHistoryItem;
- (void)_resetTableView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadView;
- (double)_tableMarginWidth;
- (void)_locationManagerApprovalDidChange:(id)arg1;
- (id)_sectionsForIdiom:(long long)arg1;
- (unsigned long long)_indexOfSection:(int)arg1;
- (int)_sectionAtIndex:(long long)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)_setTableViewBackgroundColor;
- (void)_recentsChanged;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)hideBlurViewTitle:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateBrowseViewState;
- (id)firstSuggestionCell;
- (_Bool)shouldShowBrowse;
@property(readonly, nonatomic, getter=isShowingSuggestions) _Bool showingSuggestions;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)_initWithStyle:(long long)arg1 idiom:(long long)arg2;
- (id)initWithIdiom:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end