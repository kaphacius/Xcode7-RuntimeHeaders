//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface OGLATraceSample : OGLASample
{
    unsigned int _fenum;
    unsigned int _functionFlags;
    unsigned int _index;
    id <CommonRawStack> _backtrace;
    NSString *_traceline;
    unsigned long long _threadID;
    unsigned long long _gcdQueueID;
}

@property(nonatomic) unsigned long long gcdQueueID; // @synthesize gcdQueueID=_gcdQueueID;
@property(nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned int functionFlags; // @synthesize functionFlags=_functionFlags;
@property(nonatomic) unsigned int fenum; // @synthesize fenum=_fenum;
@property(retain, nonatomic) NSString *traceline; // @synthesize traceline=_traceline;
@property(retain, nonatomic) id <CommonRawStack> backtrace; // @synthesize backtrace=_backtrace;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end