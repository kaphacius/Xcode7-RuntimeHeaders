//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MonthDayNavigationTransitionView : UIView
{
    NSMutableArray *_cells;
    TopLineView *_topLine;
    _Bool _hasOverlay;
    _Bool _showWeekNumber;
    UILabel *_weekNumberLabel;
    _Bool _verticallyCompressedState;
    _Bool _debug;
    NSArray *_weekendIndices;
    long long _selectedIndex;
    long long _todayIndex;
    NSArray *_eventCounts;
    double _firstDayCellInset;
    long long _firstDayCellIndex;
    double _monthRowHeight;
    long long _firstMonthCellIndex;
    NSArray *_monthCellFrames;
    long long _monthBreakIndex;
    struct CGSize _dayCellSize;
    struct CGRect _dayFrame;
    struct CGRect _monthFrame;
}

@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) long long monthBreakIndex; // @synthesize monthBreakIndex=_monthBreakIndex;
@property(retain, nonatomic) NSArray *monthCellFrames; // @synthesize monthCellFrames=_monthCellFrames;
@property(nonatomic) long long firstMonthCellIndex; // @synthesize firstMonthCellIndex=_firstMonthCellIndex;
@property(nonatomic) double monthRowHeight; // @synthesize monthRowHeight=_monthRowHeight;
@property(nonatomic) struct CGRect monthFrame; // @synthesize monthFrame=_monthFrame;
@property(nonatomic) struct CGSize dayCellSize; // @synthesize dayCellSize=_dayCellSize;
@property(nonatomic) long long firstDayCellIndex; // @synthesize firstDayCellIndex=_firstDayCellIndex;
@property(nonatomic) double firstDayCellInset; // @synthesize firstDayCellInset=_firstDayCellInset;
@property(nonatomic) struct CGRect dayFrame; // @synthesize dayFrame=_dayFrame;
@property(retain, nonatomic) NSArray *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(nonatomic) long long todayIndex; // @synthesize todayIndex=_todayIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *weekendIndices; // @synthesize weekendIndices=_weekendIndices;
@property(nonatomic) _Bool verticallyCompressedState; // @synthesize verticallyCompressedState=_verticallyCompressedState;
- (void).cxx_destruct;
- (void)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2;
- (id)_todayCell;
- (id)_selectedCell;
- (void)_setToMonthStateAnimated:(_Bool)arg1;
- (double)_yOffsetForMonthCells;
- (void)_setToDayStateAnimated:(_Bool)arg1;
- (void)animateToMonthLayout;
- (void)animateToDayLayout;
- (void)_updateWeekendIndices;
- (void)_updateEventIndicatorDots;
- (void)completeSetup;
- (void)setUnderlineThickness:(double)arg1 forOverlayStringAtIndex:(long long)arg2;
- (void)setStrings:(id)arg1 overlayStrings:(id)arg2 weekNumberString:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end