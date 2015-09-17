//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRVideoCardRun : XRRun
{
    NSArray *_availableStatistics;
    NSArray *_driverNames;
    NSArray *_availableStatisticsTransformed;
    NSMutableArray *_data;
    NSArrayController *_controller;
    NSLock *_dataLock;
    unsigned long long _baselineTime;
}

+ (unsigned long long)timeOfSample:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long baselineTime; // @synthesize baselineTime=_baselineTime;
@property(retain, nonatomic) NSArray *availableStatisticsTransformed; // @synthesize availableStatisticsTransformed=_availableStatisticsTransformed;
@property(retain, nonatomic) NSArray *driverNames; // @synthesize driverNames=_driverNames;
@property(retain, nonatomic) NSArray *availableStatistics; // @synthesize availableStatistics=_availableStatistics;
- (void).cxx_destruct;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1 forDriver:(id)arg2;
- (id)samplesIntersectingRange:(struct XRTimeRange)arg1 expandedBeginningOut:(char *)arg2;
- (id)samplesInRange:(struct XRTimeRange)arg1 filtered:(BOOL)arg2;
- (unsigned long long)indexOfSample:(id)arg1 filtered:(BOOL)arg2;
- (id)sampleAtIndex:(unsigned long long)arg1 filtered:(BOOL)arg2;
- (id)valueForStatistic:(id)arg1 atIndex:(unsigned long long)arg2 filtered:(BOOL)arg3;
- (unsigned long long)numberOfSamples:(BOOL)arg1;
- (void)addDataSample:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end