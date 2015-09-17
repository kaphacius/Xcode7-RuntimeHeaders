//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider : IBAbstractWorkspaceDocumentClassProvider
{
    NSMutableDictionary *_partialDescriptionsBySourceIdentifier;
    IBPlatform *_platform;
}

+ (id)retainedClassProviderForWorkspaceDocument:(id)arg1 platform:(id)arg2;
@property(retain) IBPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)partialClassDescriptions;
- (void)integratePartialClassDescriptions:(id)arg1;
- (void)removePartialDescriptionsWithSourceIdentifiers:(id)arg1;
- (void)removePartialDescriptionsFromFrameworksNamed:(id)arg1;
- (id)partialClassDescriptionSourcesFromFrameworksNamed:(id)arg1;
- (id)referenceKey;
- (id)description;
- (id)initWithWorkspaceDocument:(id)arg1 platform:(id)arg2;

@end