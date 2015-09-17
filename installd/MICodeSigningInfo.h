//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MICodeSigningInfo : NSObject
{
    _Bool _validatedByProfile;
    _Bool _validatedByUPP;
    _Bool _isAdHocSigned;
    NSString *_signerIdentity;
    NSString *_codeInfoIdentifier;
    NSDictionary *_entitlements;
}

@property(readonly) _Bool isAdHocSigned; // @synthesize isAdHocSigned=_isAdHocSigned;
@property(readonly) _Bool validatedByUPP; // @synthesize validatedByUPP=_validatedByUPP;
@property(readonly) _Bool validatedByProfile; // @synthesize validatedByProfile=_validatedByProfile;
@property(readonly) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, copy) NSString *codeInfoIdentifier; // @synthesize codeInfoIdentifier=_codeInfoIdentifier;
@property(readonly, copy) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
- (void).cxx_destruct;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSignerIdentity:(id)arg1 codeInfoIdentifier:(id)arg2 entitlements:(id)arg3 validatedByProfile:(_Bool)arg4 validatedByUPP:(_Bool)arg5 isAdHocSigned:(_Bool)arg6;

@end