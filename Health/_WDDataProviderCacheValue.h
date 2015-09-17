//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _WDDataProviderCacheValue : NSObject
{
    _Bool _hasLoadedHistoricalData;
    _Bool _hasLoadedSecondaryValues;
    NSDate *_lastUpdated;
    NSArray *_historicalData;
    long long _historicalDataState;
    NSNumber *_averageValue;
    NSNumber *_minValue;
    NSNumber *_maxValue;
    long long _secondaryValueDataState;
}

@property(nonatomic) _Bool hasLoadedSecondaryValues; // @synthesize hasLoadedSecondaryValues=_hasLoadedSecondaryValues;
@property(nonatomic) long long secondaryValueDataState; // @synthesize secondaryValueDataState=_secondaryValueDataState;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) NSNumber *averageValue; // @synthesize averageValue=_averageValue;
@property(nonatomic) _Bool hasLoadedHistoricalData; // @synthesize hasLoadedHistoricalData=_hasLoadedHistoricalData;
@property(nonatomic) long long historicalDataState; // @synthesize historicalDataState=_historicalDataState;
@property(retain, nonatomic) NSArray *historicalData; // @synthesize historicalData=_historicalData;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (void).cxx_destruct;
- (id)init;

@end