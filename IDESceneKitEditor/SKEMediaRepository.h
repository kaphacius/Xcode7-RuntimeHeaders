//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEMediaRepository : IDEContainerContentsMediaRepository
{
    NSMutableDictionary *_resources;
}

+ (id)handleFileReferenceContainerObserverChange:(long long)arg1 forPath:(id)arg2 withDataType:(id)arg3;
+ (id)containerObserverToRepositoryMap;
+ (id)allSupportedMediaFileDataTypes;
- (void).cxx_destruct;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (id)resources;
- (void)primitiveInvalidate;
- (id)initWithContainerObserver:(id)arg1;

@end