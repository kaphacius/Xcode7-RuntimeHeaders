//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DKPeriod : NSObject <DKPeriodType>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)periodWithStart:(id)arg1 end:(id)arg2;
+ (id)periodWithEnd:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 duration:(double)arg2;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (_Bool)contains:(id)arg1;
@property(readonly) double duration;
- (id)initWithStart:(id)arg1 andEnd:(id)arg2;

@end