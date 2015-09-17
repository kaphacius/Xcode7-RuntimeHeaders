//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDChartDataGroup : NSObject <WDChartDataSetDataSource, NSCopying>
{
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <WDChartDataGroupDataSource> _dataSource;
    NSArray *_dataSets;
}

@property(retain, nonatomic) NSArray *dataSets; // @synthesize dataSets=_dataSets;
@property(nonatomic) __weak id <WDChartDataGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_getPointsForSetAtIndex:(unsigned long long)arg1;
- (id)_getAnnotationForPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)_getPointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (unsigned long long)_getNumberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataSets;
- (id)dataSet:(id)arg1 annotationForPointAtIndex:(unsigned long long)arg2;
- (id)dataPointsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (id)_findMaxYValue;
- (id)_findMinYValue;
- (void)_updateMinMaxValues;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
- (void)_reloadDataSet:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeDataPointFromSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)addDataPointWithXValue:(double)arg1 yValue:(double)arg2 setIndex:(unsigned long long)arg3;
- (void)reloadDataPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)reloadDataInSetAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataSets;
- (_Bool)isEmpty;
- (id)maxXValue;
- (id)minXValue;
- (id)averageYValue;
- (id)maxYValue;
- (id)minYValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end