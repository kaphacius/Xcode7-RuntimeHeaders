//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchManager : NSObject
{
    id <MKMapServiceSearchTicket> _activeSearchTicket;
    NSString *_searchString;
    NSMutableArray *_searchResults;
    SearchResult *_selectedSearchResult;
    _Bool _scrollToResults;
    _Bool _resultsModifiedSinceLastLoaded;
    NSHashTable *_observers;
    unsigned long long _selectedIndex;
    _Bool _chainResults;
    SearchRequestHistoryItem *_searchRequestHistoryItem;
    NSString *_userTypedSearchString;
    GEOSearchCategory *_searchCategory;
}

+ (id)sharedManager;
@property(readonly, nonatomic, getter=isChainResults) _Bool chainResults; // @synthesize chainResults=_chainResults;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) NSString *userTypedSearchString; // @synthesize userTypedSearchString=_userTypedSearchString;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) id <MKMapServiceTicket> activeSearchTicket; // @synthesize activeSearchTicket=_activeSearchTicket;
@property(retain, nonatomic) SearchRequestHistoryItem *searchRequestHistoryItem; // @synthesize searchRequestHistoryItem=_searchRequestHistoryItem;
@property(retain, nonatomic) SearchResult *selectedSearchResult; // @synthesize selectedSearchResult=_selectedSearchResult;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)recordActionForSwitchingToViewMode:(long long)arg1;
- (void)recordActionForActivity:(id)arg1 withSearchResult:(id)arg2;
- (void)recordAction:(int)arg1 searchResult:(id)arg2 includeStarkInfo:(_Bool)arg3;
- (void)recordAction:(int)arg1 searchResult:(id)arg2 mapRegion:(id)arg3 zoomLevel:(double)arg4 includeStarkInfo:(_Bool)arg5;
- (void)recordAction:(int)arg1 searchResult:(id)arg2;
- (void)_searchReceivedNearbyCategoryResults:(id)arg1 sectionHeader:(id)arg2 origin:(long long)arg3 andError:(id)arg4;
- (void)_searchReceivedResults:(id)arg1 refinement:(_Bool)arg2 origin:(long long)arg3;
- (void)_searchCanceled;
- (void)_searchFailedWithError:(id)arg1;
- (void)handleGeocoderError:(id)arg1;
- (void)readSearchResultsType:(int)arg1;
- (_Bool)writeSearchResultsType:(int)arg1;
- (void)cancelSearches;
- (void)searchForBookmarkSearchResult:(id)arg1 origin:(long long)arg2;
- (void)searchForAddress:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)searchForAddressString:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)searchForString:(id)arg1 traits:(id)arg2 scrollToResults:(_Bool)arg3 source:(int)arg4;
- (void)searchForString:(id)arg1 traits:(id)arg2 completedQuery:(id)arg3 scrollToResults:(_Bool)arg4 source:(int)arg5;
- (void)resolveRefinementForSearch:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4;
- (void)searchForSearchResults:(id)arg1 completedQuery:(id)arg2;
- (void)searchForSearchInfo:(id)arg1 completedQuery:(id)arg2 scrollToResults:(_Bool)arg3 displayPlaceCardForResult:(id)arg4;
- (void)searchForSearchInfo:(id)arg1 completedQuery:(id)arg2;
- (void)searchForAddress:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4;
- (void)searchForAddressString:(id)arg1 defaultSearchResultType:(unsigned int)arg2 traits:(id)arg3 source:(int)arg4;
- (void)_forwardGeocodeAddress:(id)arg1 addressString:(id)arg2 addressBookAddress:(id)arg3 defaultSearchResultType:(unsigned int)arg4 traits:(id)arg5 source:(int)arg6;
- (void)searchForExternalURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (void)searchForPopularNearbyResults:(id)arg1 selectedIndex:(unsigned long long)arg2 forCategory:(id)arg3 traits:(id)arg4 source:(int)arg5;
- (void)searchForCompletion:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)searchForNearbyCategory:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)searchForCategory:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned int)arg3 completedQuery:(id)arg4 scrollToResults:(_Bool)arg5 source:(int)arg6;
- (void)searchForString:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned int)arg3 completedQuery:(id)arg4 scrollToResults:(_Bool)arg5 source:(int)arg6;
- (void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 placeDisplayHistory:(id)arg4 scrollToResults:(_Bool)arg5 origin:(long long)arg6;
- (void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 scrollToResults:(_Bool)arg4 origin:(long long)arg5;
- (void)_submitNearbyCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 origin:(long long)arg3;
- (void)_submitTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 scrollToResults:(_Bool)arg4 origin:(long long)arg5;
- (void)_submitCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 scrollToResults:(_Bool)arg4 origin:(long long)arg5;
- (void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (void)clearSearchResults;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)printedPageSubtitle;
- (id)printedPageTitle;

@end