//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKShaderAttributesInspector : IDEInspectorViewController <NSTableViewDelegate>
{
    NSDictionary *_customAttributeTypes;
    NSButton *_removeButton;
    BOOL _editSelectedRowAfterRefresh;
    DVTObservingToken *_selectionObserver;
    BOOL _reloadingData;
    NSIndexSet *_rowIndexesToSelectAfterRefresh;
    NSSet *_draggedAttributes;
    NSArray *_userDefinedRuntimeAttributes;
    NSString *_currentPasteboardDragMarker;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    NSTableView *_attributesTableView;
    NSMenu *_typeMenu;
    SKNode<SKNodeWithShader> *_editingSprite;
}

+ (BOOL)supportsMultipleObjectInspection;
+ (void)rebuildShaderForSprite:(id)arg1 skipIfNoChange:(BOOL)arg2;
+ (void)postShaderCompilationLog:(id)arg1 path:(id)arg2;
@property(nonatomic) __weak SKNode<SKNodeWithShader> *editingSprite; // @synthesize editingSprite=_editingSprite;
@property(retain, nonatomic) NSMenu *typeMenu; // @synthesize typeMenu=_typeMenu;
@property(retain, nonatomic) NSTableView *attributesTableView; // @synthesize attributesTableView=_attributesTableView;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(nonatomic, getter=isReloadingData) BOOL reloadingData; // @synthesize reloadingData=_reloadingData;
@property(copy, nonatomic) NSString *currentPasteboardDragMarker; // @synthesize currentPasteboardDragMarker=_currentPasteboardDragMarker;
@property(copy, nonatomic) NSArray *userDefinedRuntimeAttributes; // @synthesize userDefinedRuntimeAttributes=_userDefinedRuntimeAttributes;
@property(copy, nonatomic) NSSet *draggedAttributes; // @synthesize draggedAttributes=_draggedAttributes;
@property(retain, nonatomic) NSIndexSet *rowIndexesToSelectAfterRefresh; // @synthesize rowIndexesToSelectAfterRefresh=_rowIndexesToSelectAfterRefresh;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 removeRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 canRemoveRowsWithIndexes:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)editTexture:(id)arg1;
- (void)editValue:(id)arg1;
- (void)editType:(id)arg1;
- (void)editUniformName:(id)arg1;
- (void)editAttributeForSender:(id)arg1 editBlock:(CDUnknownBlockType)arg2;
- (void)doubleClickedTableView:(id)arg1;
- (void)removeUserDefinedRuntimeAttribute:(id)arg1;
- (void)insertUserDefinedRuntimeAttribute:(id)arg1;
- (id)newShaderUniformFromType:(long long)arg1 Value:(id)arg2 Name:(id)arg3;
- (void)refreshRemoveButtonEnabledState;
- (id)selectedAttributes;
- (id)defaultType;
- (id)userDefinedRuntimeAttributeTypeForTypeIdentifier:(long long)arg1;
- (id)customAttributeTypes;
- (void)reloadTableViewDataIgnoringEditingActions;
- (id)contentLayoutView;
- (void)setContent:(id)arg1;
- (void)didSetInspectedObjects:(id)arg1;
- (void)loadView;
- (void)setupControlBarAfterLoading;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end