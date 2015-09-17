//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ASAssetRepository : NSObject
{
    NSURL *_repositoryURL;
    NSURL *_supplementalAssetMetadataDirectoryURL;
    id <ASAssetMetadataUpdatePolicy> _updatePolicy;
    double _automaticMetadataUpdateIntervalOverride;
    NSDictionary *_assetTypeDescriptors;
    NSCache *_availableAssetsMetadataCache;
    NSCache *_installedAssetsMetadataCache;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _assetUpdateAvailableHandler;
}

@property(copy, nonatomic) CDUnknownBlockType assetUpdateAvailableHandler; // @synthesize assetUpdateAvailableHandler=_assetUpdateAvailableHandler;
- (_Bool)importAssetTypeDescriptors:(id)arg1;
- (id)_assetTypeDescriptorsURL;
- (_Bool)updateAllStaleMetadata:(id *)arg1;
- (void)scanCachedMetadataForUpdates;
- (void)_updateAllStaleMetadata:(CDUnknownBlockType)arg1;
- (double)timeUntilNextAutomaticMetadataUpdate;
- (double)_timeUntilNextAutomaticMetadataUpdate;
- (double)_timeUntilNextAutomaticMetadataUpdateForAssetType:(id)arg1 withMetadata:(id)arg2;
- (void)_enumerateCachedMetadataUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;
- (_Bool)_writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;
- (_Bool)validateAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;
- (_Bool)removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;
- (_Bool)_removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;
- (id)attributeForKey:(id)arg1 onAssetType:(id)arg2 error:(id *)arg3;
- (id)attributesForKeys:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;
- (id)attributeForKey:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;
- (id)_assetMatchingAttributes:(id)arg1 ofAssetType:(id)arg2 atIndex:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;
- (_Bool)setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;
- (_Bool)_setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAsset:(id)arg3 ofAssetType:(id)arg4 error:(id *)arg5;
- (id)installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;
- (id)_installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;
- (_Bool)performDataMigrationAndReturnError:(id *)arg1;
- (_Bool)enumerateInstalledAssetsOfAssetType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;
- (id)_assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;
- (id)_metadataForAvailableAssetsOfAssetType:(id)arg1;
- (void)resetCaches;
- (void)_discardCachedAssetMetadata;
- (void)_cacheAssetMetadata:(id)arg1 forAssetType:(id)arg2;
- (id)_cachedAssetMetadataForAssetType:(id)arg1;
- (_Bool)_setInstalledAssetAttributes:(id)arg1 forAssetType:(id)arg2 error:(id *)arg3;
- (_Bool)_setInstalledAssetsMetadataValue:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;
- (id)_installedAssetMetadataForAssetType:(id)arg1;
- (id)_supplementalAssetMetadataForAssetType:(id)arg1;
- (void)updateMetadataForAssetType:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateMetadataForAssetType:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_downloadMetadataForAssetType:(id)arg1 fromURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_lastModifiedDateIsValid:(id)arg1;
- (void)_scanAssets:(id)arg1 forUpdatesForAssetType:(id)arg2;
- (void)_findUpdatesForAssets:(id)arg1 withAvailableAssets:(id)arg2 usingDescriptor:(id)arg3;
- (_Bool)_assetTypeDescriptorSupportsAutomaticAssetUpdates:(id)arg1;
- (id)_lastDownloadedDateForAssetMetadataType:(id)arg1 fromURL:(id)arg2;
- (void)_downloadResourceAtURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)_verifyAssetMetadata:(id)arg1;
- (id)_URLForInstalledAssetMetadataForAssetType:(id)arg1;
- (id)_URLForCachedAssetMetadataForAssetType:(id)arg1;
- (id)_remoteURLForAssetType:(id)arg1 relativeTo:(id)arg2 error:(id *)arg3;
- (id)_relativePathToMetadataForAssetType:(id)arg1 extension:(id)arg2;
- (id)directoryURLForAssetsOfAssetType:(id)arg1;
@property(readonly, nonatomic) NSArray *assetTypeDescriptors;
- (id)_assetTypeDescriptors;
- (id)_assetTypeDescriptorForAssetType:(id)arg1;
@property(nonatomic) double automaticMetadataUpdateIntervalOverride;
@property(retain, nonatomic) id <ASAssetMetadataUpdatePolicy> updatePolicy;
@property(copy, nonatomic) NSURL *supplementalAssetMetadataDirectoryURL;
@property(copy, nonatomic) NSURL *repositoryURL;
- (void)dealloc;
- (id)initWithRepositoryURL:(id)arg1;

@end