//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CompactMonthWeekView : UIView <InfiniteScrollViewSubview>
{
    EKCalendarDate *_startCalendarDate;
    EKCalendarDate *_endCalendarDate;
    NSCalendar *_calendar;
    long long _cellToStartDrawingIn;
    _Bool _containsFirstDayOfMonth;
    UIView *_grayLine;
    UILabel *_monthNameLabel;
    NSArray *_dayNumbers;
    NSArray *_dayNumberOverlays;
    NSArray *_eventMarkers;
    CompactMonthWeekDayNumber *_todayDayNumber;
    struct CGSize _monthNameLabelFittingSize;
    CompactMonthWeekDayNumber *_selectedWeekNumber;
    CompactMonthWeekDayOverlay *_todayDayNumberOverlay;
    CompactMonthWeekDayOverlay *_selectedDayNumberOverlay;
    EKUITodayCirclePulseView *_todayPulse;
    _Bool _containsToday;
    UILabel *_weekNumberLabel;
    _Bool _darkBackgroundMode;
    _Bool _compressedVerticalMode;
    _Bool _compressedHorizontalMode;
    _Bool _enableLayerAnimationsDuringLayout;
    _Bool _disableTodayPulse;
    _Bool _showWeekNumber;
    _Bool _temporarilyHideWeekNumber;
    NSArray *_eventCounts;
}

+ (double)_topOfMonthNameLabelToGrayLineDistance;
+ (id)_monthNameFont;
+ (double)_monthNameLabelBaselineToGrayLineDistance;
+ (double)_dayNumberBaselineToGrayLineDistance:(_Bool)arg1;
+ (double)_grayLineHeight;
+ (double)_spaceBelowGrayLineHeight:(_Bool)arg1;
+ (double)heightForViewThatContainsFirstDayOfMonth:(_Bool)arg1 compressed:(_Bool)arg2;
+ (_Bool)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1;
+ (double)_topInsetForViewThatContainsFirstDayOfMonth:(_Bool)arg1 cellToStartDrawingIn:(long long)arg2;
+ (long long)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;
+ (double)eventMarkerDiameter:(_Bool)arg1;
+ (id)eventMarkerColor;
+ (struct CGPoint)eventMarkerPositionForIndex:(long long)arg1 compressed:(_Bool)arg2 showingOverlay:(_Bool)arg3 showingWeekNumbers:(_Bool)arg4 withBoundsWidth:(double)arg5;
+ (double)headerHeight;
+ (double)cellHeightWithVerticalCompression:(_Bool)arg1;
+ (double)circleDiameterWithOverlayLarge;
+ (double)circleDiameterWithOverlay;
+ (double)circleDiameterCompressed;
+ (double)circleDiameter;
+ (double)heightForViewWithCalendarDate:(id)arg1 compressed:(_Bool)arg2;
+ (double)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;
+ (double)_firstColumnXOriginForBounds:(struct CGRect)arg1 weekNumbersInsetEnabled:(_Bool)arg2;
+ (double)columnWidthForViewWithBounds:(struct CGRect)arg1 onWeekend:(_Bool)arg2 weekNumbersInsetEnabled:(_Bool)arg3;
+ (double)weekNumbersInset:(_Bool)arg1;
+ (struct CGRect)_boundsInsetWithMarginsForBounds:(struct CGRect)arg1;
+ (struct UIEdgeInsets)layoutMarginsForBounds:(struct CGRect)arg1;
+ (id)weekNumberColorForThisWeek:(_Bool)arg1;
+ (id)weekNumberFont;
@property(nonatomic) _Bool temporarilyHideWeekNumber; // @synthesize temporarilyHideWeekNumber=_temporarilyHideWeekNumber;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) _Bool disableTodayPulse; // @synthesize disableTodayPulse=_disableTodayPulse;
@property(nonatomic) _Bool enableLayerAnimationsDuringLayout; // @synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout;
@property(nonatomic) _Bool compressedHorizontalMode; // @synthesize compressedHorizontalMode=_compressedHorizontalMode;
@property(nonatomic) _Bool compressedVerticalMode; // @synthesize compressedVerticalMode=_compressedVerticalMode;
@property(nonatomic) _Bool darkBackgroundMode; // @synthesize darkBackgroundMode=_darkBackgroundMode;
@property(retain, nonatomic) NSArray *eventCounts; // @synthesize eventCounts=_eventCounts;
- (void).cxx_destruct;
- (unsigned long long)_monthLabelColumnIndex;
- (id)monthNameLabel;
- (unsigned long long)_daysInAWeek;
- (void)_reloadMonthNameLabel;
- (void)setGrayLineAlpha:(double)arg1;
- (void)setSelectedDay:(id)arg1 animated:(_Bool)arg2;
- (void)setEventCounts:(id)arg1 animated:(_Bool)arg2;
- (void)_clearTodayHighlight;
- (void)resetTodayBits;
- (void)_updateWeekNumberAnimated:(_Bool)arg1;
- (void)setCalendarDate:(id)arg1;
- (double)_circleYOffsetFromTopForDiameter:(double)arg1;
- (struct CGPoint)positionOfCircleInCellWithWidth:(double)arg1 circleSize:(struct CGSize)arg2;
- (void)adjustHighlight:(id)arg1 forDay:(id)arg2;
- (long long)indexForPoint:(struct CGPoint)arg1;
- (id)dayForPoint:(struct CGPoint)arg1;
- (id)dayNumberCellFrames;
- (struct CGRect)frameForTodayHighlight;
- (_Bool)isTodayHighlightVisible;
- (struct CGRect)rectForCells;
- (long long)daysInMonth;
@property(readonly, nonatomic) _Bool containsFirstDayOfMonth;
- (void)haltTodayPulse;
- (void)pulseTodayCircle;
- (double)topInset;
- (id)endCalendarDate;
- (id)calendarDate;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_initializeMonthNameLabel;
- (void)_initializeEventMarkers;
- (void)_updateDayNumberOverlays;
- (void)_initializeDayNumbers;
- (void)_initializeGrayLine;
- (id)description;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(_Bool)arg3 darkBackgroundMode:(_Bool)arg4;

@end