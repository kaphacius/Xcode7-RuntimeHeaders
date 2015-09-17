//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CMOdometerData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_distance;
    NSNumber *_currentSpeed;
    NSNumber *_averageSpeed;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(readonly, nonatomic) NSNumber *currentSpeed; // @synthesize currentSpeed=_currentSpeed;
@property(readonly, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5;

@end