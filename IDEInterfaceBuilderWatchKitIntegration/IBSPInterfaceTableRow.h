//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPInterfaceTableRow : IBSPInterfaceObject <IBDocumentArchiving, NSCoding>
{
    IBSPInterfaceView *_rootItem;
    NSString *_identifier;
    BOOL _selectable;
}

+ (void)ibPopulateConfigurableAttributeKeyPaths:(id)arg1;
+ (void)ibPopulatePropertyListAttributeKeyPaths:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IBSPInterfaceView *rootItem; // @synthesize rootItem=_rootItem;
- (void).cxx_destruct;
- (id)initWithTargetRuntime:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibEmbeddableRelationshipForChildView:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibDraggableImageForScaleFactor:(double)arg1;
- (id)ibDefaultPlistValueForKeyPath:(id)arg1 plistKey:(id)arg2;
- (void)ibEncodeIntoPropertyList:(id)arg1 document:(id)arg2 reason:(long long)arg3 fileType:(long long)arg4 configurations:(id)arg5;
- (id)ibPasteboardTypes;
- (void)ibEnumeratePlistKeysForKeyPath:(id)arg1 document:(id)arg2 reason:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibCanChangeCustomClassName;
- (id)ibInspectedSizeToFitSentinelForChildView:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibIsChildViewUserSizable:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibOverridesSizeForChildView:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibOverridesPositionForChildView:(id)arg1 forKeyPath:(id)arg2;
- (id)ibRuntimeClassName;
- (BOOL)ibAllowsSelectionSeguesFromChildGroup:(id)arg1;
- (id)ibTitleForPlaceholderImageForChildGroup:(id)arg1;
- (id)ibTypeNameForDefaultLabel;
- (id)ibQualifyingInfoForDefaultLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end