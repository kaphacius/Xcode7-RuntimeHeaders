//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NRDiscoveryProxy : NRXPCProxy <NRDeviceDiscoveryControllerXPCDaemonDelegate>
{
    unsigned long long _counter;
}

@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
- (void)xpcEndDiscovery;
- (void)xpcBeginDiscovery;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (id)initWithConnection:(id)arg1 andEntitlements:(id)arg2 andDelegate:(id)arg3;

@end