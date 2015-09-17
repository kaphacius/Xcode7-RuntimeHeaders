//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SKEDocumentMember <IDEInspectorMatching, SKEDocumentMemberMutationDelegate, IDEKeyDrivenNavigableItemRepresentedObject>
+ (NSString *)ske_memberClassDescriptionWithPlurality:(BOOL)arg1;
+ (unsigned long long)ske_availability;
@property(readonly) id <SKEDocumentMember> ske_shadableMember;
@property(readonly) id <SKEDocumentMember> ske_animationMember;
@property(readonly) id <SKEDocumentMember> ske_particleSystemMember;
@property(readonly) id <SKEDocumentMember> ske_physicsFieldMember;
@property(readonly) id <SKEDocumentMember> ske_physicsBodyMember;
@property(readonly) id <SKEDocumentMember> ske_materialMember;
@property(readonly) id <SKEDocumentMember> ske_geometryMember;
@property(readonly) id <SKEDocumentMember> ske_morpherMember;
@property(readonly) id <SKEDocumentMember> ske_skinnerMember;
@property(readonly) id <SKEDocumentMember> ske_cameraMember;
@property(readonly) id <SKEDocumentMember> ske_lightMember;
@property(readonly) id <SKEDocumentMember> ske_nodeMember;
@property(readonly) BOOL ske_isEditable;
@property(readonly) BOOL ske_isShadable;
@property(readonly) BOOL ske_isAction;
@property(readonly) BOOL ske_isAnimation;
@property(readonly) BOOL ske_isNodeAttribute;
@property(readonly) BOOL ske_isParticleSystem;
@property(readonly) BOOL ske_isPhysicsField;
@property(readonly) BOOL ske_isPhysicsBody;
@property(readonly) BOOL ske_isMaterial;
@property(readonly) BOOL ske_isGeometry;
@property(readonly) BOOL ske_isMorpher;
@property(readonly) BOOL ske_isSkinner;
@property(readonly) BOOL ske_isCamera;
@property(readonly) BOOL ske_isLight;
@property(readonly) BOOL ske_isNode;
@property(readonly) SKEDocumentLocation *ske_navigableDocumentLocation;
@property(readonly) NSArray *ske_attributesMembers;
@property(readonly) NSArray *ske_childMembers;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
@property(retain) NSString *ske_entityIdentifier;
@property(readonly) NSString *ske_extendedName;
@property(readonly) NSImage *ske_image;
@property(readonly) NSString *ske_name;
@property(readonly) NSString *ske_modelPath;
@property(readonly) id ske_identifier;
@property(retain) IDEEditorDocument<SKEDocumentProtocol> *ske_document;
- (void)ske_setAttribute:(id <SKEDocumentMember>)arg1 ofClass:(Class)arg2;
- (id <SKEDocumentMember>)ske_attributeOfClass:(Class)arg1;
- (NSArray *)ske_attributeClassesOfInterestInEditorWithAvailability:(unsigned long long)arg1;
@end