//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersCategoryListController : RemindersListController <RemindersColorPickerViewControllerDelegate, RemindersListEditControlDelegate, UIGestureRecognizerDelegate>
{
    UIView *_dividerLine;
    RemindersListEditControl *_colorControl;
    RemindersListEditControl *_shareControl;
    NSLayoutConstraint *_colorControlHeightConstraint;
    NSLayoutConstraint *_shareControlHeightConstraint;
    RemindersColorPickerViewController *_colorPicker;
    RemindersCreationFooterView *_footerView;
    _Bool _needsScrollToHighlightedReminder;
    EKReminder *_highlightedReminder;
    NSString *_highlightedTerm;
    NSLayoutConstraint *_leftMarginConstraint;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)contextManager;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)saveNewReminder:(id)arg1;
- (void)createNewReminder;
- (void)editNewReminder;
- (void)fadeOutHighlightedReminder;
- (void)setHighlightedReminder:(id)arg1 forSearchTerm:(id)arg2;
- (void)scrollToHighlightedReminderIfNecessary;
- (void)_scrollToMakeHighlightedReminderVisible;
- (void)commandI:(id)arg1;
- (void)commandN:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)sharingFinished;
- (void)sharingCanceled;
- (void)colorPickerFinished:(id)arg1;
- (void)colorPickerCanceled;
- (void)colorChanged:(id)arg1;
- (void)editControlTapped:(id)arg1;
- (void)setShareControlVisible:(_Bool)arg1;
- (void)setColorControlVisible:(_Bool)arg1;
- (void)headerEditButtonTapped;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cardDidPresent;
- (void)setStatus:(int)arg1 animated:(_Bool)arg2;
- (void)setCardState:(unsigned long long)arg1 reloadModelIfNeeded:(_Bool)arg2;
- (void)modelFinishedInitialLoad:(id)arg1;
- (void)reloadChangedObjectIDs;
- (void)handleRefresh;
- (void)checkOrUncheckReminder:(id)arg1;
- (id)dueDateStringForReminder:(id)arg1 date:(id)arg2;
- (void)fontSizeChanged;
- (void)configureHeaderView:(id)arg1;
- (_Bool)showAccountName;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_tablePressed:(id)arg1;
- (void)_tableTapped:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)displayedCalendar;
@property(retain, nonatomic) EKCalendar *calendar;
- (id)targetTopConstraintView;
- (void)setupConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end