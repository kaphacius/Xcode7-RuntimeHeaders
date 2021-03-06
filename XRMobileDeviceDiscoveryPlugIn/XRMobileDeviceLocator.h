//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRMobileDeviceLocator : XRDeviceDiscovery <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableSet *_knownServices;
    struct _AMDeviceNotificationContext *_deviceNotificationRef;
}

+ (void)disableWirelessServiceForWiredDevice:(id)arg1;
+ (void)enableWirelessService:(id)arg1 forWiredDevice:(id)arg2;
+ (BOOL)mobileDeviceWirelessSupported;
+ (void)initialize;
- (void).cxx_destruct;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (id)deviceManagementItems;
- (id)deviceManagementName;
- (id)init;
- (id)deviceList;
- (void)stopListeningForDevices;
- (void)startListeningForDevices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end