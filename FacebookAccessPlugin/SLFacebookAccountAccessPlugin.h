//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SLFacebookAccountAccessPlugin : NSObject <ACDAccountAccessPlugin>
{
    NSSet *_permissionCategories;
    NSSet *_basicReadPermissions;
    NSSet *_extendedReadPermissions;
    NSSet *_writePermissions;
    NSSet *_managePermissions;
}

+ (_Bool)supportsAccountTypeWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_shouldIgnoreAccessRequest;
- (id)_csvStringFromSet:(id)arg1;
- (id)_accountOfType:(id)arg1 withStore:(id)arg2;
- (void)_showUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_showAlertWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_userFriendlyAudienceString:(id)arg1;
- (id)_objectNameForManagePermission:(id)arg1;
- (id)_objectNameForReadPermission:(id)arg1;
- (id)_commaSeparatedListWithFormat:(id)arg1 forObjectNames:(id)arg2;
- (id)_friendObjectsRequestedByPermissions:(id)arg1;
- (id)_userObjectsRequestedByPermissions:(id)arg1;
- (id)_predicateForPermissions:(id)arg1 ofCategory:(struct NSString *)arg2 audience:(id)arg3;
- (id)_fetchDescriptionForUnknownPermissions:(id)arg1 audience:(id)arg2 account:(id)arg3;
- (id)_appendDescriptionOfUnknownPermissions:(id)arg1 toUserMessage:(id)arg2 forAppWithName:(id)arg3 audience:(id)arg4 account:(id)arg5;
- (id)_constructUserMessageForPermissions:(id)arg1 audience:(id)arg2 appName:(id)arg3 account:(id)arg4;
- (id)_userProfileReadPermissions;
- (id)_allReadPermissions;
- (id)_managePermissions;
- (id)_writePermissions;
- (id)_extendedReadPermissions;
- (id)_basicReadPermissions;
- (id)_allPermissionsInCategory:(struct NSString *)arg1;
- (id)_persistentDictionaryForOptions:(id)arg1;
- (_Bool)_validateOptionsDictionary:(id)arg1;
- (id)_appIDFromOptionsDictionary:(id)arg1;
- (id)_permissionsFromOptionsDictionary:(id)arg1;
- (id)_audienceFromOptionsDictionary:(id)arg1;
- (void)_saveCredentialForClient:(id)arg1 onAccount:(id)arg2 usingAccessToken:(id)arg3;
- (id)_serverAudienceStringForAudience:(id)arg1;
- (void)_getServerAuthorizationForClient:(id)arg1 withAppID:(id)arg2 permissions:(id)arg3 audience:(id)arg4 account:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_promptUserToApproveRequestForPermissions:(id)arg1 withAudience:(id)arg2 fromClient:(id)arg3 account:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleUserResponse:(_Bool)arg1 toRequestForClient:(id)arg2 withAppID:(id)arg3 persistentOptions:(id)arg4 onAccount:(id)arg5 ofType:(id)arg6 existingPermissions:(id)arg7 newPermissions:(id)arg8 audience:(id)arg9 isFirstTimeRequest:(_Bool)arg10 shouldSkipServer:(_Bool)arg11 store:(id)arg12 completion:(CDUnknownBlockType)arg13;
- (void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end