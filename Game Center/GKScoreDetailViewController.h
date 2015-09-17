//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKScoreDetailViewController : GKBubbleDetailViewController <GKFriendRequestComposeViewControllerDelegate>
{
    id <GKScoreDetailDelegate> _delegate;
    GKTextBubbleControl *_shareBubble;
    GKTextBubbleControl *_challengeBubble;
    GKTextBubbleControl *_requestBubble;
    GKLeaderboard *_leaderboard;
    GKScore *_score;
}

+ (id)scoreDetailWithScore:(id)arg1 leaderboard:(id)arg2;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKTextBubbleControl *requestBubble; // @synthesize requestBubble=_requestBubble;
@property(retain, nonatomic) GKTextBubbleControl *challengeBubble; // @synthesize challengeBubble=_challengeBubble;
@property(retain, nonatomic) GKTextBubbleControl *shareBubble; // @synthesize shareBubble=_shareBubble;
@property id <GKScoreDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_gkRepresentedObject;
- (void)pushLeftBubble;
- (void)pushRightBubble;
- (void)didTouchRequestBubble;
- (void)friendRequestComposeViewControllerWasCancelled:(id)arg1;
- (void)friendRequestComposeViewControllerDidFinish:(id)arg1;
- (void)didTouchShareBubble;
- (id)sharePopoverSourceView;
- (void)didTouchChallengeBubble;
- (void)configureForScoreAndLeaderboard;
- (void)loadView;
- (id)player;
- (void)dealloc;
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;

@end