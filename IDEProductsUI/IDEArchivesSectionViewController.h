//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEArchivesSectionViewController : IDEProductSectionViewController <DVTReplacementViewDelegate>
{
    BOOL _vendorIsBusy;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_inspectableObserver;
    DVTObservingToken *_selectedProductObserver;
}

+ (BOOL)canShowContentForProduct:(id)arg1;
@property(retain) DVTObservingToken *selectedProductObserver; // @synthesize selectedProductObserver=_selectedProductObserver;
@property(retain) DVTObservingToken *inspectableObserver; // @synthesize inspectableObserver=_inspectableObserver;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property BOOL vendorIsBusy; // @synthesize vendorIsBusy=_vendorIsBusy;
- (void).cxx_destruct;
- (BOOL)shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)_updateTeams;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
@property(readonly) IDEArchivesViewController *archivesViewController;
- (void)_updateSectionView;
- (BOOL)showEmptyView;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end