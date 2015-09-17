//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundDocument : IDESourceCodeDocument <IDEToyboxDelegate, IDESwiftMigrator>
{
    NSMutableArray *_cachedSourceCodeSections;
    NSMutableArray *_consoleItems;
    unsigned long long _playgroundResultsGeneration;
    DVTNotificationToken *_sectionCharactersDidChangeNotificationObserver;
    DVTNotificationToken *_contextPrepareForPageMigrationNotificationObserver;
    DVTObservingToken *_playgroundContextDisplayModeObservingToken;
    DVTObservingToken *_playgroundContextPagesObservingToken;
    DVTObservingToken *_playgroundContextTimelineScrubberEnabledToken;
    NSMapTable *_registeredEditorsToPreparationParametersWrappers;
    BOOL _shouldClearCachedPlaygroundDataOnEdit;
    BOOL _isReadingFromURL;
    BOOL _isWritingToURL;
    BOOL _preserveSerializedPlaygroundDataOnSave;
    BOOL _isResettingWholeDocument;
    BOOL _executionIsInProgress;
    BOOL _isReplayingSerializedResults;
    BOOL _playgroundExpressionIsComplete;
    BOOL _lastExpressionDidComplete;
    BOOL _isCommittingStateToDictionary;
    BOOL _isRevertingStateWithDictionary;
    BOOL _resourcesUpdated;
    NSArray *_playgroundSections;
    NSArray *_sourceCodePlaygroundSectionCharacterRanges;
    NSArray *_executionIssues;
    IDEToybox *_toybox;
    id <IDEPlaygroundAppBundle> _playgroundAppBundle;
    long long _auxSourcesCompiliationProgress;
    IDEPlaygroundSharedContext *_playgroundContext;
    NSString *_originalSwiftContents;
    NSError *_nonFatalReadError;
    NSURL *_originalContentURLDuringSaving;
    DVTFilePath *_frameworkSearchPath;
    NSArray *_auxiliarySourceFrameworks;
    DVTObservingToken *_pageContextObservingToken;
    DVTNotificationToken *_resourcesStalenessNotificationToken;
    DVTNotificationToken *_auxiliarySourceStalenessNotificationToken;
    DVTFuture *_currentCompilerFuture;
    NSUUID *_currentUUID;
}

