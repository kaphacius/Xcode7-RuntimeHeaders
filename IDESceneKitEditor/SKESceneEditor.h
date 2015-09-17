//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKESceneEditor : IDEViewController <DVTReplacementViewDelegate, DVTSplitViewDelegate, SKESceneViewDelegate, SCNAuthoringEnvironmentDelegate>
{
    DVTSplitView *_splitView;
    DVTReplacementView *_sceneGraphReplacementView;
    DVTReplacementView *_canvasReplacementView;
    SKESceneEditorArea *_parentEditor;
    NSView *_buttonSeparator;
    DVTGradientImageButton *_showSceneGraphButton;
    SKEDocumentStructureViewController *_sceneGraphViewController;
    SKECanvasViewController *_canvasViewController;
    SKEBakeSettingsWindowController *_bakeSettingsWindowController;
    DVTNotificationToken *_sceneCurrentTimeObservingToken;
    DVTNotificationToken *_documentWillRemoveMemberObservingToken;
    DVTNotificationToken *_documentDidReplaceMemberObservingToken;
    DVTObservingToken *_documentAvailablePointsOfViewDidChangeObservingToken;
    SCNNode *_currentPointOfView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingIsFreeBrowsingWithNodeSelected;
+ (id)keyPathsForValuesAffectingIsFreeBrowsing;
@property(retain, nonatomic) SCNNode *currentPointOfView; // @synthesize currentPointOfView=_currentPointOfView;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)authoringEnvironment:(id)arg1 didMoveItems:(id)arg2 fromTransform:(struct CATransform3D *)arg3;
- (void)authoringEnvironment:(id)arg1 selectionDidUpdateWithProposedSelection:(id)arg2;
- (void)authoringEnvironment:(id)arg1 didCloneSelection:(id)arg2;
- (void)cut:(id)arg1;
- (BOOL)canCut;
- (void)delete:(id)arg1;
- (BOOL)canDelete;
- (BOOL)hasAtLeastOneItemSelectedAndNoneReadonly;
- (void)paste:(id)arg1;
- (BOOL)canPaste;
- (void)copy:(id)arg1;
- (BOOL)canCopy;
- (void)authoringDisplayMaskDefaultsDidChange:(id)arg1;
- (void)authoringDisplayMaskNoneDidChange:(id)arg1;
- (void)authoringDisplayMaskAllDidChange:(id)arg1;
- (void)authoringDisplayMaskGridDidChange:(id)arg1;
- (void)authoringDisplayMaskFieldsDidChange:(id)arg1;
- (void)authoringDisplayMaskPhysicsDidChange:(id)arg1;
- (void)authoringDisplayMaskLightsDidChange:(id)arg1;
- (void)authoringDisplayMaskCamerasDidChange:(id)arg1;
- (void)authoringDisplayMaskBoundingBoxesDidChange:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)resetNormals:(id)arg1;
- (void)bakeGeometry:(id)arg1;
- (void)focusSelectedNodeAction:(id)arg1;
- (void)bakeSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_addURLToProject:(id)arg1;
- (id)groupForFilePath:(id)arg1;
- (id)documentEnclosingFolderPath;
- (void)sceneViewDidRequestDeselectionOfAllNodes:(id)arg1;
- (void)sceneView:(id)arg1 didRequestDeletionOfNodeSubselection:(id)arg2;
- (void)sceneView:(id)arg1 didRequestDeletionOfNodes:(id)arg2;
- (void)sceneViewDidBeginFreeBrowsing:(id)arg1;
- (BOOL)sceneView:(id)arg1 didDropPasteboardItem:(id)arg2 onNode:(id)arg3 dropLocation:(struct SCNVector3)arg4;
- (BOOL)sceneView:(id)arg1 didDropSceneURLs:(id)arg2 onNode:(id)arg3 dropLocation:(struct SCNVector3)arg4 wantsReferences:(BOOL)arg5;
- (BOOL)sceneView:(id)arg1 shouldAcceptDroppedExternalDocumentURLs:(id)arg2;
- (BOOL)sceneView:(id)arg1 shouldAcceptContentsOfDroppedPasteboardItem:(id)arg2;
- (BOOL)sceneView:(id)arg1 didDropContent:(id)arg2 onNode:(id)arg3 geometryIndex:(long long)arg4;
- (void)sceneView:(id)arg1 didSelectNode:(id)arg2 geometryIndex:(long long)arg3 event:(id)arg4;
- (void)primitiveInvalidate;
- (id)additionalDragRectsForSplitView:(id)arg1;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)suggestedImagesForContentsPicker:(id)arg1;
- (void)computeLightProbe:(id)arg1;
- (void)takeFreeCameraParametersFor:(id)arg1;
- (void)focusNode:(id)arg1;
- (void)selectDefaultPointOfView;
- (BOOL)isFreeBrowsingWithNodeSelected;
@property(readonly) BOOL isFreeBrowsing;
@property(readonly) NSArray *availablePointsOfView;
- (void)documentDidReplaceMember:(id)arg1;
- (void)documentWillRemoveMember:(id)arg1;
- (void)userDidPressViewSwitchingControl:(id)arg1;
- (void)toggleShowsSceneGraphView;
- (void)setShowsSceneGraphView:(BOOL)arg1;
- (void)setShowsSceneGraphView:(BOOL)arg1 isRestoringState:(BOOL)arg2;
- (BOOL)showsSceneGraphView;
- (void)refreshViewSwitchingControlsToolTips;
- (void)refreshViewSwitchingControlsStates;
- (void)installSubeditorVisibilitySwitchingButton:(id)arg1;
- (void)installViewSwitchingControlsInCanvasScopeBar;
- (id)toolTipForHideLeftViewButton;
- (id)toolTipForShowLeftViewButton;
@property(readonly) SKEPreferencesManager *preferencesManager;
- (void)currentTimeDidChange:(id)arg1;
- (void)takeFocus;
- (void)viewDidAppear;
- (void)viewDidInstall;
- (void)loadView;
- (id)document;
@property(readonly, nonatomic) SKESceneEditorArea *parentEditor;
- (void)setParentEditor:(id)arg1;
@property(readonly) SKECanvasViewController *canvasViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end