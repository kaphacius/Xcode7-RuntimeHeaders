//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NWMScheduledCondition : NSObject
{
    unsigned char _cond;
    id _target;
    SEL _action;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)trigger;
- (_Bool)clear;
- (_Bool)set;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3;

@end