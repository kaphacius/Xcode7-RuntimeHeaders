//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedTableViewController : UITableViewController <FRArticlePageViewDataSource, FRArticlePageViewDelegate, FRStackViewControllerAnimatorContext>
{
    _Bool _loading;
    _Bool _showingFiltered;
    _Bool _showingHistoryView;
    id <FRFeldsparContext> _feldsparContext;
    FRFeedViewContext *_feedContext;
    FCFeedDescriptor *_feedDescriptor;
    FCStreamingResults *_headlineResults;
    NSArray *_data;
    NSArray *_filteredData;
    unsigned long long _currentPage;
    FRNoContentView *_noContentView;
    id <UIViewControllerAnimatedTransitioning> _animatorForNextTransition;
    NSObject<OS_dispatch_group> *_tableViewReloadGroup;
    id <UIViewControllerPreviewing> _previewingContext;
}

+ (id)storyboardIdentifier;
+ (id)viewControllerForFeedDescriptor:(id)arg1 feldsparContext:(id)arg2 feedContext:(id)arg3 storyboard:(id)arg4;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *tableViewReloadGroup; // @synthesize tableViewReloadGroup=_tableViewReloadGroup;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animatorForNextTransition; // @synthesize animatorForNextTransition=_animatorForNextTransition;
@property(retain, nonatomic) FRNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) _Bool showingHistoryView; // @synthesize showingHistoryView=_showingHistoryView;
@property(nonatomic) _Bool showingFiltered; // @synthesize showingFiltered=_showingFiltered;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *filteredData; // @synthesize filteredData=_filteredData;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) FCStreamingResults *headlineResults; // @synthesize headlineResults=_headlineResults;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FRFeedViewContext *feedContext; // @synthesize feedContext=_feedContext;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)notifyWhenAvailabilityInOfflineModeHasBeenDeterminedUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)canProvideAvailabilityInOfflineModeSynchronously;
- (_Bool)isAvailableInOfflineMode;
- (void)filterData:(id)arg1;
- (void)updateTableWithChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)articlePageViewController:(id)arg1 viewControllerWithHeadline:(id)arg2 indexPath:(id)arg3;
- (id)articlePageViewController:(id)arg1 headlineForIndexPath:(id)arg2;
- (id)articlePageViewController:(id)arg1 headlineForHeadlineID:(id)arg2;
- (id)articlePageViewController:(id)arg1 indexPathForHeadlineWithHeadlineID:(id)arg2;
- (unsigned long long)numberOfArticlesForArticlePageViewController:(id)arg1;
- (void)articlePageViewController:(id)arg1 didSelectHeadline:(id)arg2 atIndexPath:(id)arg3;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (id)animatorForDismissingViewController:(id)arg1;
- (id)animatorForPresentingViewController:(id)arg1;
- (void)_showArticleHeadline:(id)arg1 forIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_viewControllerForRowAtIndexPath:(id)arg1;
- (id)_wrapViewController:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRefresh:(id)arg1;
- (unsigned long long)indexOfHeadline:(id)arg1;
- (id)headlineAtIndex:(id)arg1;
- (void)update;
- (void)reload:(unsigned long long)arg1;
- (void)showArticleWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_fixupNavBarSize;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long fr_stackViewControllerPresentationStyle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end