//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NWMWeatherDialView : UIView
{
    _Bool _show24HourLabels;
    _Bool _allowAnimation;
    _Bool _drawCurrentTime;
    NSDate *_displayDate;
    NSTimeZone *_timeZone;
    unsigned int _forecastType;
    id <NWMWeatherDialViewDataSource> _dataSource;
    NSArray *_innerViews;
    NSArray *_outerViews;
    UIView *_centerView;
    NSTimer *_dstTransitionTimer;
    int _hour;
    int _minutes;
    double _dstTransitionTime;
}

@property(nonatomic) _Bool drawCurrentTime; // @synthesize drawCurrentTime=_drawCurrentTime;
@property(readonly, nonatomic) int minutes; // @synthesize minutes=_minutes;
@property(readonly, nonatomic) int hour; // @synthesize hour=_hour;
@property(retain, nonatomic) NSTimer *dstTransitionTimer; // @synthesize dstTransitionTimer=_dstTransitionTimer;
@property(nonatomic) double dstTransitionTime; // @synthesize dstTransitionTime=_dstTransitionTime;
@property(readonly, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(readonly, nonatomic) NSArray *outerViews; // @synthesize outerViews=_outerViews;
@property(readonly, nonatomic) NSArray *innerViews; // @synthesize innerViews=_innerViews;
@property _Bool allowAnimation; // @synthesize allowAnimation=_allowAnimation;
@property __weak id <NWMWeatherDialViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool show24HourLabels; // @synthesize show24HourLabels=_show24HourLabels;
@property(nonatomic) unsigned int forecastType; // @synthesize forecastType=_forecastType;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
- (void).cxx_destruct;
- (void)_drawDot:(struct CGContext *)arg1 radius:(float)arg2 angle:(float)arg3 size:(float)arg4 color:(id)arg5;
- (void)_drawTicks:(struct CGContext *)arg1 radius:(float)arg2 totalTicks:(unsigned int)arg3 startTick:(unsigned int)arg4 numTicks:(unsigned int)arg5 tickSize:(struct CGSize)arg6 color:(id)arg7;
- (void)_drawArc:(struct CGContext *)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 lineThickness:(float)arg5 color:(id)arg6;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGPoint dialCenter;
- (id)newInnerLabel;
- (void)_dstTransitioned:(id)arg1;
- (void)layoutSubviews;
- (struct CGPoint)_centerForCenterView:(id)arg1;
- (void)setupColorsAndFonts;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)setCenterView:(id)arg1 animated:(_Bool)arg2;
- (void)setOuterViews:(id)arg1 animated:(_Bool)arg2;
- (void)setInnerViews:(id)arg1 animated:(_Bool)arg2;
- (void)_animAddView:(id)arg1 centerPosition:(struct CGPoint)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)_animRemoveView:(id)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)localeChanged:(id)arg1;
- (void)setupForLocale;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end