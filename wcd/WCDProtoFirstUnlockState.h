//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDProtoFirstUnlockState : PBCodable <NSCopying>
{
    unsigned int _version;
    _Bool _firstUnlocked;
    struct {
        unsigned int version:1;
        unsigned int firstUnlocked:1;
    } _has;
}

@property(nonatomic) _Bool firstUnlocked; // @synthesize firstUnlocked=_firstUnlocked;
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
@property(nonatomic) _Bool hasFirstUnlocked;
@property(nonatomic) _Bool hasVersion;

@end