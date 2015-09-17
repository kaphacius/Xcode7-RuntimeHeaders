//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDashboardAchievementDetailViewController : GKDetailViewController
{
    GKAchievementIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_progressLabel;
    UILabel *_disabledLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *disabledLabel; // @synthesize disabledLabel=_disabledLabel;
@property(nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (void)configureForAchievements;
- (id)preferredFocusedView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2;

@end