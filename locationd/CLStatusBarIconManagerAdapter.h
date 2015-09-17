//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLStatusBarIconManagerAdapter : CLIntersiloService <CLStatusBarIconManagerProtocol>
{
    struct CLStatusBarIconManager *_manager;
}

+ (_Bool)isSupported;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
@property(nonatomic) struct CLStatusBarIconManager *manager; // @synthesize manager=_manager;
- (void)setStatusBarIconForEntityClass:(int)arg1 visible:(_Bool)arg2;
- (_Bool)syncgetStatusBarIconForEntityClass:(int)arg1;
- (int)syncgetIconState;
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