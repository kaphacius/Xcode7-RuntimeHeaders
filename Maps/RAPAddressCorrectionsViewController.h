//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPAddressCorrectionsViewController : UITableViewController <RAPAddressCellDelegate, RAPCategoryChooserDelegate>
{
    RAPReport *_report;
    RAPPlaceCorrectionsQuestion *_question;
    CDUnknownBlockType _completion;
    UIBarButtonItem *_sendButtonItem;
    ReportAProblemCategoryChooserViewController *_categoryViewController;
    double _verticalBarOffset;
    RAPPhotoPickerController *_photoPicker;
    RAPAddNewPlaceType *_previouslySelectedAddNewPlaceType;
    RAPMapFeatureTableViewCell *_locationCell;
}

@property(retain, nonatomic) RAPMapFeatureTableViewCell *locationCell; // @synthesize locationCell=_locationCell;
- (void).cxx_destruct;
- (void)reportAProblemCellShouldAdvanceToPreviousResponder:(id)arg1;
- (void)reportAProblemCellShouldAdvanceToNextResponder:(id)arg1;
- (void)_makeFirstResponderCellAtIndexPath:(id)arg1 fromDirection:(long long)arg2;
- (void)reportAProblemCellCorrectnessStatusChanged:(id)arg1;
- (void)reportAProblemCellDidResignFirstResponder:(id)arg1;
- (void)reportAProblemCellDidBecomeFirstResponder:(id)arg1;
- (void)valueForAddressType:(long long)arg1 changedTo:(id)arg2;
- (id)_problemItemForType:(long long)arg1;
- (void)_performDeletionForCategoryAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)deleteCategoryAtIndexPath:(id)arg1;
- (void)didReceiveSelectedCategory:(id)arg1 forIndexPath:(id)arg2;
- (void)_beginPickingCategoriesForRowAtIndexPath:(id)arg1;
- (id)_photoPicker;
- (id)snapshotOptionsWithQuestion:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_indexPathForAddCategoryButton;
- (_Bool)_isAddCategoryButtonIndexPath:(id)arg1;
- (_Bool)_isMultipleCategoriesSection:(long long)arg1;
- (long long)_indexForMultipleCategoriesSection;
- (unsigned long long)_indexOfCorrectableItemForSection:(long long)arg1;
- (_Bool)_isLocationSection:(long long)arg1;
- (_Bool)_hasLocationSection;
- (long long)_correctableItemSectionOffset;
- (long long)_locationSection;
- (_Bool)_isPhotosSection:(long long)arg1;
- (long long)_photosSection;
- (long long)_commentSection;
- (_Bool)_isCommentSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)_locationIsMissingSection;
- (_Bool)_isLocationIsMissingSection:(long long)arg1;
- (_Bool)_hasLocationIsMissingSection;
- (id)_addNewPlaceQuestion;
- (void)viewDidLoad;
- (void)_send;
- (id)_sendButtonItem;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end