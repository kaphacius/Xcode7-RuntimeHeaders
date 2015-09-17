//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AccountsDataMigrator : DataClassMigrator
{
    NSMutableDictionary *_collatedMigrationData;
    _Bool _foundOldMailAccountsToMigrate;
    _Bool _foundOldDAAccountsToMigrate;
}

- (_Bool)performMigration;
- (void)dealloc;
- (_Bool)executeMigrationSteps;
- (id)dataClassName;
- (id)_accountTypeForMailAccountClass:(id)arg1;
- (id)_accountTypeStringForMailAccountClass:(id)arg1;
- (id)_accountShortTypeStringForMailAccountClass:(id)arg1;
- (void)_saveCollatedMigrationInformation;
- (_Bool)_tetheredDisabledInSources:(struct __CFArray *)arg1;
- (_Bool)_migrateAccountsFrom9B176:(id)arg1;
- (_Bool)_migrateAccountsFrom9A334:(id)arg1;
- (void)_enableProvisioningForDataClass:(id)arg1 toAccount:(id)arg2 ifChildAccountExistsOfType:(id)arg3;
- (_Bool)_account:(id)arg1 hasChildAccountOfType:(id)arg2;
- (_Bool)_migrateAccountsFrom9A182:(id)arg1;
- (_Bool)_migrateAccountsFrom8F191:(id)arg1;
- (_Bool)_migrateAccountsFrom8C136:(id)arg1;
- (_Bool)_migrateAccountsFrom8B117:(id)arg1;
- (_Bool)_migrateAccountsFrom8A293:(id)arg1;
- (_Bool)_calDAVAccount:(id)arg1 matchesUmbrellaAccount:(id)arg2;
- (id)_expectedCalDAVPrincipalURLsForAccount:(id)arg1;
- (id)_expectedCalDAVHostnameForAccount:(id)arg1;
- (id)_expectedCalDAVUsernamesForAccount:(id)arg1;
- (id)_urlSafeUsername:(id)arg1;
- (_Bool)_migrateAccountsFrom7A242:(id)arg1;
- (_Bool)_migrateAccountsFrom7A241:(id)arg1;
- (_Bool)_migrateAccountsFrom7A153:(id)arg1;
- (_Bool)_migrateAccountsFrom7A150:(id)arg1;
- (_Bool)_migrateAccountsFrom7A149:(id)arg1;
- (_Bool)_newAccountsInformationPresent;
- (_Bool)_migrateNewAccountsInfo:(id)arg1;
- (id)_convertExchangeAccountDescription:(id)arg1;
- (id)_convertMailAccountDescription:(id)arg1 type:(id)arg2;
- (_Bool)_migrateDAAccounts:(id)arg1;
- (_Bool)_migrateMailAccounts:(id)arg1;
- (_Bool)_removeOldAccountsInfo;
- (_Bool)_failedToRemoveOldAccountsInfo;
- (id)_absolutePathToOldAccountsInfoRemovalSentinel;
- (_Bool)_saveMigrationInformation;
- (void)_copyAsideAccountsPlist;

@end