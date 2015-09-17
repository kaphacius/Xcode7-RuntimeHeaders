//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DayNavigationViewController : UIViewController <DayNavigationViewDelegate>
{
    CalendarModel *_model;
    DayNavigationView *_navigationView;
    _Bool _showWeekdayLabel;
    NSObject<DayNavigationViewControllerDelegate> *_delegate;
    NSObject<DayNavigationViewCellFactory> *_cellFactory;
}

@property(nonatomic) _Bool showWeekdayLabel; // @synthesize showWeekdayLabel=_showWeekdayLabel;
@property(retain, nonatomic) NSObject<DayNavigationViewCellFactory> *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(nonatomic) __weak NSObject<DayNavigationViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pulseToday;
- (void)significantTimeChangeOccurred;
- (_Bool)canAnimateToDate:(id)arg1;
- (void)setSelectedDate:(id)arg1 animated:(_Bool)arg2;
- (void)setVisible:(_Bool)arg1;
@property(nonatomic) double sideMargin;
@property(readonly, nonatomic) UILabel *weekNumberLabel;
@property(readonly, nonatomic) DayTwoPartLabel *weekdayLabel;
@property(readonly, nonatomic) DayNavigationWeekScrollView *weekScrollView;
- (void)_overlayCalendarPrefChanged;
- (void)_showWeekNumbersPrefChanged;
- (void)_timeZoneChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (_Bool)dayNavigationViewAllowedToChangeSelectedDate;
- (void)dayNavigationViewFailedToSelectDate;
- (void)dayNavigationView:(id)arg1 selectedDateChanged:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end