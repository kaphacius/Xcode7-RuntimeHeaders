//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _MonthTitleView : UIView <HKCalendarMonthTitleFormatting>
{
    UIView *_dividerLine;
    UILabel *_monthTitle;
    double _topPadding;
    double _bottomPadding;
}

@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) UILabel *monthTitle; // @synthesize monthTitle=_monthTitle;
- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (id)_monthStringFromDate:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end