+ (id)_informativeTextFieldForAlert:(id)arg1;
+ (id)_informativeTextForQuarantineProperties:(id)arg1;
+ (BOOL)shouldOpenDocumentForURL:(id)arg1;
+ (id)keyPathsForValuesAffectingBuildSettings;
+ (id)keyPathsForValuesAffectingPlaygroundPageContext;
+ (id)directoryForPlaygroundAppConstructionWithAppUniquingString:(id *)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingAllowsReset;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSectionCharacterRanges;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSections;
+ (id)playgroundDocumentContainingFilePath:(id)arg1;
+ (id)_quarantineDocumentsOpenAttempts;
+ (void)initialize;
+ (id)availablePlaygroundSectionClasses;
+ (id)keyPathsForValuesAffectingTimelineScrubberEnabled;
+ (id)keyPathsForValuesAffectingRenderDocumentationForInspector;
+ (id)keyPathsForValuesAffectingShowRenderDocumentationChoice;
+ (id)keyPathsForValuesAffectingSDK;
@property(readonly, copy) NSUUID *currentUUID; // @synthesize currentUUID=_currentUUID;
@property __weak DVTFuture *currentCompilerFuture; // @synthesize currentCompilerFuture=_currentCompilerFuture;
@property(retain) DVTNotificationToken *auxiliarySourceStalenessNotificationToken; // @synthesize auxiliarySourceStalenessNotificationToken=_auxiliarySourceStalenessNotificationToken;
@property(retain) DVTNotificationToken *resourcesStalenessNotificationToken; // @synthesize resourcesStalenessNotificationToken=_resourcesStalenessNotificationToken;
@property(retain) DVTObservingToken *pageContextObservingToken; // @synthesize pageContextObservingToken=_pageContextObservingToken;
@property BOOL resourcesUpdated; // @synthesize resourcesUpdated=_resourcesUpdated;
@property(copy, nonatomic) NSArray *auxiliarySourceFrameworks; // @synthesize auxiliarySourceFrameworks=_auxiliarySourceFrameworks;
@property(retain, nonatomic) DVTFilePath *frameworkSearchPath; // @synthesize frameworkSearchPath=_frameworkSearchPath;
@property(copy, nonatomic) NSURL *originalContentURLDuringSaving; // @synthesize originalContentURLDuringSaving=_originalContentURLDuringSaving;
@property BOOL isRevertingStateWithDictionary; // @synthesize isRevertingStateWithDictionary=_isRevertingStateWithDictionary;
@property BOOL isCommittingStateToDictionary; // @synthesize isCommittingStateToDictionary=_isCommittingStateToDictionary;
@property(retain) NSError *nonFatalReadError; // @synthesize nonFatalReadError=_nonFatalReadError;
@property(copy) NSString *originalSwiftContents; // @synthesize originalSwiftContents=_originalSwiftContents;
@property(readonly) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
@property long long auxSourcesCompiliationProgress; // @synthesize auxSourcesCompiliationProgress=_auxSourcesCompiliationProgress;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property BOOL playgroundExpressionIsComplete; // @synthesize playgroundExpressionIsComplete=_playgroundExpressionIsComplete;
@property BOOL isReplayingSerializedResults; // @synthesize isReplayingSerializedResults=_isReplayingSerializedResults;
@property BOOL executionIsInProgress; // @synthesize executionIsInProgress=_executionIsInProgress;
@property(retain) id <IDEPlaygroundAppBundle> playgroundAppBundle; // @synthesize playgroundAppBundle=_playgroundAppBundle;
@property(readonly) IDEToybox *toybox; // @synthesize toybox=_toybox;
@property(copy, nonatomic) NSArray *executionIssues; // @synthesize executionIssues=_executionIssues;
@property(copy, nonatomic) NSArray *sourceCodePlaygroundSectionCharacterRanges; // @synthesize sourceCodePlaygroundSectionCharacterRanges=_sourceCodePlaygroundSectionCharacterRanges;
@property(copy, nonatomic) NSArray *playgroundSections; // @synthesize playgroundSections=_playgroundSections;
- (void).cxx_destruct;
- (void)_reportMessageTraceForTimelineScrubberEnabledForReportID:(char *)arg1;
- (void)_reportMessageTraceForTimelineScrubberOnToggle;
- (void)_reportMessageTraceForTimelineScrubberOnLoad;
- (BOOL)dvt_shouldShowDocumentDirtyState;
- (id)willPresentError:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
- (id)indexCompatibleLocationFromLocation:(id)arg1;
- (id)editorCompatibleLocationFromLocation:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)editorDocumentWillClose;
- (id)fileWrapperForToybox;
- (id)fileWrappersForPlaygroundContents;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (id)contentPathsToPreserveOnSave;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (id)originalSingleFileContentsFromFileWrapper:(id)arg1 withCurrentSingleFileContents:(id)arg2 error:(id *)arg3;
- (id)singleFileContentsFromFileWrapper:(id)arg1 error:(id *)arg2;
- (id)playgroundSectionsFromPlaygroundContents:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)playgroundSectionsFromFileWrapper:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)validatePlaygroundFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)registerPlaygroundContextObservers;
- (void)toyboxArchivableStateDidChange;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (void)_clearSerializedPlaygroundResultsIfNeeded;
- (BOOL)_shouldSavePlaygroundResultsToWrapperAndQuit;
- (BOOL)_shouldSavePlaygroundResultsToWrapper;
- (void)migrateWithMigrationDir:(id)arg1 buildQueueSet:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)migratePageContext:(id)arg1 withMigrationDir:(id)arg2 buildQueueSet:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)sourceLanguageServiceContext;
@property(readonly) NSDictionary *buildSettings;
- (id)buildSettingsWithMigrationDir:(id)arg1 pageContext:(id)arg2;
- (void)fillArguments:(id)arg1 outputFileMap:(id)arg2 inMigrationDir:(id)arg3 forContext:(id)arg4;
- (void)cancelExecutionInWorkspace:(id)arg1;
- (BOOL)executeInWorkspace:(id)arg1 fromEditor:(id)arg2 replayFromSerializedData:(BOOL)arg3 error:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_shouldHandlePlaygroundEventFromGeneration:(unsigned long long)arg1;
- (void)unregisterEditor:(id)arg1;
- (void)_startCompilingAuxiliarySources;
- (void)_symlinkResources;
@property(readonly, nonatomic) IDEPlaygroundPageSharedContext *playgroundPageContext; // @dynamic playgroundPageContext;
- (void)setPlaygroundContext:(id)arg1;
- (void)registerEditor:(id)arg1;
- (id)_preparationParametersForWorkspace:(id)arg1 outAppBundle:(id *)arg2 error:(id *)arg3;
- (BOOL)regeneratePlaygroundAppBundleForDevice:(id)arg1 error:(id *)arg2;
- (id)sourceCodePreambleForExecution;
- (id)sourceCodeForExecution;
- (void)executionGenerationDidEnd;
- (void)playgroundExpressionCompleted;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGenerationIsReplayingSerializedResults:(BOOL)arg1;
- (void)addPlaygroundLoggerResult:(id)arg1;
- (void)removeAllPlaygroundResults;
- (void)resetAllPlaygroundPages;
- (void)resetPlaygroundImpl;
- (void)resetPlayground;
@property(readonly) BOOL allowsReset;
@property(readonly, copy, nonatomic) NSArray *sourceCodePlaygroundSections;
- (void)_displayUpgradeError:(id)arg1;
- (void)upgradeFormat:(id)arg1;
- (void)_managedPlaygroundContainerAccessInBlock:(CDUnknownBlockType)arg1;
- (id)contentsURL;
- (BOOL)documentSupportsAuxiliarySources;
- (void)toggleDisplayMode:(id)arg1;
- (unsigned long long)lineEndings;
- (void)_closeWindowHostingURL:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)init;
- (void)setTimelineScrubberEnabled:(BOOL)arg1;
- (BOOL)timelineScrubberEnabled;
- (BOOL)renderDocumentationForInspector;
- (void)setRenderDocumentationForInspector:(BOOL)arg1;
- (BOOL)showRenderDocumentationChoice;
- (void)setSdk:(id)arg1;
- (id)sdk;

// Remaining properties
@property(readonly) NSArray *consoleItems; // @dynamic consoleItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableConsoleItems; // @dynamic mutableConsoleItems;
@property(readonly) Class superclass;

@end