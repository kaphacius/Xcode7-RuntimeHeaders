//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDSource : NSObject
{
    HKSource *_source;
    HKDevice *_device;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) HKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 device:(id)arg2;

@end