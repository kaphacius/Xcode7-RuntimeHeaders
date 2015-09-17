//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIInstaller : NSObject
{
    NSURL *_path;
    NSDictionary *_options;
    MIClientConnection *_client;
    NSURL *_stagingRoot;
    NSURL *_stagingPath;
    int _packageFormat;
    NSArray *_orderedInstallables;
    NSArray *_outstandingTerminationAssertions;
    NSArray *_lockedIdentifiers;
    unsigned long long _stagingTime;
    unsigned long long _waitingTime;
    unsigned long long _preflightAndPatchTime;
    unsigned long long _verificationTime;
    NSDictionary *_receipt;
}

+ (id)installerForURL:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3;
@property(readonly) NSDictionary *receipt; // @synthesize receipt=_receipt;
- (void).cxx_destruct;
- (_Bool)performInstallationWithError:(id *)arg1;
- (_Bool)_discoverOrderedInstallablesWithError:(id *)arg1;
- (void)_writeLockBundles:(id)arg1;
- (void)_acquireTerminationAssertionsForBundles:(id)arg1;
- (id)_bundlesAtURL:(id)arg1 error:(id *)arg2;
- (id)_manifestPathForBase:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)_extractPackageWithError:(id *)arg1;
- (_Bool)_setupPackageStateWithError:(id *)arg1;
- (void)_fireCallbackWithStatus:(id)arg1;
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2 forClient:(id)arg3;
- (id)init;

@end