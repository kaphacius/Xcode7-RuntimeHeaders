//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIRoundButton : IBHIView
{
    unsigned long iconCreatorCode;
    unsigned long iconTypeCode;
    short iconContentType;
}

+ (id)supportedContentTypes;
- (void)setIconContentType:(short)arg1;
- (short)iconContentType;
- (void)setIconTypeCode:(unsigned long)arg1;
- (unsigned long)iconTypeCode;
- (void)setIconCreatorCode:(unsigned long)arg1;
- (unsigned long)iconCreatorCode;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildRuntimeCodingDescription:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (id)initWithHIDecoder:(id)arg1;

@end