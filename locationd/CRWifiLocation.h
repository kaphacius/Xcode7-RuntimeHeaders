//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRWifiLocation : PBCodable <NSCopying>
{
    double _latitude;
    double _longitude;
    double _timestamp;
    float _altitude;
    float _horizontalAccuracy;
    int _motionContext;
    float _verticalAccuracy;
    struct {
        unsigned int altitude:1;
        unsigned int motionContext:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

@property(nonatomic) int motionContext; // @synthesize motionContext=_motionContext;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMotionContext;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) _Bool hasVerticalAccuracy;
- (void)dealloc;

@end