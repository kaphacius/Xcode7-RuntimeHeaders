//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NDTStatsAdaptor <NSObject>
- (NSString *)name;
- (void)statsLogger:(NDTStatsLogger *)arg1 recordEventForKey:(NSString *)arg2;
- (void)statsLogger:(NDTStatsLogger *)arg1 recordValue:(unsigned long long)arg2 forKey:(NSString *)arg3;
@end