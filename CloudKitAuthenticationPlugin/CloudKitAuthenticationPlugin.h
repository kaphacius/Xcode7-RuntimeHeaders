//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CloudKitAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>
{
}

+ (_Bool)supportsAccountType:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)credentialForAccount:(id)arg1 client:(id)arg2;
- (_Bool)_accountAccessIsAllowedForAccount:(id)arg1 client:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end