//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUICollectionViewController : IBUIViewController <IBDocumentArchiving, NSCoding>
{
    BOOL clearsSelectionOnViewWillAppear;
}

+ (id)ibViewPasteboardType;
+ (Class)ibViewClass;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property BOOL clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear;
@property(retain) IBUICollectionView *collectionView;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (void)ibEffectiveSimulatedMetricsDidChange;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibPasteboardTypes;
- (id)ibImageForOwnedScene;
- (id)ibExplanatoryTextForEditor;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibEstablishViewOutletsInDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end