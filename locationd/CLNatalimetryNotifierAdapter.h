//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLNatalimetryNotifierAdapter : CLNotifierServiceAdapter <CLNatalimetryNotifierProtocol>
{
}

+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
+ (_Bool)isSupported;
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)doAsync:(CDUnknownBlockType)arg1;
- (struct CLNatalimetryNotifier *)adaptee;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end