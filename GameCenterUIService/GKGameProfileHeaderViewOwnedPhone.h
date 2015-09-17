//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameProfileHeaderViewOwnedPhone : GKGameProfileHeaderView
{
    _Bool _playerIsUnderage;
    GKFacebookLikeButton *_likeButton;
    GKRatingControl *_ratingControl;
    GKLabel *_nameLabel;
    GKHairlineView *_verticalRule;
    UIView *_ratingSpacerLeft;
    UIView *_ratingSpacerRight;
}

@property(retain, nonatomic) UIView *ratingSpacerRight; // @synthesize ratingSpacerRight=_ratingSpacerRight;
@property(retain, nonatomic) UIView *ratingSpacerLeft; // @synthesize ratingSpacerLeft=_ratingSpacerLeft;
@property(retain, nonatomic) GKHairlineView *verticalRule; // @synthesize verticalRule=_verticalRule;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool playerIsUnderage; // @synthesize playerIsUnderage=_playerIsUnderage;
@property(retain, nonatomic) GKRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(retain, nonatomic) GKFacebookLikeButton *likeButton; // @synthesize likeButton=_likeButton;
- (void)rateGame;
- (void)updateRating;
- (void)didUpdateModel;
- (void)applyConstraints;
- (void)applyCenteredRatingControlConstraint;
- (void)applyRatingLabelConstraints;
- (void)applyRatingControlVerticalPositioning;
- (void)applyLikeButtonAndVerticalRuleVerticalPositioning;
- (void)applyRatingAndLikeButtonConstraints;
- (void)applyIconAndNameConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end