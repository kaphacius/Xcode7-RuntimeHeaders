//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCarbonDocumentPlaceholder : IBDocument
{
}

+ (id)defaultTargetRuntime;
+ (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)strippedFileWrapperForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)writableTypes;
+ (id)readableTypes;
+ (id)plugin;
+ (long long)allSystemsTarget;
- (BOOL)isBundleBasedFileType:(id)arg1;
- (id)hybridPackageType;
- (id)compiledPackage;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)preferredFileType;

@end