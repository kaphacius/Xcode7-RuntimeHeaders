//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitAppsManager : NSObject
{
    TransitAppRanker *_transitAppRanker;
}

+ (id)defaultManager;
@property(retain, nonatomic) TransitAppRanker *transitAppRanker; // @synthesize transitAppRanker=_transitAppRanker;
- (void).cxx_destruct;
- (void)loadRelevantTransitAppsForSource:(CDStruct_c3b9c2ee)arg1 destination:(CDStruct_c3b9c2ee)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCoverageFiles;
- (void)_updateCoverageFileForAppProxy:(id)arg1 libraryItem:(id)arg2;
- (id)_appIdsStringWithApplicationProxies:(id)arg1;
- (id)_installedApps;
- (void)recordAppLaunch:(id)arg1;

@end