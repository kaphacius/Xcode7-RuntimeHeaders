//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKFairPlaySAPSession : NSObject
{
    _Bool _complete;
    NSString *_SAPVersion;
}

@property(retain) NSString *SAPVersion; // @synthesize SAPVersion=_SAPVersion;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (id)signatureStringForData:(id)arg1 error:(id *)arg2;
- (id)signatureForData:(id)arg1 error:(id *)arg2;
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end