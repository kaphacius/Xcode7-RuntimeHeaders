//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICCatalogSlicingController : IBICAbstractCatalogDetailController <IBICCatalogItemObserver, IBICImageSlicingViewContainerDelegate>
{
    IBMutableIdentityDictionary *_imageRepsToSliceViewContainers;
    DVTDelayedInvocation *_batchedChangeHandler;
    NSMutableSet *_imageRepsWithPendingChanges;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
- (void)zoomCanvas:(id)arg1;
- (void)imageSlicingViewContainer:(id)arg1 userDidChooseResizingMode:(long long)arg2;
- (void)imageSlicingViewContainer:(id)arg1 userDidChangeResizingBehavior:(id)arg2;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)applyBatchedModelChanged:(id)arg1;
- (void)updateContentForSlicedImageContainer:(id)arg1;
- (void)detailDocumentViewWillLayoutTopDown:(id)arg1;
- (void)rescaleViews;
- (void)drawsWithKeyAppearanceDidChange;
- (id)objectsForSelectAll;
- (void)imageSlicingViewContainer:(id)arg1 userDidMouseDown:(id)arg2;
- (void)pushSelectionToViews;
- (BOOL)item:(id)arg1 intersectsBandSelectionRect:(struct CGRect)arg2 fromView:(id)arg3;
- (id)bandSelectionCandidates;
- (id)slicingViewContainerForImageRep:(id)arg1;
- (void)refreshContentView;
- (id)displayedImageSets;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)isSubEditorExistanceInSyncForItem:(id)arg1;
- (void)loadView;
- (id)showAlternateDetailControllerTitle;
- (BOOL)canZoomCanvas;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end