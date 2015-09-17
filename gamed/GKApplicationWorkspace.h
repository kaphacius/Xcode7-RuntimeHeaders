//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;
}

+ (id)defaultWorkspace;
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;
- (_Bool)allowProductionForProcess:(int)arg1;
- (id)availableGameIdentifiers;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;
- (_Bool)applicationIsInstalled:(id)arg1;
- (void)openICloudSettings;
- (void)openSettings;
- (id)applicationProxyForBundleID:(id)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;

@end