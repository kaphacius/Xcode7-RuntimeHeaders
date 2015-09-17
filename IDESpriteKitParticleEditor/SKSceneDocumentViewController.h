//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKSceneDocumentViewController : SKDocumentViewController <DVTReplacementViewDelegate, NSSplitViewDelegate, GTFFileSystemEventStreamDelegate, GTFActionEditorDelegate, EditOverlayDelegate, SKSceneDelegate>
{
    DVTObservingToken *_actionEditorSelectedItemsKVOToken;
    DVTObservingToken *_actionEditorFilterStringKVOToken;
    id <NSObject> _replaceTimelineObserver;
    id <NSObject> _skDocumentBundleObserver;
    DVTReplacementView *_actionEditorReplacementView;
    GTFActionEditor *_actionEditorViewController;
    DVTGradientImageButton *_actionEditorToggleButton;
    SKSceneDocumentSplitView *_splitView;
    SKSceneDocumentBorderedView *_editorBackgroundView;
    SKSceneDocumentScopeBarView *_toolbarView;
    NSButton *_zoomInButton;
    NSButton *_zoomRestoreButton;
    NSButton *_zoomOutButton;
    NSButton *_simulateEditButton;
    NSButton *_previewPausePlayButton;
    NSTextField *_pausePlayTextField;
    DVTBorderedView *_playbackSpeedView;
    DVTStepperTextField *_playbackSpeedField;
    NSTextField *_playbackSpeedLabel;
    NSImage *_swappedActionEditorToggleImage;
    NSImage *_swappedActionEditorToggleAlternateImage;
    NSArray *_selectionCache;
    NSMutableDictionary *_actionFilter;
    float _oldPlaybackSpeed;
    long long _previewState;
    BOOL _isInitialLayout;
    BOOL _buttonImagesSwapped;
    BOOL _ignoreSelectionUpdates;
    SKEditView *_mainView;
    EditOverlayView *_overlayView;
}

+ (id)toolTipForHideActionEditorViewButton;
+ (id)toolTipForShowActionEditorButton;
@property(nonatomic) __weak EditOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak SKEditView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)receivedShaderSourceEditorStartedNotification:(id)arg1;
- (void)rebuildShaderForPath:(id)arg1 skipIfNoChange:(BOOL)arg2;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)editOverlayActionForNode:(id)arg1;
- (void)editOverlayDidChangeTexture:(id)arg1;
- (void)editOverlayDidRenameNode:(id)arg1;
- (void)editOverlayDidUndoEvent;
- (void)editOverlayDidRemoveNode;
- (void)editOverlayDidDragInAction;
- (void)editOverlayDidAddNodes:(id)arg1;
- (void)editOverlayDidChangeScene:(id)arg1;
- (void)didEvaluateActionsForScene:(id)arg1;
- (void)update:(double)arg1 forScene:(id)arg2;
- (void)setActionsOnSceneNodes;
- (void)toggleAnimatePlayPause;
- (void)toggleAnimateOrLayout;
- (void)updateActionPreview;
- (void)forceStartSimulate;
- (id)allNodes;
- (id)nodesFilteredByString:(id)arg1;
- (void)updateActionEditorSelectedNodesFilter;
- (void)updateActionEditorAllNodesFilter;
- (void)updateActionEditorFilterString;
- (void)updateActionEditorFilteredActions:(id)arg1 toNodes:(id)arg2 sync:(BOOL)arg3;
- (void)updateNodesWithActionsFilter:(id)arg1;
- (BOOL)actionEditor:(id)arg1 shouldSupportPastedActions:(id)arg2;
- (void)refreshObjectLibrary;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)selectDocumentLocations:(id)arg1;
- (void)editOverlayDidClickEmptySpace;
- (void)editOverlayDidSelectNodes:(id)arg1;
- (void)updateSceneSelection:(id)arg1;
- (void)restoreSceneSelection;
- (void)cacheSceneSelection;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)takeFocus;
- (void)playbackSpeedUpdated:(id)arg1;
- (void)setTitle:(id)arg1 forButton:(id)arg2 withColor:(id)arg3;
- (void)swapButtonImage:(id)arg1;
- (void)setToolbarBackgroundViewActive:(BOOL)arg1;
- (void)editorMenuZoomOut:(id)arg1;
- (void)editorMenuRestoreZoom:(id)arg1;
- (void)editorMenuZoomIn:(id)arg1;
- (void)editorMenuSendToBack:(id)arg1;
- (void)editorMenuBringToFront:(id)arg1;
- (void)editorMenuTogglePlayPause:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)updateToolTipsForShowEditorViewButtons;
- (void)resizeActionEditorToInitialHeight;
- (void)updateLayoutPropertiesAfterUserDraggedDivider;
- (void)updateLayoutAfterButtonPress:(id)arg1 useAnimation:(BOOL)arg2;
- (void)updateLayoutAfterButtonPress:(id)arg1;
- (void)setupToolbarViewLayout;
- (void)updateLastActionEditorState;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)registerForTimelineNotifications;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)viewDidLayout;
@property(readonly, nonatomic) SKEditingSceneTarget *sceneEditingTarget;
- (id)skView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end