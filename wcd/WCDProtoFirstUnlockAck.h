//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDProtoFirstUnlockAck : PBCodable <NSCopying>
{
    unsigned int _version;
    _Bool _acknowledgedState;
    struct {
        unsigned int version:1;
        unsigned int acknowledgedState:1;
    } _has;
}

@property(nonatomic) _Bool acknowledgedState; // @synthesize acknowledgedState=_acknowledgedState;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAcknowledgedState;
@property(nonatomic) _Bool hasVersion;

@end