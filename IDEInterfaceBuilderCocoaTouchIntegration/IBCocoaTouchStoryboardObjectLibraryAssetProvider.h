//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCocoaTouchStoryboardObjectLibraryAssetProvider : IBCocoaTouchObjectLibraryAssetProvider
{
}

- (id)objectContainerFromAsset:(id)arg1 forInsertionIntoPasteboard:(id)arg2;
- (id)objectContainerForSplitViewControllerAsset:(id)arg1;
- (id)objectContainerForTabBarControllerAsset:(id)arg1;
- (id)objectContainerForNavigationControllerAsset:(id)arg1;
- (void)extractChildController:(id)arg1 fromParentController:(id)arg2 withRelationship:(id)arg3 inObjectContainer:(id)arg4;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryAsset:(id)arg3;

@end