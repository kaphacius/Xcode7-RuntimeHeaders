//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSDate (FRAdditions)
+ (id)randomDateBeforeNow;
+ (id)dateFromStringWithISO8601Format:(id)arg1;
+ (id)dateFromString:(id)arg1 possibleFormats:(id)arg2;
- (id)fr_localDate;
- (id)fr_gregorianLongDisplayString;
- (id)fr_gregorianMediumDisplayString;
- (id)fr_gregorianShortDisplayString;
- (void)fr_gregorianDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)stringWithISO8601Format;
- (id)stringWithFormat:(id)arg1;
@property(readonly, nonatomic) _Bool isToday;
@end