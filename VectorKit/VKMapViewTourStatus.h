//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VKMapViewTourStatus : NSObject
{
    _Bool _isStationary;
    VKFeatureAccessibilityElement *_currentLocation;
    VKFeatureAccessibilityElement *_lastCurrentLocation;
    VKFeatureAccessibilityElement *_futureLocation;
    VKFeatureAccessibilityElement *_lastFutureLocation;
    VKPointFeatureAccessibilityElement *_futurePOI;
    VKPointFeatureAccessibilityElement *_lastFuturePOI;
    double _lastFutureDistance;
    double _lastPOIDistance;
    unsigned long long _futurePOISide;
    unsigned long long _lastFuturePOISide;
    struct CGPoint _currentPoint;
    struct CGPoint _futurePoint;
}

@property(nonatomic) _Bool isStationary; // @synthesize isStationary=_isStationary;
@property(nonatomic) unsigned long long lastFuturePOISide; // @synthesize lastFuturePOISide=_lastFuturePOISide;
@property(nonatomic) unsigned long long futurePOISide; // @synthesize futurePOISide=_futurePOISide;
@property(nonatomic) double lastPOIDistance; // @synthesize lastPOIDistance=_lastPOIDistance;
@property(nonatomic) double lastFutureDistance; // @synthesize lastFutureDistance=_lastFutureDistance;
@property(nonatomic) struct CGPoint futurePoint; // @synthesize futurePoint=_futurePoint;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(retain, nonatomic) VKPointFeatureAccessibilityElement *lastFuturePOI; // @synthesize lastFuturePOI=_lastFuturePOI;
@property(retain, nonatomic) VKPointFeatureAccessibilityElement *futurePOI; // @synthesize futurePOI=_futurePOI;
@property(retain, nonatomic) VKFeatureAccessibilityElement *lastFutureLocation; // @synthesize lastFutureLocation=_lastFutureLocation;
@property(retain, nonatomic) VKFeatureAccessibilityElement *futureLocation; // @synthesize futureLocation=_futureLocation;
@property(retain, nonatomic) VKFeatureAccessibilityElement *lastCurrentLocation; // @synthesize lastCurrentLocation=_lastCurrentLocation;
@property(retain, nonatomic) VKFeatureAccessibilityElement *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void)updateTourStatusWithCurrentLocation:(id)arg1 currentPoint:(struct CGPoint)arg2 futureLocation:(id)arg3 futurePoint:(struct CGPoint)arg4 tourPOI:(id)arg5 tourPOISide:(unsigned long long)arg6 isStationary:(_Bool)arg7;
- (id)_stringForSide:(unsigned long long)arg1;
- (id)shortTourStatusAnnouncement;
- (id)longTourStatusAnnouncement;
- (void)dealloc;
- (id)_tourStatusAnnouncementWithLength:(unsigned long long)arg1;

@end