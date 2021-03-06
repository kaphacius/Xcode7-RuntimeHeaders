//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKDocument : GTFActionDocument <IDEDocumentStructureProviding, NSKeyedUnarchiverDelegate>
{
    BOOL _pauseAttrObserver;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _usesActions;
    BOOL _isSceneEditor;
    id <SKEditingTarget> _editingTarget;
    NSURL *_workspaceURL;
    SKDocumentEditor *_documentEditor;
    GTFActionTimelineModel *_inspectedAction;
    id <SKDocumentDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
+ (id)currentWorkspaceBaseURL;
+ (id)fetchFileUrlFromWorkSpace:(id)arg1;
+ (id)nextUID;
+ (id)documentForNode:(id)arg1;
+ (void)removeDocumentInstance:(id)arg1;
+ (void)addDocumentInstance:(id)arg1;
+ (id)documents;
@property(nonatomic) __weak id <SKDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTFActionTimelineModel *inspectedAction; // @synthesize inspectedAction=_inspectedAction;
@property(readonly, nonatomic) BOOL isSceneEditor; // @synthesize isSceneEditor=_isSceneEditor;
@property(nonatomic) __weak SKDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(readonly) id <SKEditingTarget> editingTarget; // @synthesize editingTarget=_editingTarget;
- (void).cxx_destruct;
- (BOOL)canSave;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (BOOL)ensureDocumentBundle;
@property(readonly, nonatomic) NSURL *workspaceURL; // @synthesize workspaceURL=_workspaceURL;
- (void)undoEvent:(id)arg1;
- (void)createSceneUndoEvent:(id)arg1;
- (void)stopUndoObservationsOf:(id)arg1;
- (void)startUndoObservationsOf:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)shouldPauseAttributeObserver;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)toggleAttributeObserverPause:(BOOL)arg1;
- (void)undoWithKVCUndoRecord:(id)arg1;
- (void)setupUndoManager:(id)arg1;
- (void)teardownUndoManager:(id)arg1;
- (long long)actionEditorClientDocumentType;
- (void)editorDocumentWillClose;
- (void)prepareForDocumentClose;
- (void)dealloc;
- (id)init;
- (void)updateChangeCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end