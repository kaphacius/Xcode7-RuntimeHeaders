//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDataModelBrowserEditor : IDEDMEditorController <IDECapsuleListViewDataSource, IDEDataModelEditorController>
{
    IDEDataModelEntityContentsEditor *parentEditor;
    NSArrayController *entityArrayController;
    IDEDataModelPropertiesTableController *_activePropertiesController;
    IDEDataModelPropertiesTableController *attributesTableViewController;
    IDEDataModelPropertiesTableController *relationshipsTableViewController;
    IDEDataModelPropertiesTableController *fetchedPropertiesTableViewController;
    IDECapsuleListView *capsuleView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingFindHighlightsByModelObject;
+ (id)keyPathsForValuesAffectingSelection;
+ (id)keyPathsForValuesAffectingSelectedEntityIndexes;
+ (id)keyPathsForValuesAffectingSelectedProperties;
+ (id)keyPathsForValuesAffectingSelectedEntities;
+ (id)keyPathsForValuesAffectingRootEditor;
@property(retain, nonatomic) IDEDataModelPropertiesTableController *activePropertiesController; // @synthesize activePropertiesController=_activePropertiesController;
@property(retain) IDEDataModelEntityContentsEditor *parentEditor; // @synthesize parentEditor;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)tableController:(id)arg1 didScrollWithEvent:(id)arg2;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)takeFocus;
- (void)firstResponderChanged:(id)arg1;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (id)_findNextNonEmptyControllerAfterIndex:(unsigned long long)arg1 descending:(BOOL)arg2;
- (void)_focusPropertiesTableController:(id)arg1 top:(BOOL)arg2;
- (void)editNameForModelObject:(id)arg1;
- (void)selectModelObjects:(id)arg1;
- (id)selection;
- (void)selectProperties:(id)arg1;
- (void)setSelectedEntityIndexes:(id)arg1;
- (id)selectedEntityIndexes;
- (id)selectedProperties;
- (id)selectedEntities;
- (void)selectedPropertiesChanged;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)rootEditor;
- (id)_propertiesControllerForModelObject:(id)arg1;
- (id)allSubViewControllers;
- (id)identifier;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end