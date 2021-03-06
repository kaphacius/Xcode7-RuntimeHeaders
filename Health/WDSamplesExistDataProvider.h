//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDSamplesExistDataProvider : WDDataProvider
{
    HKQuery *_currentValueQuery;
    HKQuery *_historicalDataQuery;
    HKQuery *_secondaryValueQuery;
    UIImage *_whiteCircle;
}

- (void).cxx_destruct;
- (void)_refreshHistoricalDataWithSamples:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id)arg5;
- (void)_historicalDataMatchingPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_historicalDataQuery;
- (void)_updateMostRecentObject;
- (id)_generateCurrentValueQuery;
- (void)_stopSecondaryValueQuery;
- (void)_stopHistoricalDataQuery;
- (void)_stopCurrentValueQuery;
- (void)_restartSecondaryValueQuery;
- (void)_restartHistoricalDataQuery;
- (void)_restartCurrentValueQuery;
- (id)_mostRecentBeginningOfPeriodFromSamples:(id)arg1;
- (id)_mostRecentPositiveOvulationTestResultFromSamples:(id)arg1;
- (void)_updateSecondaryValueWithType:(id)arg1 predicate:(id)arg2;
- (id)secondaryValueQuery;
- (id)secondaryValueText;
- (void)stopQueries;
- (void)restartQueries;
- (id)accentPointsFromSamples:(id)arg1 accentYValue:(long long)arg2;
- (_Bool)shouldPrefixSecondaryValueWithDot;
- (_Bool)shouldDisplaySecondaryValue;
- (_Bool)shouldDisplayPrimaryValue;
- (id)predicateForSecondaryValue;
- (id)secondaryValueFormatString;
- (id)initWithDataUnit:(id)arg1 chartingRules:(id)arg2 unitController:(id)arg3 healthStore:(id)arg4;

@end