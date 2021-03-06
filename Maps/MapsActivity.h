//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MapsActivity : PBCodable <NSCopying>
{
    unsigned long long _selectedPlaceIndex;
    int _collectionsMode;
    DirectionsPlan *_directionsPlan;
    GEOURLOptions *_displayOptions;
    MSPDroppedPin *_droppedPin;
    GEOMapItemStorage *_presentedMapItem;
    GEOSearchCategoryStorage *_searchCategoryStorage;
    NSMutableArray *_searchPlaces;
    NSString *_searchString;
    _Bool _isDroppedPinPresented;
    _Bool _isDroppedPinSelected;
    _Bool _isPresentingSelectedPlace;
    struct {
        unsigned int selectedPlaceIndex:1;
        unsigned int collectionsMode:1;
        unsigned int isDroppedPinPresented:1;
        unsigned int isDroppedPinSelected:1;
        unsigned int isPresentingSelectedPlace:1;
    } _has;
}

@property(retain, nonatomic) GEOSearchCategoryStorage *searchCategoryStorage; // @synthesize searchCategoryStorage=_searchCategoryStorage;
@property(retain, nonatomic) GEOMapItemStorage *presentedMapItem; // @synthesize presentedMapItem=_presentedMapItem;
@property(nonatomic) _Bool isDroppedPinPresented; // @synthesize isDroppedPinPresented=_isDroppedPinPresented;
@property(nonatomic) _Bool isDroppedPinSelected; // @synthesize isDroppedPinSelected=_isDroppedPinSelected;
@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(retain, nonatomic) DirectionsPlan *directionsPlan; // @synthesize directionsPlan=_directionsPlan;
@property(nonatomic) _Bool isPresentingSelectedPlace; // @synthesize isPresentingSelectedPlace=_isPresentingSelectedPlace;
@property(nonatomic) unsigned long long selectedPlaceIndex; // @synthesize selectedPlaceIndex=_selectedPlaceIndex;
@property(retain, nonatomic) NSMutableArray *searchPlaces; // @synthesize searchPlaces=_searchPlaces;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) GEOURLOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
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
@property(readonly, nonatomic) _Bool hasSearchCategoryStorage;
@property(readonly, nonatomic) _Bool hasPresentedMapItem;
@property(nonatomic) _Bool hasIsDroppedPinPresented;
@property(nonatomic) _Bool hasIsDroppedPinSelected;
@property(readonly, nonatomic) _Bool hasDroppedPin;
@property(readonly, nonatomic) _Bool hasDirectionsPlan;
@property(nonatomic) _Bool hasIsPresentingSelectedPlace;
@property(nonatomic) _Bool hasSelectedPlaceIndex;
- (id)searchPlacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchPlacesCount;
- (void)addSearchPlaces:(id)arg1;
- (void)clearSearchPlaces;
@property(readonly, nonatomic) _Bool hasSearchString;
@property(nonatomic) _Bool hasCollectionsMode;
@property(nonatomic) int collectionsMode; // @synthesize collectionsMode=_collectionsMode;
@property(readonly, nonatomic) _Bool hasDisplayOptions;
- (id)bzip2DataByIterativelyReducingIfNeeded;
- (id)bzip2CompressedData;
- (id)initWithBzip2CompressedData:(id)arg1;
- (id)name;
- (_Bool)shouldIndex;

@end