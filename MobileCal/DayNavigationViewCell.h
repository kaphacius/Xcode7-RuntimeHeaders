//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DayNavigationViewCell : UIControl
{
    _Bool _circled;
    _Bool _isToday;
    _Bool _isWeekend;
    NSDate *_date;
    NSObject<DayNavigationViewCellDelegate> *_delegate;
}

+ (double)circleDiameter;
+ (void)localeChanged;
@property(nonatomic) __weak NSObject<DayNavigationViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isWeekend; // @synthesize isWeekend=_isWeekend;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) _Bool circled; // @synthesize circled=_circled;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)setOverlayShowsMonth:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWeekNumber;
- (void)updateOverlay;
- (id)description;
- (void)setDate:(id)arg1 forceStringUpdate:(_Bool)arg2;
- (void)stopPulsing;
- (void)pulseToday;
- (void)prepareForReuse;
- (void)setCircled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end