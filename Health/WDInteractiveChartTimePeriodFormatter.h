//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDInteractiveChartTimePeriodFormatter : WDInteractiveChartDataFormatter
{
    WDTimePeriodDataUnitValueFormatter *_timePeriodFormatter;
    double _timePeriod;
}

@property(nonatomic) double timePeriod; // @synthesize timePeriod=_timePeriod;
- (void).cxx_destruct;
- (id)_prefixStringWithDataUnitGroup:(id)arg1;
- (id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnitGroup:(id)arg4;

@end