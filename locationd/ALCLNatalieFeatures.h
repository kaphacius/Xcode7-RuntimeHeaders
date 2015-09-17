//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALCLNatalieFeatures : PBCodable <NSCopying>
{
    int _fEpochType;
    float _fIQRX;
    float _fIQRY;
    float _fIQRZ;
    float _fMachineFrequency;
    float _fVectorMagnitude;
    _Bool _fStanding;
}

@property(nonatomic) _Bool fStanding; // @synthesize fStanding=_fStanding;
@property(nonatomic) int fEpochType; // @synthesize fEpochType=_fEpochType;
@property(nonatomic) float fMachineFrequency; // @synthesize fMachineFrequency=_fMachineFrequency;
@property(nonatomic) float fIQRZ; // @synthesize fIQRZ=_fIQRZ;
@property(nonatomic) float fIQRY; // @synthesize fIQRY=_fIQRY;
@property(nonatomic) float fIQRX; // @synthesize fIQRX=_fIQRX;
@property(nonatomic) float fVectorMagnitude; // @synthesize fVectorMagnitude=_fVectorMagnitude;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end