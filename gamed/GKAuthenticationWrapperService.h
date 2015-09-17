//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate>
{
    GKService *_service;
    NSObject<OS_dispatch_queue> *_authQueue;
    NSDictionary *_signatureLookup;
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;
+ (id)serviceForClient:(id)arg1 player:(id)arg2;
+ (id)authenticationWrapperForService:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)authenticationCancelled;
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 usingFastPath:(_Bool)arg3 displayAuthUI:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 displayAuthUI:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)generateIdentityVerificationSignatureWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (void)_buildSignatureLookupForProtocol:(id)arg1;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end