//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRADBatch : NSObject
{
    NSString *_identifier;
    double _timeStamp;
}

@property(readonly, nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 timeStamp:(double)arg2;

@end