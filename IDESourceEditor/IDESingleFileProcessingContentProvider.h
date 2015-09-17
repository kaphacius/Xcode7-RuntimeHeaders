//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESingleFileProcessingContentProvider : DVTGeneratedContentProvider
{
    CDUnknownBlockType _completionBlock;
    id _generatedFilesObserver;
    id _pendingBuildNotificationToken;
}

+ (id)generatedContentURLForFileURL:(id)arg1;
+ (BOOL)_canProcessURL:(id)arg1;
+ (id)_blacklistedUTISet;
+ (id)sourceFilePathForGeneratedContentURL:(id)arg1;
+ (int)buildOperationCommand;
+ (id)urlScheme;
+ (void)setSingleFileProcessingSchemeCommand:(id)arg1;
+ (id)singleFileProcessingSchemeCommand;
+ (void)initialize;
- (void).cxx_destruct;
- (void)generateContentForURL:(id)arg1 waitingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_kickOffContentGenerationWithFilePath:(id)arg1 schemeCommand:(id)arg2;
- (void)_observeGeneratedFileNotificationsForFilePath:(id)arg1;
- (void)primitiveInvalidate;

@end