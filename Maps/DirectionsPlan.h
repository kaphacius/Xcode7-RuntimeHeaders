//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsPlan : PBCodable <NSCopying>
{
    double _arrivalTime;
    unsigned long long _currentRouteIndex;
    unsigned long long _currentRouteStep;
    double _departureTime;
    NSString *_destinationString;
    int _displayMethod;
    unsigned int _earlierPagesLoaded;
    unsigned int _laterPagesLoaded;
    NSString *_originString;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    unsigned int _routesPerEarlierPage;
    unsigned int _routesPerInitialPage;
    unsigned int _routesPerLaterPage;
    DirectionsPlanTransitPreferences *_transitPreferences;
    int _transitPrioritization;
    _Bool _isPlayingTrace;
    struct {
        unsigned int arrivalTime:1;
        unsigned int currentRouteIndex:1;
        unsigned int currentRouteStep:1;
        unsigned int departureTime:1;
        unsigned int displayMethod:1;
        unsigned int earlierPagesLoaded:1;
        unsigned int laterPagesLoaded:1;
        unsigned int routesPerEarlierPage:1;
        unsigned int routesPerInitialPage:1;
        unsigned int routesPerLaterPage:1;
        unsigned int transitPrioritization:1;
        unsigned int isPlayingTrace:1;
    } _has;
}

@property(nonatomic) _Bool isPlayingTrace; // @synthesize isPlayingTrace=_isPlayingTrace;
@property(nonatomic) unsigned int routesPerLaterPage; // @synthesize routesPerLaterPage=_routesPerLaterPage;
@property(nonatomic) unsigned int routesPerEarlierPage; // @synthesize routesPerEarlierPage=_routesPerEarlierPage;
@property(nonatomic) unsigned int laterPagesLoaded; // @synthesize laterPagesLoaded=_laterPagesLoaded;
@property(nonatomic) unsigned int earlierPagesLoaded; // @synthesize earlierPagesLoaded=_earlierPagesLoaded;
@property(nonatomic) unsigned int routesPerInitialPage; // @synthesize routesPerInitialPage=_routesPerInitialPage;
@property(retain, nonatomic) DirectionsPlanTransitPreferences *transitPreferences; // @synthesize transitPreferences=_transitPreferences;
@property(nonatomic) unsigned long long currentRouteStep; // @synthesize currentRouteStep=_currentRouteStep;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
@property(nonatomic) double arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(nonatomic) double departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) NSString *originString; // @synthesize originString=_originString;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsPlayingTrace;
@property(nonatomic) _Bool hasTransitPrioritization;
@property(nonatomic) int transitPrioritization; // @synthesize transitPrioritization=_transitPrioritization;
@property(nonatomic) _Bool hasRoutesPerLaterPage;
@property(nonatomic) _Bool hasRoutesPerEarlierPage;
@property(nonatomic) _Bool hasLaterPagesLoaded;
@property(nonatomic) _Bool hasEarlierPagesLoaded;
@property(nonatomic) _Bool hasRoutesPerInitialPage;
@property(readonly, nonatomic) _Bool hasTransitPreferences;
@property(nonatomic) _Bool hasDisplayMethod;
@property(nonatomic) int displayMethod; // @synthesize displayMethod=_displayMethod;
@property(nonatomic) _Bool hasCurrentRouteStep;
@property(nonatomic) _Bool hasCurrentRouteIndex;
@property(nonatomic) _Bool hasArrivalTime;
@property(nonatomic) _Bool hasDepartureTime;
@property(readonly, nonatomic) _Bool hasDestinationString;
@property(readonly, nonatomic) _Bool hasOriginString;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end