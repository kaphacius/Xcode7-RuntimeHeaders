//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FindOnPageToolbar : UIInputView <UISearchBarDelegate>
{
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    UISearchBar *_inputBar;
    UIBarButtonItem *_inputFieldBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    NSArray *_narrowToolbarItems;
    NSArray *_standardToolbarItems;
    id <FindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    UILabel *_matchLabel;
    _Bool _editing;
    _Bool _usesNarrowLayout;
    NSString *_searchText;
}

@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (_Bool)_updateEditing:(_Bool)arg1;
- (void)_doUpdateSearchText;
- (double)_widthOfAllToolbarItemsExceptInputField;
- (void)_initializeToolbarItems;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_done;
- (void)dismiss:(id)arg1;
- (void)next:(id)arg1;
- (void)previous:(id)arg1;
- (void)updateFindOnPageDelegate;
@property(readonly, nonatomic) UITextField *inputField;
- (void)updateUI;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)_orientationDidChange:(id)arg1;
- (struct CGSize)rightContentViewSize;
- (struct CGSize)leftContentViewSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end