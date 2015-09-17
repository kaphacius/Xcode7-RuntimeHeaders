//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface YearMultipleMonthView : UIView <InfiniteScrollViewSubview>
{
    NSArray *_monthViews;
    NSCalendar *_calendar;
    YearViewYearHeader *_header;
    _Bool _headerIsInViewHierarchy;
    _Bool _containsLastMonthOfYear;
    _Bool _eligibleToShowYearNumber;
    _Bool _needToCalculateEligibleToShowYearNumber;
    EKCalendarDate *_calendarDate;
    EKUIOverlayCalendarSignificantDatesProvider *_overlaySignificantDatesProvider;
    unsigned long long _maximumNumberOfMonths;
    EKCalendarDate *_endCalendarDate;
}

+ (_Bool)_headerEligibleForCalendarDate:(id)arg1;
+ (double)_heightForViewWithVisibleHeader:(_Bool)arg1;
+ (Class)monthClass;
+ (Class)headerClass;
+ (double)heightForViewWithCalendarDate:(id)arg1;
+ (double)rightMarginAdjustment;
+ (double)leftMarginAdjustment;
+ (double)topInset;
@property(retain, nonatomic) EKCalendarDate *endCalendarDate; // @synthesize endCalendarDate=_endCalendarDate;
@property(readonly, nonatomic) unsigned long long maximumNumberOfMonths; // @synthesize maximumNumberOfMonths=_maximumNumberOfMonths;
@property(retain, nonatomic) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider; // @synthesize overlaySignificantDatesProvider=_overlaySignificantDatesProvider;
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (void).cxx_destruct;
- (void)_reloadMonthViews;
- (void)_reloadHeaderView;
- (void)_initializeMonthViews;
- (void)_initializeHeaderView;
- (struct CGSize)monthViewSubviewSize;
- (void)showYearNumberAnimated:(_Bool)arg1;
- (void)hideYearNumberAnimated:(_Bool)arg1;
- (_Bool)eligibleToShowYearNumber;
- (id)monthViewForCalendarDate:(id)arg1;
- (id)startOfMonthForPoint:(struct CGPoint)arg1;
- (_Bool)pointIsAboveMonthNameBaseline:(struct CGPoint)arg1;
- (_Bool)containsLastMonthOfYear;
- (void)localeChanged;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (void)updateToday;
- (void)pulseTodayCircle;
- (double)topInset;
- (void)layoutSubviews;
- (struct CGRect)insetBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (id)initCalendarDate:(id)arg1 calendar:(id)arg2 maximumNumberOfMonths:(unsigned long long)arg3;

@end