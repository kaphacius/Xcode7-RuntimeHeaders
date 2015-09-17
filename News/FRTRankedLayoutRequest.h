//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTRankedLayoutRequest : NSObject <NSCopying>
{
    NSObject<FCHeadlineProviding> *_headline;
    unsigned long long _columnSpan;
}

+ (id)requestsWithHeadline:(id)arg1 columnSpans:(id)arg2;
+ (id)requestWithHeadline:(id)arg1 columnSpan:(unsigned long long)arg2;
@property(nonatomic) unsigned long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(copy, nonatomic) NSObject<FCHeadlineProviding> *headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1 columnSpan:(unsigned long long)arg2;
- (id)init;

@end