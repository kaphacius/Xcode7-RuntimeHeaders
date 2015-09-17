//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLVenueBounds : PBCodable <NSCopying>
{
    CLLatLonPolygon *_exterior;
    NSMutableArray *_exteriors;
    NSMutableArray *_ids;
}

@property(retain, nonatomic) NSMutableArray *exteriors; // @synthesize exteriors=_exteriors;
@property(retain, nonatomic) CLLatLonPolygon *exterior; // @synthesize exterior=_exterior;
@property(retain, nonatomic) NSMutableArray *ids; // @synthesize ids=_ids;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)exteriorsAtIndex:(unsigned int)arg1;
- (unsigned int)exteriorsCount;
- (void)addExteriors:(id)arg1;
- (void)clearExteriors;
@property(readonly, nonatomic) _Bool hasExterior;
- (id)idsAtIndex:(unsigned int)arg1;
- (unsigned int)idsCount;
- (void)addIds:(id)arg1;
- (void)clearIds;
- (void)dealloc;

@end