//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIViewControllerRestoration, UIPopoverPresentationControllerDelegate>
{
    _Bool _showExistingMatches;
    _Bool _showPlay;
    _Bool _showQuit;
    id <GKTurnBasedMatchesViewControllerDelegate> _delegateWeak;
    GKGame *_game;
    GKMatchRequest *_matchRequest;
    GKCollectionViewController *_masterViewController;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    long long _maxMatchesSeen;
    NSString *_matchIDWaitingForTurnEvent;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSString *matchIDWaitingForTurnEvent; // @synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent;
@property(nonatomic) long long maxMatchesSeen; // @synthesize maxMatchesSeen=_maxMatchesSeen;
@property(retain, nonatomic) GKTurnBasedMatchesDataSource *matchesDataSource; // @synthesize matchesDataSource=_matchesDataSource;
@property(nonatomic) _Bool showQuit; // @synthesize showQuit=_showQuit;
@property(nonatomic) _Bool showPlay; // @synthesize showPlay=_showPlay;
@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(nonatomic) GKCollectionViewController *masterViewController; // @synthesize masterViewController=_masterViewController;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDetailViewControllerAnimated:(_Bool)arg1;
- (void)dismissDetailViewControllerInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentNavigationControllerInPopover:(id)arg1 fromCell:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showDetailForMatch:(id)arg1;
- (void)showMatch:(id)arg1;
- (void)acceptInviteForMatch:(id)arg1;
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;
- (void)launchGameAndShowMatch:(id)arg1;
- (void)detailPressedForMatch:(id)arg1;
- (void)addPressed;
- (void)cancelButtonPressed;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)showInviteControllerAnimated:(_Bool)arg1;
- (void)refreshMaster;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didEnterNoContentState;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)configureDataSource;
- (_Bool)isInGame;
@property(nonatomic) id <GKTurnBasedMatchesViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)initWithMatchRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end