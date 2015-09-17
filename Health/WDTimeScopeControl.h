//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDTimeScopeControl : UIControl
{
    NSArray *_timeScopes;
    long long _selectedTimeScope;
}

+ (id)controlWithFrame:(struct CGRect)arg1 style:(long long)arg2 timeScopes:(id)arg3;
@property(nonatomic) long long selectedTimeScope; // @synthesize selectedTimeScope=_selectedTimeScope;
- (void).cxx_destruct;
- (long long)_indexForTimeScope:(long long)arg1;
- (long long)_timeScopeForIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2;

@end