//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController
{
    _Bool _isInGame;
    _Bool _shouldShowPlay;
    _Bool _shouldShowQuit;
    _Bool _didFloatInBubbles;
    _Bool _isCompactHeader;
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *_delegateWeak;
    GKTurnBasedMatch *_match;
    GKGame *_game;
    GKTurnBasedParticipantsDataSource *_participantsDataSource;
    GKTurnBasedMatchDetailHeaderView *_headerView;
}

@property(nonatomic) _Bool isCompactHeader; // @synthesize isCompactHeader=_isCompactHeader;
@property(nonatomic) _Bool didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property(retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource; // @synthesize participantsDataSource=_participantsDataSource;
@property(nonatomic) _Bool shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) _Bool isInGame; // @synthesize isInGame=_isInGame;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (id)_gkRepresentedObject;
- (void)buyButtonPressed:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)setActionButtonEnabled:(_Bool)arg1;
- (void)setupActionButton;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)animateOutBubbleWithFocus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)floatInBubbles;
- (void)didUpdateModel;
- (void)setNeedsFloatInBubbles;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeader;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didEnterNoContentState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureMatchDetailHeader:(id)arg1;
- (void)configureViewFactories;
- (void)configureDataSource;
@property(nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)init;

@end