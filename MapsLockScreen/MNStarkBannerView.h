//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNStarkBannerView : MNBannerView
{
    MNGuidanceManeuverView *_maneuverView;
    UILabel *_distanceLabel;
    UILabel *_instructionsLabel;
    UIImageView *_shieldImageView;
    struct CGPoint _shieldCenterPoint;
}

- (void).cxx_destruct;
- (void)_setInstructionsText:(id)arg1;
- (id)_instructionsTextAttributes;
- (void)_setDistanceText:(id)arg1;
- (id)_textShadow;
- (struct CGPoint)_centerPointOffset;
- (void)layoutSubviews;
- (void)_updateDuringLayoutInstructionsFromItemForAvailableWidth:(double)arg1;
- (void)updateFromBannerItem;
@property(readonly, nonatomic) MNNavManeuverBannerItem *navManeuverBannerItem;
- (id)initWithContext:(id)arg1;

@end