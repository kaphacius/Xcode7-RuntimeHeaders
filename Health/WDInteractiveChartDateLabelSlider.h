//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDInteractiveChartDateLabelSlider : UIView
{
    _Bool _needsLabelUpdate;
    NSMutableArray *_dateLabels;
    HKDateIntervalCache *_dateIntervalCache;
    long long _granularity;
    NSDate *_leftDate;
    NSDate *_rightDate;
    UIFont *_labelFont;
    UIColor *_labelColor;
    struct UIEdgeInsets _dateRangeInsets;
}

@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(readonly, nonatomic) NSDate *rightDate; // @synthesize rightDate=_rightDate;
@property(readonly, nonatomic) NSDate *leftDate; // @synthesize leftDate=_leftDate;
@property(nonatomic) struct UIEdgeInsets dateRangeInsets; // @synthesize dateRangeInsets=_dateRangeInsets;
@property(nonatomic) long long granularity; // @synthesize granularity=_granularity;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_setNeedsLabelUpdate;
- (void)_layoutDateLabels;
- (void)layoutSubviews;
- (long long)_formatTemplateForGranularity:(long long)arg1;
- (id)_dateSpacingForGranularity:(long long)arg1;
- (unsigned long long)_calendarUnitForGranularity:(long long)arg1;
- (void)setDateRange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end