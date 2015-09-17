//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PlacePresentationController : NSObject <MapsActivityViewControllerDelegate, _MKPlaceViewControllerDelegate>
{
    PlaceDisplayHistoryAddition *_historyAddition;
    SearchResult *_searchResult;
    id <PlacePresentationControllerDelegate> _presentationDelegate;
    _MKPlaceViewController *_placeViewController;
}

@property(nonatomic) __weak _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
@property(nonatomic) __weak id <PlacePresentationControllerDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(copy, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (id)mapsActivityMapView;
- (void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3;
- (void)placeViewController:(id)arg1 didSelectReroute:(id)arg2 withDecoderData:(id)arg3 withOrigin:(id)arg4;
- (void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
- (void)placeViewControllerDidSelectFlyoverTour:(id)arg1;
- (void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;
- (void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(id)arg1;
- (void)placeViewController:(id)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2;
- (void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (void)placeViewControllerDidSelectRemovePin:(id)arg1;
- (void)placeViewControllerDidDismiss:(id)arg1;
- (id)activityViewControllerForPlaceViewController:(id)arg1;
- (void)placeViewController:(id)arg1 removeFavoriteForMapItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)placeViewController:(id)arg1 addFavoriteForMapItem:(id)arg2 title:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)placeViewController:(id)arg1 hasFavoriteForMapItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (unsigned long long)_placeViewControllerOptionsForSearchResult:(id)arg1;
- (void)dismissPresentedPlaceAnimated:(_Bool)arg1;
- (void)errorLoadingSearchResult:(id)arg1;
- (void)willUpdateSearchResult;
- (_Bool)shouldShowReportAProblemForSearchResult:(id)arg1;
- (void)updatePlaceWithSearchResult:(id)arg1;
- (void)prepareToPresentPlaceViewController:(id)arg1 forSearchResult:(id)arg2;
- (void)_setupRerouting;
- (id)placeViewControllerWithSearchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end