//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XRCallTreeDataSource <NSObject>
- (XRBacktraceAggregator *)backtracesForCategory:(NSString *)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;

@optional
- (NSArray *)processCategoriesForPid:(int)arg1;
- (NSArray *)provideCategories;
@end