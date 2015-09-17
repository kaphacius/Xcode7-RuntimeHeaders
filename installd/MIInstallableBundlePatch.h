//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIInstallableBundlePatch : MIInstallableBundle
{
    NSString *_existingBundleVersion;
    NSString *_existingBundleShortVersion;
    NSString *_newBundleVersion;
    NSString *_newBundleShortVersion;
    NSURL *_manifestURL;
}

@property(readonly) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
- (void).cxx_destruct;
- (_Bool)performVerificationWithError:(id *)arg1;
- (_Bool)applyPatchWithError:(id *)arg1;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(int)arg3 userOptions:(id)arg4 manifestURL:(id)arg5 existingBundleContainer:(id)arg6 error:(id *)arg7;

@end