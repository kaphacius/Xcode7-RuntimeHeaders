//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MNNavigationDisplayDelegate <NSObject>
- (void)navigationDisplay:(MNNavigationDisplay *)arg1 didChangeUserTrackingMode:(long long)arg2;
- (void)mapView:(MKMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 didBecomePitched:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomInDidChange:(_Bool)arg2;
@end