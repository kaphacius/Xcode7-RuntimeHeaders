//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MapsActivityViewControllerDelegate <NSObject>
- (MKMapView *)mapsActivityMapView;
- (void)mapsActivityViewController:(MapsActivityViewController *)arg1 addBookmarkWithSearchResult:(SearchResult *)arg2 title:(NSString *)arg3;

@optional
- (void)mapsActivityViewController:(MapsActivityViewController *)arg1 activityCompleted:(_Bool)arg2;
- (void)mapsActivityViewControllerPresentRoutingApps:(MapsActivityViewController *)arg1;
- (void)mapsActivityViewControllerPrint:(MapsActivityViewController *)arg1;
@end