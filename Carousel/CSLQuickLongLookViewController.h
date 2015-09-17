//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLQuickLongLookViewController : UIViewController <CUISAlertHeaderViewDelegate, UIScrollViewDelegate, CUISBulletinQuickLongLook>
{
    _Bool _scrollToBottomOnResize;
    NSString *_alertTitle;
    NSString *_message;
    UIImage *_attachment;
    id <CUISAlertHeaderViewDataSource> _headerDataSource;
    id <CUISBulletinQuickLongLookDelegate> _delegate;
    CUISBulletinActionMenu *_menu;
    CUISAlertLongLookContentView *_contentView;
    CUISAlertHeaderView *_header;
    CUISAlertChevronView *_topChevron;
    UIScrollView *_scrollView;
}

+ (unsigned int)headerStyleForPresentationMode:(unsigned int)arg1;
+ (unsigned int)presentationModeForHeaderStyle:(unsigned int)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CUISAlertChevronView *topChevron; // @synthesize topChevron=_topChevron;
@property(retain, nonatomic) CUISAlertHeaderView *header; // @synthesize header=_header;
@property(retain, nonatomic) CUISAlertLongLookContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CUISBulletinActionMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <CUISBulletinQuickLongLookDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CUISAlertHeaderViewDataSource> headerDataSource; // @synthesize headerDataSource=_headerDataSource;
@property(retain, nonatomic) UIImage *attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
- (void).cxx_destruct;
- (void)setActionMenu:(id)arg1;
- (void)animateSlideDownDismissLongLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateDismissLongLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToLongLookIfReadyWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInLongLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateInQuickLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setQuickLongLookDelegate:(id)arg1;
- (unsigned int)presentationMode;
- (void)setPresentationMode:(unsigned int)arg1;
- (void)_addContentViewIfNeeded;
- (_Bool)_draggedPastTopThreshold;
- (_Bool)_scrollViewPastTopThreshold:(float)arg1;
- (void)_handleScrollDidEnd:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapIconInHeaderView:(id)arg1;
- (void)_scrollToBottom;
- (void)_updateHeaderFrame;
- (void)viewDidLayoutSubviews;
- (void)_updateCellWidth;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 attachment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end