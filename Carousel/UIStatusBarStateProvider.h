//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol UIStatusBarStateProvider <NSObject>
- (void)getStatusBarData:(CDStruct_7953f186 *)arg1;
- (void)removeStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;
- (void)addStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;

@optional
- (NSString *)doubleHeightStatusStringForStyle:(int)arg1;
@end