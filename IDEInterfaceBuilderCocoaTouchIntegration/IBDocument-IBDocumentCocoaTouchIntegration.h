//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDocument (IBDocumentCocoaTouchIntegration)
+ (id)keyPathsForValuesAffectingCocoaTouchTargetRuntime;
+ (id)keyPathsForValuesAffectingDefaultUISimulatedMetricsContainer;
+ (int)libraryInclusionStatusForWindow;
+ (int)libraryInclusionStatusForProxyObject;
- (id)viewControllerRepresentativeForObject:(id)arg1;
- (void)prepareToBackwardsDeployToIOS7;
- (void)unarchiveCocoaTouchDataWithDocumentUnarchiver:(id)arg1;
- (void)archiveCocoaTouchDataWithDocumentArchiver:(id)arg1;
- (BOOL)isNonExistentAtRuntimePlaceholder:(id)arg1;
- (long long)lastSavedPluginVersion;
- (id)cocoaTouchIdiom;
- (id)cocoaTouchPlatform;
- (id)cocoaTouchTargetRuntime;
- (void)populateAdditionalTargetOSVersionsForCompilation:(id)arg1;
- (BOOL)compilesSeparateContentOnIOSVersionsPriorToEight;
- (BOOL)canTargetCurrentOSVersion;
- (BOOL)canTargetIOS7;
- (BOOL)canTargetIOSVersionsPriorToSeven;
- (BOOL)isCocoaTouchDocument;
- (void)setBaseInheritedScreenMetrics:(id)arg1 orientationMetrics:(id)arg2;
- (id)defaultUISimulatedMetricsContainer;
@end