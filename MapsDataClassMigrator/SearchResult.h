//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchResult : SearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation, MapsSynced>
{
    NSString *_singleLineAddress;
    NSString *_singleLineAddressWithHomeCountry;
    _Bool _hasMergedFormattedAddress;
    NSString *_formattedAddress;
    NSString *_formattedAddressMultiline;
    CDStruct_2c43369c _coordinate;
    _Bool _originatedFromHistory;
    _Bool _originatedFromTrace;
    _Bool _originatedFromBookmarks;
    AddressBookAddress *_address;
    int _appearance;
    unsigned long long _businessID;
    UIImage *_parkingImage;
    GEOComposedWaypoint *_composedWaypoint;
    MSPBookmarkStorage *_bookmarkStorage;
    MSPPinStorage *_pinStorage;
    GEORPPlaceInfo *_placeInfo;
    MKMapItem *_mapItem;
}

+ (id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+ (id)keyPathsForValuesAffectingSingleLineAddress;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingLocationTitle;
+ (id)customSearchResultWithCoordinate:(CDStruct_2c43369c)arg1;
+ (id)currentLocationSearchResult;
@property(retain, nonatomic) GEORPPlaceInfo *placeInfo; // @synthesize placeInfo=_placeInfo;
@property(nonatomic) _Bool originatedFromTrace; // @synthesize originatedFromTrace=_originatedFromTrace;
@property(nonatomic) _Bool originatedFromHistory; // @synthesize originatedFromHistory=_originatedFromHistory;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) MSPPinStorage *pinStorage; // @synthesize pinStorage=_pinStorage;
@property(retain, nonatomic) GEOComposedWaypoint *composedWaypoint; // @synthesize composedWaypoint=_composedWaypoint;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) int appearance; // @synthesize appearance=_appearance;
- (void).cxx_destruct;
- (id)coordinateString;
@property(nonatomic, getter=isReverseGeocoded) _Bool reverseGeocoded;
- (_Bool)isInMapRegion:(id)arg1;
- (_Bool)isInMapRect:(CDStruct_2f492f29)arg1;
@property(readonly, nonatomic) _Bool needsReverseGeocodeCheck;
- (id)singleLineAddressWithHomeCountry;
@property(readonly, nonatomic) NSString *locality;
- (id)singleLineAddress;
@property(readonly, nonatomic) NSString *countryCode;
- (id)addressDictionary;
- (_Bool)_hasStructuredAddress;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *tweetableTitle;
@property(readonly, nonatomic) NSString *disambiguationTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *bookmarkTitle;
- (id)name;
@property(readonly, nonatomic) NSString *infoCardTitle;
@property(readonly, nonatomic) NSString *locationTitle;
@property(readonly, nonatomic) NSString *rawLocationTitle;
- (id)_locationTitleNeedsRaw:(_Bool)arg1;
- (void)becomeDefaultTypeIfCustomType;
- (void)setAddressFromSearchResult:(id)arg1;
- (void)setCoordinate:(CDStruct_2c43369c)arg1 preserveLocationInfo:(_Bool)arg2;
- (void)_syncGEOPlaceWithCoordinate;
- (void)clearLocationInformation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)mapsURLfromMapView:(id)arg1;
- (id)mapsURL;
@property(readonly, nonatomic) unsigned long long businessID;
- (_Bool)_hasUID;
@property(readonly, nonatomic) int localSearchProviderID;
- (id)_formattedAddressMultiline;
- (id)_formattedAddress;
- (void)clearAddressCache;
@property(readonly, nonatomic) NSString *defaultName;
@property(readonly, nonatomic) _Bool isDynamicCurrentLocation;
- (_Bool)updateFromSyncData:(id)arg1;
@property(readonly, nonatomic) NSData *syncData;
- (id)initWithBookmarkRepresentation:(id)arg1;
- (id)bookmarkRepresentation;
- (_Bool)updateFromBookmarkRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithCoordinate:(CDStruct_2c43369c)arg1;
- (id)copyWithType:(unsigned int)arg1;
- (id)copyForBookmarksWithType:(unsigned int)arg1 name:(id)arg2 zoomLevel:(unsigned int)arg3;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_isEqualToSearchResult:(id)arg1 loose:(_Bool)arg2;
- (_Bool)isEqualToSearchResult:(id)arg1;
- (_Bool)isEqualToSearchResult:(id)arg1 forPurpose:(long long)arg2;
- (_Bool)isLocationEqual:(id)arg1 withinDistance:(double)arg2;
- (_Bool)hasOriginatedFromBookmarks;
- (void)markAsOriginatingFromBookmarks;
- (void)_updateTypeAndOriginalTypeIfNeeded;
- (void)setOriginalType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void)updateWithGEOMapItem:(id)arg1;
- (id)initWithComposedWaypoint:(id)arg1 preserveLocationInfo:(_Bool)arg2;
- (id)initWithComposedWaypoint:(id)arg1;
- (id)initWithGEOMapItem:(id)arg1;
- (id)initWithGEOPlace:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 syncIdentifier:(id)arg2;
- (id)initWithSearchResult:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)_commonInit;
- (_Bool)isAddressBookResult;
@property(retain, nonatomic) AddressBookAddress *address;
- (id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2;
- (id)initWithSearchResult:(id)arg1 address:(id)arg2;
- (id)initWithFavoritePlace:(id)arg1;
- (id)unknownContact;
- (void)setThoroughfare:(id)arg1;
- (id)initWithDroppedPin:(id)arg1;
@property(readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage;
- (id)initWithBookmarkStorage:(id)arg1;

// Remaining properties
@property(nonatomic) double position;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *syncIdentifier;

@end