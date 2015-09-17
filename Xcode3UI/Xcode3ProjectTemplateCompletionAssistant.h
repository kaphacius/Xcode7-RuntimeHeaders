//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3ProjectTemplateCompletionAssistant : IDETemplateCompletionAssistant
{
    NSView *_groupSubview;
    DVTReplacementView *_gitSubview;
    NSView *_workspaceSubview;
}

- (void).cxx_destruct;
- (void)handleSavePanelResult:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didInstantiateItems:(id)arg1;
- (void)_updateDirectoryURL:(id)arg1;
- (id)gitController;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (BOOL)_isProjectSafeToReplaceAtURL:(id)arg1 busyProjectName:(id *)arg2;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)finalURLForSelectedURL:(id)arg1;
- (id)configuredSavePanel;
- (void)viewDidInstall;
- (void)awakeFromNib;
- (void)_updateViewsDisplayed;
- (void)primitiveInvalidate;
- (BOOL)shouldShowAccessoryView;

@end