//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMutablePartialClassDescription : IBPartialClassDescription
{
}

- (void)removeClassInformationExistingInPartialClassDescription:(id)arg1;
- (void)mergeWithPartialDescription:(id)arg1;
- (void)removeActionNamed:(id)arg1;
- (void)removeInspectableNamed:(id)arg1;
- (void)removeToOneOutletNamed:(id)arg1;
- (void)setType:(id)arg1 forInspectable:(id)arg2;
- (void)setType:(id)arg1 forAction:(id)arg2;
- (void)setType:(id)arg1 forToOneOutlet:(id)arg2;
- (void)removeNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (void)setType:(id)arg1 forNamedRelation:(id)arg2 ofRelationshipType:(long long)arg3;
- (void)addRelationshipInfo:(id)arg1;
@property(nonatomic) BOOL requiresClassNameFormatting; // @dynamic requiresClassNameFormatting;
@property(nonatomic, getter=isDesignable) BOOL designable; // @dynamic designable;
@property(copy, nonatomic) IBClassDescriptionSource *sourceIdentifier; // @dynamic sourceIdentifier;
@property(copy, nonatomic) NSString *superclassName; // @dynamic superclassName;
@property(copy, nonatomic) NSString *className; // @dynamic className;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end