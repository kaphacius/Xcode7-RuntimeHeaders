//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALCMMotionContextMotionState : PBCodable <NSCopying>
{
    unsigned long long _startTime;
    int _confidence;
    int _exitState;
    int _mounted;
    int _mountedConfidence;
    int _turn;
    int _type;
    _Bool _isMoving;
    _Bool _isVehicular;
    struct {
        unsigned int startTime:1;
        unsigned int exitState:1;
        unsigned int mounted:1;
        unsigned int mountedConfidence:1;
        unsigned int turn:1;
        unsigned int isMoving:1;
        unsigned int isVehicular:1;
    } _has;
}

@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool isVehicular; // @synthesize isVehicular=_isVehicular;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
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
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasIsMoving;
@property(nonatomic) _Bool hasIsVehicular;
@property(nonatomic) _Bool hasTurn;
@property(nonatomic) int turn; // @synthesize turn=_turn;
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
@property(nonatomic) _Bool hasMounted;
@property(nonatomic) int mounted; // @synthesize mounted=_mounted;

@end