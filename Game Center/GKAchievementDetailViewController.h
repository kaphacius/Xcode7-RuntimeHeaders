//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAchievementDetailViewController : GKBubbleDetailViewController
{
    _Bool _hasEligibleFriends;
    id <GKAchievementDetailDelegate> _delegate;
    GKTextBubbleControl *_shareBubble;
    GKTextBubbleControl *_challengeBubble;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

+ (id)achievementDetailWithAchievement:(id)arg1 localPlayerAchievement:(id)arg2 hasEligibleFriends:(_Bool)arg3;
+ (id)achievementDetailWithLocalAchievement:(id)arg1 hasEligibleFriends:(_Bool)arg2;
+ (Class)iconViewClass;
@property(nonatomic) _Bool hasEligibleFriends; // @synthesize hasEligibleFriends=_hasEligibleFriends;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(retain, nonatomic) GKTextBubbleControl *challengeBubble; // @synthesize challengeBubble=_challengeBubble;
@property(retain, nonatomic) GKTextBubbleControl *shareBubble; // @synthesize shareBubble=_shareBubble;
@property id <GKAchievementDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_gkRepresentedObject;
- (void)pushLeftBubble;
- (void)pushRightBubble;
- (void)didTouchShareBubble;
- (id)sharePopoverSourceView;
- (void)didTouchChallengeBubble;
- (void)configureForAchievements;
- (long long)desiredBubbles;
- (void)loadView;
- (void)dealloc;
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2 hasEligibleFriends:(_Bool)arg3;

@end