//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKPBStoreID : PBCodable <NSCopying>
{
    NSString *_persistentID;
    _Bool _isLocalStore;
    struct {
        unsigned int isLocalStore:1;
    } _has;
}

@property(nonatomic) _Bool isLocalStore; // @synthesize isLocalStore=_isLocalStore;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
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
@property(nonatomic) _Bool hasIsLocalStore;
@property(readonly, nonatomic) _Bool hasPersistentID;

@end