//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitDirectionsOriginDestinationCell : TransitDirectionsInfoCell
{
    NSLayoutConstraint *_topToLabelConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_yCenterLabelConstraint;
    NSLayoutConstraint *_centeringViewWidthConstraint;
    UIView *_centeringPinView;
    id <TransitDirectionsOriginDestinationCellDelegate> _delegate;
    UILabel *_placeLabel;
    UIImageView *_pinImageView;
}

+ (id)_primaryFont;
+ (id)fontsForInstructions;
@property(retain, nonatomic) UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UILabel *placeLabel; // @synthesize placeLabel=_placeLabel;
@property(nonatomic) __weak id <TransitDirectionsOriginDestinationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setLeadingInstructionMargin:(double)arg1;
- (void)configureWithItem:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (double)_topToFirstBaselineDistance;
- (double)_lastBaselineToBottomDistance;
- (id)_initialConstraints;
- (void)setSeparatorStyle:(long long)arg1;
- (void)_createSubviews;

@end