//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPNotificationInterfaceController : IBSPInterfaceController <NSCoding, IBDocumentArchiving>
{
    IBSPNotificationCategory *_notificationCategory;
}

+ (void)ibPopulatePropertyListToOneRelationshipKeyPaths:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) IBSPNotificationCategory *notificationCategory; // @synthesize notificationCategory=_notificationCategory;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibPopulateWarnings:(id)arg1 forDocument:(id)arg2 inConfiguration:(id)arg3 withStorage:(id)arg4 context:(id)arg5;
- (id)ibStoryboardEntryPointIndicatorInvalidatingKeyPaths;
- (id)ibOrderedEntryPointIndicatorsInStoryboard:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBecomeEntryPointForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (long long)ibMarshalledFileType;
- (id)ibDynamicNotificationInterfaceControllerInDocument:(id)arg1;
- (id)ibEffectiveNotificationCategory;
- (id)ibNotificationAlertLabelInDocument:(id)arg1;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (BOOL)ibCanBeValidSegueDestination;
- (BOOL)ibCanChangeCustomClassName;
- (id)ibRuntimeClassName;
- (id)ibDefaultEditorCanvasFrameTitle;
- (id)ibTypeNameForDefaultLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end