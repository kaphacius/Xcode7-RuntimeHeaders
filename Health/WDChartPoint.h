//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol WDChartPoint <NSObject>
@property(retain, nonatomic) WDChartPointAnnotation *annotation;
@property(retain, nonatomic) id yValue;
@property(retain, nonatomic) NSDate *xValue;
- (double)yValueFloatRepresentation;
- (NSNumber *)averageYValue;
- (NSNumber *)minYValue;
- (NSNumber *)maxYValue;
- (NSArray *)allYValues;
- (NSNumber *)yValueForKey:(id <NSCopying>)arg1;
@end