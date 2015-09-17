//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKDashboardHeaderView : UICollectionReusableView
{
    _Bool _didSetupLikeButton;
    GKGameRecord *_gameRecord;
    UISegmentedControl *_segmentedControl;
    GKRatingControl *_ratingControl;
    UILabel *_ratingLabel;
    GKFacebookLikeButton *_likeButton;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool didSetupLikeButton; // @synthesize didSetupLikeButton=_didSetupLikeButton;
@property(nonatomic) GKFacebookLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(nonatomic) GKRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)ratePressed:(id)arg1;
- (void)setupLikeButton;
- (void)awakeFromNib;
- (void)dealloc;

@end