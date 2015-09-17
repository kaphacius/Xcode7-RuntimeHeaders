//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPPlaceSelectionQuestion : RAPQuestion
{
    RAPReportContext *_alternatePlaceContext;
    id <MKMapServiceTicket> _placeTicket;
    id <MKMapServiceTicket> _stationsTicket;
    _Bool _transitOnly;
    NSArray *_transitStations;
    NSNumber *_placeMUID;
    NSError *_loadingError;
    RAPPlaceIssueQuestion *_placeIssueQuestion;
    RAPReportContext *_placePickingMapContext;
    MKMapItem *_otherSelectedStation;
}

+ (int)mapServiceAction;
+ (_Bool)_canDisplay;
+ (id)localizedTitle;
@property(retain, nonatomic) MKMapItem *otherSelectedStation; // @synthesize otherSelectedStation=_otherSelectedStation;
@property(copy, nonatomic) RAPReportContext *placePickingMapContext; // @synthesize placePickingMapContext=_placePickingMapContext;
@property(readonly, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(copy, nonatomic) NSNumber *placeMUID; // @synthesize placeMUID=_placeMUID;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (_Bool)_isRecursivelyComplete;
- (_Bool)isComplete;
@property(readonly, nonatomic) id <RAPPlace> reportedPlace;
@property(readonly, nonatomic) RAPPlaceIssueQuestion *placeIssueQuestion; // @synthesize placeIssueQuestion=_placeIssueQuestion;
- (id)_alternatePlaceContext;
- (id)_alternateMapViewContext;
- (long long)indexOfStation:(id)arg1;
- (id)stationForIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool showsOtherStationRow;
@property(readonly, nonatomic) long long numberOfStationRowsToDisplay;
@property(readonly, nonatomic) NSArray *transitStations;
@property(readonly, nonatomic) _Bool presentMapPicker;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSString *localizedPlacePickingPrompt;
@property(readonly, nonatomic) _Bool requiresSelectingTransitStationsOnly;
@property(readonly, nonatomic) unsigned long long placePickingPreferredMapType;
@property(readonly, nonatomic) CDStruct_90e2a262 placePickingMapRect;
- (id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 onlySelectTransitPOIs:(_Bool)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end