//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDMonthWeekView : HKCalendarWeekView
{
    NSSet *_weekendDays;
}

@property(retain) NSSet *weekendDays; // @synthesize weekendDays=_weekendDays;
- (void).cxx_destruct;
- (void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(_Bool)arg3;
- (void)selectedCalendarDay:(id)arg1;
- (void)didUpdateCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (Class)monthTitleClass;
- (Class)cellClass;
- (id)initWithDateCache:(id)arg1;

@end