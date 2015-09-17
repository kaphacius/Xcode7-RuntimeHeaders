//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceCodeVersionsTwoUpSubmode : IDEComparisonEditorSubmode <IDEComparisonEditorDelegate, NSSplitViewDelegate, IDESourceEditorViewControllerHost, DVTDiffSessionDelegate, DVTComparisonSplitViewDelegate, IDEComparisonEditorSavableMergeState>
{
    DVTBorderedView *_primaryLayoutView;
    DVTBorderedView *_secondaryLayoutView;
    IDESourceCodeVersionsLayoutView *_versionsLayoutView;
    DVTComparisonSplitView *_comparisonSplitView;
    DVTComparisonScrollCoordinator *_comparisonScrollCoordinator;
    DVTDiffSession *_diffSession;
    IDESourceCodeDocument *_mergeDocument;
    IDEEditor *_primaryEditor;
    IDEEditor *_secondaryEditor;
    DVTObservingToken *_responderToken;
    id _resignKeyWindowNotificationObserver;
    id _becomeKeyWindowNotificationObserver;
    NSDictionary *_previouslyRestoredStateDictionary;
    id _primaryEditorSetupObservationToken;
    id _secondaryEditorSetupObservationToken;
    IDESourceControlMergeData *_previousMergeData;
    unsigned long long _documentLoadCount;
    BOOL _showingPrimaryDocumentStructure;
    BOOL _firstResults;
    BOOL _canSelectPrevious;
    BOOL _canSelectNext;
    unsigned long long _selectedIndex;
}

+ (BOOL)automaticallyNotifiesObserversOfCanSelectNext;
+ (BOOL)automaticallyNotifiesObserversOfCanSelectPrevious;
+ (id)logAspect;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
@property(retain) IDESourceCodeDocument *mergeDocument; // @synthesize mergeDocument=_mergeDocument;
@property BOOL showingPrimaryDocumentStructure; // @synthesize showingPrimaryDocumentStructure=_showingPrimaryDocumentStructure;
@property(retain) DVTComparisonScrollCoordinator *comparisonScrollCoordinator; // @synthesize comparisonScrollCoordinator=_comparisonScrollCoordinator;
@property(retain) IDESourceCodeVersionsLayoutView *versionsLayoutView; // @synthesize versionsLayoutView=_versionsLayoutView;
@property(retain) DVTComparisonSplitView *comparisonSplitView; // @synthesize comparisonSplitView=_comparisonSplitView;
@property(retain) DVTBorderedView *secondaryLayoutView; // @synthesize secondaryLayoutView=_secondaryLayoutView;
@property(retain) DVTBorderedView *primaryLayoutView; // @synthesize primaryLayoutView=_primaryLayoutView;
- (void).cxx_destruct;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (void)diffSessionDidScrapeDiffResults:(id)arg1;
- (void)comparisonSplitView:(id)arg1 didDragDiffDescriptorIndexes:(id)arg2 withEvent:(id)arg3;
- (BOOL)comparisonSplitView:(id)arg1 shouldDragDiffDescriptorIndexes:(id)arg2 withEvent:(id)arg3;
- (void)comparisonEditor:(id)arg1 didReplaceAncestorDocument:(id)arg2;
- (id)comparisonEditor:(id)arg1 substituteDocumentLocationForAncestorDocumentLocation:(id)arg2;
- (void)comparisonEditor:(id)arg1 didReplaceSecondaryDocument:(id)arg2;
- (id)comparisonEditor:(id)arg1 substituteDocumentLocationForSecondaryDocumentLocation:(id)arg2;
- (void)comparisonEditor:(id)arg1 didReplacePrimaryDocument:(id)arg2;
- (id)comparisonEditor:(id)arg1 substituteDocumentLocationForPrimaryDocumentLocation:(id)arg2;
- (void)_setupEditorForPrimaryOrMergeDocument:(id)arg1;
- (id)_fileTextSettings;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)hideSecondaryPlaceholder;
- (void)showSecondaryPlaceholder;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)textViewDidScroll:(id)arg1;
- (void)_updateCanSelectDiffs;
- (void)textViewDidFinishAnimatingScroll:(id)arg1;
- (void)textViewDidLoadAnnotationProviders:(id)arg1;
- (id)annotationContextForTextView:(id)arg1;
- (void)offsetCurrentSelectedIndexBy:(long long)arg1;
- (void)setCanSelectNext:(BOOL)arg1;
- (BOOL)canSelectNext;
- (void)setCanSelectPrevious:(BOOL)arg1;
- (BOOL)canSelectPrevious;
- (void)setDifferenceMenu:(id)arg1;
- (void)revertSelectedDifference;
- (BOOL)canRevertMenuItemDifference:(id)arg1;
- (BOOL)canRevertSelectedDifference;
- (void)copyDiff;
- (BOOL)canCopyDiff;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)showEmptySecondaryEditor:(id)arg1;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)_willOpenSpecifier:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_syncStructureDocument;
- (void)_initializeDiffSession;
- (void)_tearDownDiffSession;
- (void)_validateMergeData:(id)arg1;
- (void)_saveMergeState;
- (void)_resetMergeState;
- (id)_windowForError;
- (BOOL)_documentIsTemporaryDocument;
@property(readonly) IDESourceControlMergeData *previousMergeData;
- (void)saveMergeState;
- (id)mergeController;
@property(retain) DVTDiffSession *diffSession;
@property(retain) IDEEditor *secondaryEditor; // @synthesize secondaryEditor=_secondaryEditor;
@property(retain) IDEEditor *primaryEditor; // @synthesize primaryEditor=_primaryEditor;
@property(readonly) DVTSourceTextView *secondaryTextView;
@property(readonly) DVTSourceTextView *primaryTextView;
- (id)keyEditor;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)comparisonContextMenu_revertDiffDescriptor:(id)arg1;
- (void)comparisonContextMenu_revertSelectedDiffDescriptor:(id)arg1;
- (void)_comparisonContextMenu_revertDiffDescriptor:(id)arg1 selected:(BOOL)arg2;
- (void)comparisonContextMenu_toggleIgnoreWhitespace:(id)arg1;
- (void)comparisonContextMenu_copyDiff:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end