//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDashboardChallengeDetailViewController : GKDetailViewController
{
    _Bool _shouldShowPlay;
    id _delegate;
    GKChallenge *_challenge;
    GKAchievementIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_fromLabel;
    UIButton *_playButton;
    UIButton *_declineButton;
    GKPlayerWithSpeechBalloonView *_playerSpeechView;
    NSLayoutConstraint *_topConstraint;
    double _topMargin;
    NSLayoutConstraint *_iconHeightConstraint;
}

@property(nonatomic) NSLayoutConstraint *iconHeightConstraint; // @synthesize iconHeightConstraint=_iconHeightConstraint;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) GKPlayerWithSpeechBalloonView *playerSpeechView; // @synthesize playerSpeechView=_playerSpeechView;
@property(nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)decline:(id)arg1;
- (void)play:(id)arg1;
- (void)updateLeaderboardImage;
- (void)configureForChallenge;
- (id)preferredFocusedView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1;

@end