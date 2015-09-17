//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDUnlockSetupSessionCreated : PBCodable <NSCopying>
{
    unsigned int _errorCode;
    NSData *_longTermKey;
    unsigned int _sessionID;
    NSData *_token;
    unsigned int _version;
    CDStruct_e173124d _has;
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end