//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBiOSPlatform : IBCocoaTouchPlatform <IDEInitialization>
{
}

+ (void)customizeObjectForLibraryInstantiation:(id)arg1;
+ (Class)idiomClass;
+ (BOOL)ide_initializeWithOptions:(int)arg1 error:(id *)arg2;
- (BOOL)allowLegacySegues;
- (BOOL)supportsLaunchScreen;
- (int)defaultUITableViewCellSeparatorStyle;
- (double)defaultUITableViewSectionHeaderFooterHeightForStyle:(int)arg1;
- (double)defaultUITableViewRowHeight;
- (id)defaultFontForUIButtonType:(int)arg1;
- (BOOL)supportsBlackBarsForSimulationMetrics;
- (BOOL)supportsNavigationBarWithPrompts;
- (BOOL)supportsPresentationSizeMetrics;
- (BOOL)supportsOrientationMetrics;
- (BOOL)supportsBottomBarMetrics;
- (BOOL)supportsStatusBarMetrics;
- (BOOL)documentEditor:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (void)verifySimulatedStatusBarStyleForDocument:(id)arg1 version:(long long)arg2;
- (void)finishChangingTargetRuntimeInCompiledIntermediateDocument:(id)arg1;
- (BOOL)supportsInternationalizationWithSystemTarget:(long long)arg1 returningError:(id *)arg2;
- (id)alternateTopLevelPathsForCompilationOutputPath:(id)arg1;
- (BOOL)shouldBackwardsDeployStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (BOOL)shouldValidateStoryboardReferencesWithDeploymentTarget:(id)arg1;
- (id)systemDocumentDependency;
- (id)cocoaTouchTargetRuntime;
- (id)availableSecondaryIdiomScreenMetricsForDocument:(id)arg1;
- (id)availablePrimaryIdiomScreenMetricsForDocument:(id)arg1;
- (id)defaultSimulatedBackgroundColorForRenderingForViewPortWithSize:(struct CGSize)arg1;
- (id)defaultTargetRuntimeForArchiving;
- (id)defaultTargetRuntime;
- (id)buildSystemPlatformIdentifier;
- (id)buildSystemPlatformName;
- (id)operatingSystemName;
- (id)identifier;

@end