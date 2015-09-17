//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DiffController : NSObject <NSApplicationDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    DiffControllerInterface *diffControllerInterface;
    NSMutableArray *listOfDiffers;
    id currentDiffer;
    BOOL firstDifferAdded;
    id findPanel;
    id findTextString;
    id findTextCase;
    id findTextMsg;
    id findNextButton;
    id findPreviousButton;
    id rangePanel;
    id rangeText;
    id rangeLineCharacter;
    id editFileNameA;
    id editFileNameB;
    id editFileNameX;
    id editFileNameM;
    id leftIcon;
    id rightIcon;
    id ancestorIcon;
    id mergeIcon;
    id compareButton;
    id leftButton;
    id ancestorButton;
    id mergeAncestorView;
    BOOL mergeAncestorViewInstalled;
    id chooseFolders;
    id openPanelEnlargeComment;
    id fileComparePreferences;
    NSTableView *filters;
    id fileNamesMatrix;
    id fileDatesMatrix;
    id fileOwnersMatrix;
    id fileBaseName;
    id diffFlags;
    id directoryOptions;
    id filesToIgnore;
    id preferredColor;
    id showWordHighlighting;
    BOOL followSymlinks;
    BOOL includeIdenticalFiles;
    BOOL includeAddedFiles;
    BOOL includeDeletedFiles;
    BOOL includeModifiedFiles;
    BOOL includeModifiedFilesLeft;
    BOOL includeModifiedFilesRite;
    BOOL includeModifiedFilesBoth;
    BOOL numberDiffsInMarkView;
    BOOL arrowDiffsInMarkView;
    BOOL showTickMarksInScroller;
    BOOL wrapText;
    id menuItem_save;
    id menuItem_saveAs;
    id menuItem_redoCompare;
    id menuItem_close;
    id menuItem_chooseRight;
    id menuItem_chooseLeft;
    id menuItem_saveMerge;
    id menuItem_saveMergeAs;
    NSView *mergeDirectoryAncView;
    id copyChangesMenu;
    id compressWhiteSpaceCheckBox;
    id ignoreCaseCheckBox;
    id fontString;
    NSMutableArray *filesToDelete;
    NSLock *filesToDeleteLock;
    BOOL launchingDiff;
    id preferencesPanel;
}

+ (id)expandProgramAndArgs:(id)arg1 withFileName:(id)arg2;
+ (BOOL)isSymlink:(id)arg1;
+ (BOOL)isFile:(id)arg1;
+ (BOOL)isDirectory:(id)arg1;
+ (void)initialize;
+ (void)updateFilters;
+ (id)expandString:(id)arg1 variable:(id)arg2 expansion:(id)arg3;
+ (id)defaultFilters;
- (void)doFindPreviousButton:(id)arg1;
- (void)doFindNextButton:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (void)showInfoPanel:(id)arg1;
- (void)tableView:(id)arg1 didGetKeyEvent:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setOpenPanelEnlargeComment:(id)arg1;
- (id)mergeDirectoryAncView;
- (void)setMergeDirectoryAncView:(id)arg1;
- (void)print:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (BOOL)requireExistingFileFor:(id)arg1;
- (BOOL)showDiffMarksPreference;
- (BOOL)arrowDiffsPreference;
- (BOOL)numberDiffsPreference;
- (BOOL)followSymlinksPreference;
- (id)filesToIgnorePreference;
- (void)updatePreferences:(id)arg1;
- (void)showFontPanel:(id)arg1;
- (void)changeFont:(id)arg1;
- (id)defaultFont;
- (void)updatePreferencesNoSave:(id)arg1;
- (BOOL)ignoreCase;
- (BOOL)ignoreWhiteSpace;
- (BOOL)showMiniDiffs;
- (id)preferredColorForHighlighting;
- (void)enableLeftMergeDirection:(BOOL)arg1;
- (void)enableRightMergeDirection:(BOOL)arg1;
- (void)resignMeAsCurrent:(id)arg1;
- (void)setMeAsCurrent:(id)arg1;
- (void)enterFindSelection:(id)arg1;
- (id)findText:(BOOL)arg1;
- (void)showFindPanel:(id)arg1;
- (void)rangeSelect:(id)arg1;
- (void)showRangePanel:(id)arg1;
- (id)openFile:(id)arg1;
- (void)doDiffForFilePair:(id)arg1;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)notifyUpdateCompareButton:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResize:(id)arg1;
- (id)updateOpenTitle:(id)arg1;
- (BOOL)fileNamesOK;
- (id)doDiffForFileSet:(id)arg1;
- (BOOL)checkFileExistence:(id)arg1;
- (id)expandSymbolicLinks:(id)arg1;
- (id)addPreferences:(id)arg1;
- (id)viewParameters;
- (id)applyFilters:(id)arg1;
- (id)substituteContents:(id)arg1;
- (long long)linesInFile:(id)arg1;
- (id)conversionProgramForFile:(id)arg1;
- (id)conversionProgramForExtension:(id)arg1;
- (id)filteredFileContents:(id)arg1 directoryComparison:(BOOL)arg2;
- (id)conversionProgramForExtension:(id)arg1 displayUnfilteredSource:(char *)arg2 applyDuringDirectoryComparison:(char *)arg3;
- (id)conversionProgramForExtension:(id)arg1 displayUnfilteredSource:(char *)arg2 applyDuringDirectoryComparison:(char *)arg3 positionInList:(long long *)arg4;
- (id)convertFile:(id)arg1 usingProgram:(id)arg2;
- (void)processFilesToDelete;
- (id)tempFileFor:(id)arg1;
- (id)askForPath:(id)arg1;
- (void)showPerformDiffWindow:(id)arg1;
- (void)setFileName:(id)arg1 forTextField:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)loadFindStringToPasteboard;
- (void)loadFindStringFromPasteboard;
- (void)updateFontString;
- (id)savePreferencesToDefaults;
- (id)getFlags;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)setPreferencesPanel:(id)arg1;
- (void)ensureNibLoaded;
- (void)makeDiffersPerform:(SEL)arg1 withObject:(id)arg2;
- (void)removeDiffer:(id)arg1;
- (void)addDiffer:(id)arg1;
- (void)setMergeAncestorView:(id)arg1;
- (id)init;
- (void)windowDidBecomeMain:(id)arg1;
- (id)dictionaryForFileA:(id)arg1 fileB:(id)arg2 ancestor:(id)arg3 merge:(id)arg4 flags:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end