//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBPepperIdiom : IBCocoaTouchIdiom
{
}

- (void)populateVariantForResolvingMediaResources:(id)arg1 forDocument:(id)arg2;
- (BOOL)shouldLaunchPlatformToolsUsingCoreSimulator;
- (id)resourceIdiomVariant;
- (id)iPhoneSimulatorDeviceEnvVar;
- (id)icon;
- (id)colorListName;
- (void)unarchiveIdiomDependentDataForDocument:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archiveIdiomDependentDataForDocument:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)archiveIdentifier;
- (id)cocoaTouchApplicationName;
- (id)cocoaTouchToolName;
- (id)storyboardArchiveType;
- (id)idiomName;
- (id)archivingDefaultSceneMemberID;
- (BOOL)requiresConfigurations;
- (BOOL)wantsContentScrollingInPreviewEditor;
- (Class)canvasConfigurationChooserControllerClass;
- (id)memberConfigurationForScreenMetrics:(id)arg1 orientation:(id)arg2 osVersion:(id)arg3;
- (id)allConcreteConfigurations;
- (id)regularConfiguration;
- (id)compactConfiguration;
- (id)defaultScreenMetricsForConfiguration:(id)arg1;
- (id)pepperScreenMetricsForSizeClassVariableID:(id)arg1;
- (BOOL)wantsDefaultMatchesForExtension:(id)arg1;
- (id)actionFiringRuntimeClassNames;
- (Class)xibVerifierClass;
- (Class)storyboardVerifierClass;
- (Class)xibCompilerClass;
- (Class)storyboardCompilerClass;
- (id)defaultScreenMetricsForArchiving;
- (id)screenMetrics;
- (id)regularScreenMetrics;
- (id)compactScreenMetrics;
- (BOOL)usesAutolayoutActionArea;
- (BOOL)usesFirstResponder;
- (BOOL)usesSceneExitPlaceholder;
- (id)xibArchivingSchema;
- (id)storyboardArchivingSchema;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (BOOL)isInspectorCategoryExtensionApplicable:(id)arg1;
- (BOOL)isApplicableForObjectLibraryAssetProviderExtension:(id)arg1;
- (id)minimumOSVersion;
- (Class)storyboardAssetProviderClass;
- (BOOL)supportsConnectionClass:(Class)arg1;
- (BOOL)supportsWeightedItalicSystemFonts;
- (BOOL)supportsBuiltInCustomFonts;
- (double)defaultOverviewZoomFactor;
- (id)pluralUserLabelForConfigurations;
- (id)singularUserLabelForConfigurations;
- (id)platform;
- (id)pluginName;
- (id)identifier;

@end