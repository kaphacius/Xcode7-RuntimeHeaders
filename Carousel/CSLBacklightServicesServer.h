//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBacklightServicesServer : NSObject <NSXPCListenerDelegate, IOSSHLBacklightObserver>
{
    int _oldBacklightState;
    int _currentBacklightState;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_connections;
    NSXPCListener *_xpcListener;
    unsigned int _nextConnectionStartingAssertionReason;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (void)_xpcConnectionInterruption:(id)arg1;
- (void)_xpcRefreshClientWithID:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_notifyClientsOfBacklightChanges;
- (void)backlight:(id)arg1 didTurnOn:(_Bool)arg2 forReason:(unsigned int)arg3;
- (void)backlight:(id)arg1 willBeOn:(_Bool)arg2 forReason:(unsigned int)arg3;
- (_Bool)anyConnectionActivelyPreventingSleep;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end