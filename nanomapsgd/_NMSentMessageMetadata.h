//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NMSentMessageMetadata : NSObject
{
    int _type;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    unsigned int _payloadSize;
    double _timestamp;
}

@property(nonatomic) unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end