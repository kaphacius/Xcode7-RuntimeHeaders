//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TTSTimerObject : NSObject
{
    double _endTime;
    long long _intId;
    double _remainingTime;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) long long intId; // @synthesize intId=_intId;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
- (id)description;
- (void)dealloc;

@end