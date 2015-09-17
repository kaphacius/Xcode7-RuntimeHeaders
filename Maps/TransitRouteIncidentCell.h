//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitRouteIncidentCell : TransitRoutePickingCell
{
    NSLayoutConstraint *_topToPrimaryBaselineConstraint;
    UIImageView *_incidentImageView;
    id <GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
    UILabel *_primaryLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; // @synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_updateLabelsFont;
- (void)_contentSizeCategoryDidChange;
@property(retain, nonatomic) UIColor *incidentTextColor;
- (void)_updateConstraintValues;
- (double)_topToLabelBaselineDistance;
- (void)updateConstraints;
- (id)_autolayoutConstraints;
- (void)dealloc;
- (void)_createSubviews;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end