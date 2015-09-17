//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SKEDocumentProtocol <NSObject>
@property(readonly) DVTUndoManager *undoManager;
@property(readonly) BOOL supportsEditing;
@property(readonly) BOOL isArchivedSceneKitDocument;
- (void)makeDocumentAssetCatalogCurrent;
- (NSArray *)membersOfClass:(Class)arg1;
- (void)didReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)willReplaceChildMember:(id)arg1 ofMember:(id)arg2 byChildMember:(id)arg3;
- (void)didRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)willRemoveChildMember:(id)arg1 fromMember:(id)arg2;
- (void)didAddChildMember:(id)arg1 toMember:(id)arg2;
- (void)willAddChildMember:(id)arg1 toMember:(id)arg2;
- (BOOL)upgradeToFileType:(NSString *)arg1 upgradeForEdition:(BOOL)arg2;
@end