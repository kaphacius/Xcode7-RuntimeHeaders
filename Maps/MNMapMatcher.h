//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNMapMatcher : NSObject
{
    MNLocation *_lastKnownLocation;
    _Bool _localizeRoadNames;
    GEORouteTrackedLocation *_routeTrackedLocation;
    GEORoadMatcher *_roadMatcher;
    _Bool _lastProcessedFeatureWasRamp;
    NSString *_lastProcessedRoadName;
    long long _lastProcessedShieldType;
    NSString *_lastProcessedShieldText;
    int _routeMode;
}

@property(retain, nonatomic) GEORouteTrackedLocation *routeTrackedLocation; // @synthesize routeTrackedLocation=_routeTrackedLocation;
@property(retain, nonatomic) MNLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property(nonatomic) int routeMode; // @synthesize routeMode=_routeMode;
- (void).cxx_destruct;
- (void)setRoutePreloadSession:(id)arg1;
- (void)updateLastKnownSpeed:(double)arg1 timestamp:(id)arg2;
- (id)projectInTunnelFromLocation:(id)arg1 timeInterval:(double)arg2;
- (id)matchLocation:(id)arg1 alongRoute:(id)arg2 onDate:(id)arg3 activeTransportType:(int)arg4;
- (void)setupRoadFeatureFromFeature:(CDStruct_209eac20 *)arg1;
- (void)resetToLocation:(id)arg1 onRoute:(id)arg2 onDate:(id)arg3;
- (void)reset;
- (void)_resetRoadFeatureInfo;
- (void)geoDefaultsDidChange:(id)arg1;
@property(readonly, nonatomic) int transportType;
- (void)dealloc;
- (id)initWithRoutePreloadSession:(id)arg1;
- (id)init;

@end