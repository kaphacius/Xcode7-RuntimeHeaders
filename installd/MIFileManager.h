//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIFileManager : NSObject
{
}

+ (id)defaultManager;
- (unsigned long long)diskUsageForURL:(id)arg1;
- (_Bool)bundleAtURLIsPlaceholder:(id)arg1;
- (_Bool)markBundleAsPlaceholder:(id)arg1 withError:(id *)arg2;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;
- (id)_realPathWhatExistsInPath:(id)arg1;
- (_Bool)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(_Bool)arg3 failureIsFatal:(_Bool)arg4 withError:(id *)arg5;
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;
- (_Bool)itemDoesNotExistAtURL:(id)arg1;
- (_Bool)itemExistsAtURL:(id)arg1;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(_Bool)arg2 error:(id *)arg3;
- (_Bool)standardizeOwnershipAndValidateSymlinksAtURL:(id)arg1 toUID:(unsigned int)arg2 GID:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;

@end