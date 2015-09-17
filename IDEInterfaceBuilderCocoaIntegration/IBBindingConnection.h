//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBBindingConnection : IBConnection
{
    NSNibBindingConnector *connector;
    IBBindingInfo *bindingInfo;
    NSString *binding;
    NSString *keyPath;
    NSObject *controller;
}

+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (void)assertBindingsIntegrity:(id)arg1;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)outboundPrototypeConnectionsForObject:(id)arg1 inDocument:(id)arg2;
+ (id)inboundPrototypeConnectionsForObject:(id)arg1 inDocument:(id)arg2;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
@property(copy) NSString *keyPath; // @synthesize keyPath;
@property(retain) NSObject *controller; // @synthesize controller;
@property(copy) NSString *binding; // @synthesize binding;
- (void).cxx_destruct;
- (BOOL)canHaveSourceSeparatedWithSeparationType:(int)arg1;
- (BOOL)canHaveDestinationSeparatedWithSeparationType:(int)arg1;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (void)addToDocument:(id)arg1;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (void)objectContainer:(id)arg1 willRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveObject:(id)arg2 context:(id)arg3;
- (void)performRemovalFromContainer:(id)arg1 context:(id)arg2;
- (id)siblingPopUpContentObjectBindingForWorkingAround9967102InContainerOrDocument:(id)arg1;
- (BOOL)isStrandedPopUpContentObjectBindingInContainerOrDocument:(id)arg1;
- (BOOL)isPopUpBindingWithBindingName:(id)arg1;
- (id)onlySiblingBindingWithBindingName:(id)arg1 inContainerOrDocument:(id)arg2;
- (BOOL)allowsEstablishingNewConnections;
- (id)displayDescriptionInDocument:(id)arg1;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)bindingDisplayName;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (id)displayGroupIdentifierFromReferenceEndPoint:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)archiveKeyForLabel;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)connectorsToConnectionsWithDocument:(id)arg1 context:(id)arg2;
- (id)printablePListForIBToolInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)archiveConnection;
- (id)connector;
- (void)encodeWithCoder:(id)arg1;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)_copyOfConnector:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibBinder:(id)arg1;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)_descriptionSubstringForDestination;
- (id)_descriptionSubstringForLabel;
- (id)_descriptionSubstringForSource;
- (id)attributeDescriptionForOption:(id)arg1;
- (void)setIbShadowedMultipleValuesPlaceholder:(id)arg1;
- (id)ibShadowedMultipleValuesPlaceholder;
- (void)setIbShadowedNotApplicablePlaceholder:(id)arg1;
- (id)ibShadowedNotApplicablePlaceholder;
- (void)setIbShadowedNoSelectionPlaceholder:(id)arg1;
- (id)ibShadowedNoSelectionPlaceholder;
- (void)setIbShadowedIsNilPlaceholder:(id)arg1;
- (id)ibShadowedIsNilPlaceholder;
- (void)setIbShadowedDisplayPattern:(id)arg1;
- (id)ibShadowedDisplayPattern;
- (void)setIbShadowedDisplayName:(id)arg1;
- (id)ibShadowedDisplayName;

@end