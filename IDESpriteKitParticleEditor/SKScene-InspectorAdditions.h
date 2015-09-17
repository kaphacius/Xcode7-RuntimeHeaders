//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKScene (InspectorAdditions) <IDEKeyDrivenNavigableItemRepresentedObject, SKNodeWithShader>
@property(retain, nonatomic) GTFActionLibrary *nav_actionLibrary;
- (id)childFromIndexPath:(id)arg1;
- (void)refreshTexturesForProject;
- (id)recreateTextureForName:(id)arg1 fromImages:(id)arg2;
- (id)reloadTextureFromFile:(id)arg1 fromImages:(id)arg2;
@property(retain, nonatomic) NSURL *customSpriteShader;
@property(nonatomic) struct CGPoint spriteKitEditorGravity;
@property(nonatomic) BOOL nodeNameDrawEnabled;
@property(nonatomic) BOOL physicsDrawEnabled;
@property(nonatomic) struct CGSize skEditorSize;
@property(nonatomic) BOOL useCameraNode;
@property(retain, nonatomic) SKCameraNode *cameraRef;
- (id)ide_undoKVOKeypaths;
- (void)setNilValueForKey:(id)arg1;
- (id)inspectorAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSString *navigableItem_toolTip;
@property(retain, nonatomic) SKShader *shader;
@property(readonly) Class superclass;
@end