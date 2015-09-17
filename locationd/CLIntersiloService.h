//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol>
{
    _Bool _valid;
    CLSilo *_silo;
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
}

+ (_Bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) CLIntersiloInterface *outboundInterface; // @synthesize outboundInterface=_outboundInterface;
@property(readonly, nonatomic) CLIntersiloInterface *inboundInterface; // @synthesize inboundInterface=_inboundInterface;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isHydrated;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (id)initInSilo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end