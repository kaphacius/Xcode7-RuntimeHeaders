//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALCLMotionActivity : PBCodable <NSCopying>
{
    double _estExitTime;
    double _startTime;
    double _timestamp;
    int _confidence;
    int _exitState;
    int _mountedConfidence;
    int _mountedState;
    float _tilt;
    int _type;
    _Bool _isStanding;
    _Bool _isVehicleConnected;
    struct {
        unsigned int estExitTime:1;
        unsigned int startTime:1;
        unsigned int confidence:1;
        unsigned int exitState:1;
        unsigned int mountedConfidence:1;
        unsigned int mountedState:1;
        unsigned int tilt:1;
        unsigned int isStanding:1;
        unsigned int isVehicleConnected:1;
    } _has;
}

@property(nonatomic) _Bool isVehicleConnected; // @synthesize isVehicleConnected=_isVehicleConnected;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double estExitTime; // @synthesize estExitTime=_estExitTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float tilt; // @synthesize tilt=_tilt;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsVehicleConnected;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasEstExitTime;
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasTilt;
@property(nonatomic) _Bool hasIsStanding;
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
@property(nonatomic) _Bool hasMountedState;
@property(nonatomic) int mountedState; // @synthesize mountedState=_mountedState;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;

@end