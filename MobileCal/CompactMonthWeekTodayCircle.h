//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CompactMonthWeekTodayCircle : UIView
{
    EKCalendarDate *_calendarDate;
    unsigned long long _day;
    NSString *_dayString;
    UILabel *_dayLabel;
    UILabel *_overlayLabel;
    _Bool _compressed;
    _Bool _drawCircle;
    _Bool _useTodayColors;
    _Bool _showOverlay;
    UIColor *_nonTodayColor;
}

+ (id)dayOverlayFont;
+ (id)dayNumberFont;
+ (double)topOffset;
+ (double)circleDiameterWithOverlayLarge;
+ (double)circleDiameterWithOverlay;
+ (double)circleDiameterCompressed;
+ (double)circleDiameter;
@property(retain, nonatomic) UIColor *nonTodayColor; // @synthesize nonTodayColor=_nonTodayColor;
@property(nonatomic) _Bool showOverlay; // @synthesize showOverlay=_showOverlay;
@property(nonatomic) _Bool useTodayColors; // @synthesize useTodayColors=_useTodayColors;
@property(nonatomic) _Bool drawCircle; // @synthesize drawCircle=_drawCircle;
@property(nonatomic) _Bool compressed; // @synthesize compressed=_compressed;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)layoutSubviews;
- (void)_updateTextColor;
- (void)updateOverlay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)overlayString;
- (id)dayNumberString;
- (id)initWithCalendarDate:(id)arg1;

@end