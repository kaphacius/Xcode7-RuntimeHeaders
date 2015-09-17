//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKTurnBasedInviteViewController : GKMultiplayerViewController
{
    id <GKTurnBasedInviteViewControllerDelegate> _delegateWeak;
    NSMutableDictionary *_inviteMessageDictionary;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSMutableDictionary *inviteMessageDictionary; // @synthesize inviteMessageDictionary=_inviteMessageDictionary;
- (void)invitePlayers:(id)arg1;
- (void)playNow;
- (void)createGameWithPlayersToInvite:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatchID:(id)arg1;
- (void)cancel;
- (void)cleanupStateForCancelOrError;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) id <GKTurnBasedInviteViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end