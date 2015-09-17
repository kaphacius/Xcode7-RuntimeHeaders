//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoSearchViewController : PUICTableViewController <PUICQuickboardViewControllerDelegate, PUICDictationViewControllerDelegate, NMGizmoXPC, NanoAppChromeModeController>
{
    PUICDictationViewController *_dictationViewController;
    STSiriContext *_siriContext;
    NSXPCConnection *_connection;
    NSArray *_fixedCellTypes;
    NSArray *_history;
    _Bool _hasBookmarks;
    NSString *_lastText;
    NanoAppChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (void)_debug_fetchStateSnapshot:(CDUnknownBlockType)arg1;
- (void)historyUpdated;
- (void)pinsUpdated;
- (void)bookmarksUpdated;
- (id)_cellForFixedCellType:(unsigned int)arg1;
- (id)_cellForPlaceRecent:(id)arg1;
- (id)_cellForSearchRecent:(id)arg1;
- (id)_cellForDirectionsRecent:(id)arg1;
- (void)_performActionForFixedCell:(unsigned int)arg1;
- (void)_performActionForDirectionsRecent:(id)arg1;
- (void)_performActionForSearchRecent:(id)arg1;
- (void)_performActionForPlaceRecent:(id)arg1;
- (void)_updateDestinationsWithHistoryData:(id)arg1;
- (void)_updateBookmarksWithCount:(unsigned int)arg1;
- (void)_setupDictationController;
- (id)contextForDictationViewController:(id)arg1;
- (void)dictationViewController:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 query:(id)arg3 languageModel:(id)arg4;
- (void)quickboardInputCancelled:(id)arg1;
- (void)quickboard:(id)arg1 didPickAnimatedEmojiWithFileURL:(id)arg2;
- (void)quickboard:(id)arg1 textEntered:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_updateFixedCells;
- (void)viewDidLoad;
- (id)viewController;
- (void)populateMapsActivity:(id)arg1 withFidelity:(unsigned int)arg2;
- (_Bool)showsMapView;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end