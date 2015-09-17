//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkNavigationDistanceLabel : UIView <StarkDistanceLabel>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    int _detail;
    double _remainingDistance;
    UIFont *_topFont;
    UIFont *_bottomFont;
}

@property(retain, nonatomic) UIFont *bottomFont; // @synthesize bottomFont=_bottomFont;
@property(retain, nonatomic) UIFont *topFont; // @synthesize topFont=_topFont;
@property(nonatomic) int detail; // @synthesize detail=_detail;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
- (void).cxx_destruct;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_updateValues;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)_labelOffset;
- (void)_updateStyling;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end