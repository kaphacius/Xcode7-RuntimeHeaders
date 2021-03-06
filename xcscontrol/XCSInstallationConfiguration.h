//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSInstallationConfiguration : NSObject <NSCopying>
{
    NSString *_xcodePath;
    NSString *_sharedDataPath;
    NSString *_systemLaunchDaemonPath;
    NSString *_systemConfigurationPath;
    NSString *_hostedRepositoriesSymlinkPath;
    NSString *_homeDirectoryPrefix;
    NSString *_serviceGroupName;
    NSString *_xcsdUsername;
    NSString *_nginxUsername;
    NSString *_couchUsername;
    NSString *_buildServiceUsername;
    XCSDatabase *_database;
    NSString *_buildAgentServer;
}

+ (id)defaultConfiguration;
@property(retain) NSString *buildAgentServer; // @synthesize buildAgentServer=_buildAgentServer;
@property(retain) XCSDatabase *database; // @synthesize database=_database;
@property(retain) NSString *buildServiceUsername; // @synthesize buildServiceUsername=_buildServiceUsername;
@property(retain) NSString *couchUsername; // @synthesize couchUsername=_couchUsername;
@property(retain) NSString *nginxUsername; // @synthesize nginxUsername=_nginxUsername;
@property(retain) NSString *xcsdUsername; // @synthesize xcsdUsername=_xcsdUsername;
@property(retain) NSString *serviceGroupName; // @synthesize serviceGroupName=_serviceGroupName;
@property(retain) NSString *homeDirectoryPrefix; // @synthesize homeDirectoryPrefix=_homeDirectoryPrefix;
@property(retain) NSString *hostedRepositoriesSymlinkPath; // @synthesize hostedRepositoriesSymlinkPath=_hostedRepositoriesSymlinkPath;
@property(retain) NSString *systemConfigurationPath; // @synthesize systemConfigurationPath=_systemConfigurationPath;
@property(retain) NSString *systemLaunchDaemonPath; // @synthesize systemLaunchDaemonPath=_systemLaunchDaemonPath;
@property(retain) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(retain) NSString *xcodePath; // @synthesize xcodePath=_xcodePath;
- (void).cxx_destruct;
@property(readonly) XCSCertificateAuthority *clientCertificateAuthority;
@property(readonly) XCSCertificateAuthority *serverCertificateAuthority;
@property(readonly) XCSKeychain *debugKeychain;
@property(readonly) XCSKeychain *portalKeychain;
@property(readonly) XCSKeychain *repositoriesKeychain;
@property(readonly) XCSKeychain *buildServiceKeychain;
@property(readonly) XCSKeychain *nginxKeychain;
@property(readonly) XCSKeychain *xcsdKeychain;
- (id)keychainWithName:(id)arg1 sharedSecretName:(id)arg2;
@property(readonly) NSArray *allUsers;
@property(readonly) XCSServiceUser *buildServiceUser;
@property(readonly) XCSServiceUser *couchUser;
@property(readonly) XCSServiceUser *nginxUser;
@property(readonly) XCSServiceUser *xcsdUser;
- (id)serviceUserWithUsername:(id)arg1;
@property(readonly) NSArray *serviceLaunchDaemons;
@property(readonly) XCSLaunchDaemon *controlLaunchDaemon;
@property(readonly) XCSLaunchDaemon *nginxLaunchDaemon;
@property(readonly) XCSLaunchDaemon *xcsdLaunchDaemon;
@property(readonly) XCSLaunchDaemon *couchLaunchDaemon;
@property(readonly) XCSLaunchDaemon *redisLaunchDaemon;
- (id)launchDaemonWithLabel:(id)arg1;
@property(readonly) XCSInitializationReceipt *initializeReceipt;
- (id)initializeReceiptPath;
@property(readonly) NSArray *sharedDataPathDirectories;
@property(readonly) NSString *xcsConfigurationPath;
@property(readonly) NSString *redisTemplateConfigurationPath;
@property(readonly) NSString *couchDBConfigurationPath;
@property(readonly) NSString *buildAgentConfigurationPath;
@property(readonly) NSString *databasePath;
@property(readonly) NSString *hostedRepositoriesCGIScriptPath;
@property(readonly) NSString *hostedRepositoriesPath;
@property(readonly) NSString *integrationAssetsPath;
@property(readonly) NSString *integrationsPath;
@property(readonly) NSString *configurationProfilesPath;
@property(readonly) NSString *provisioningProfilesPath;
@property(readonly) NSString *certificatesPath;
@property(readonly) NSString *logsPath;
@property(readonly) NSString *sharedSecretsPath;
@property(readonly) NSString *keychainsPath;
@property(readonly) NSString *xcodeSymlinkPath;
@property(readonly) NSString *designDocumentsPath;
@property(readonly) NSString *loggingConfigDestinationPath;
@property(readonly) NSString *loggingConfigSourcePath;
@property(readonly) XCSInitializationReceipt *xcodeVersions;
- (id)xcodeVersionsPlistPath;
- (id)pathToExecutable:(id)arg1;
@property(readonly) NSString *xcodeDeveloperPath;
@property(readonly) BOOL buildAgentOnly;
- (id)defaultSystemLaunchDaemonPath;
- (id)defaultSharedDataPath;
- (id)defaultXcodePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)buildAgentConfigurationForServer:(id)arg1;
- (id)initWithXcodePath:(id)arg1 sharedDataPath:(id)arg2 systemLaunchDaemonPath:(id)arg3 systemConfigurationPath:(id)arg4 hostedRepositoriesSymlinkPath:(id)arg5 homeDirectoryPrefix:(id)arg6 serviceGroupName:(id)arg7 xcsdUsername:(id)arg8 nginxUsername:(id)arg9 couchUsername:(id)arg10 buildServiceUsername:(id)arg11 database:(id)arg12;

@end