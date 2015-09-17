//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SLYahooAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>
{
}

+ (_Bool)supportsAccountType:(id)arg1;
- (void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_migrateLegacyToken:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshTokenForAccount:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getLegacyTokenFromPassword:(id)arg1 username:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)renewalIDsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id *)arg4;
- (void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (_Bool)isPushSupportedForAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end