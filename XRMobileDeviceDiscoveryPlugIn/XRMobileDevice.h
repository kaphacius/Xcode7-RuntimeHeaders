//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRMobileDevice : XRRemoteDevice
{
    CDStruct_fe0e0a34 _wiredDevice;
    CDStruct_fe0e0a34 _wirelessDevice;
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;
    NSString *_wirelessServiceName;
    BOOL _deviceIsUnactivated;
    BOOL _isAncientDevice;
    BOOL _appleInternalExists;
    BOOL _preferWireless;
    int _developerMode;
    NSAlert *_markDeviceForDevelopmentAlert;
    NSString *_amCompanionDeviceIdentifier;
    BOOL _hasTimeDifference;
    double _mobileDeviceTimeDifference;
    int _interfaceCount;
    DTXChannel *_wirelessControlChannel;
}

@property(retain) DTXChannel *wirelessControlChannel; // @synthesize wirelessControlChannel=_wirelessControlChannel;
@property(copy, nonatomic) NSString *wirelessServiceName; // @synthesize wirelessServiceName=_wirelessServiceName;
@property(copy) NSString *companionDeviceIdentifier; // @synthesize companionDeviceIdentifier=_amCompanionDeviceIdentifier;
@property(nonatomic) BOOL preferWireless; // @synthesize preferWireless=_preferWireless;
- (void).cxx_destruct;
- (void)unpairFromCompanion:(id)arg1;
- (void)pairWithCompanion:(id)arg1;
- (id)externalSDKPath;
- (id)internalSDKPath;
- (id)versionDirectory;
- (void)fixupSymbolicator:(struct _CSTypeRef)arg1;
- (void)markForDevelopment;
- (void)mountDeveloperDiskImage:(struct _AMDevice *)arg1;
- (BOOL)isAppleInternal;
- (BOOL)isAncientDevice;
- (BOOL)isUnactivatedDevice;
- (BOOL)isDevelopmentDevice;
- (void)teardownConnection;
- (void)prepareConnection:(id)arg1;
- (BOOL)isOnLine;
- (BOOL)updateInstalledExecutables;
- (id)makeConnection;
- (void)alternateAction;
- (id)alternateText;
- (id)_legacyWirelessDeviceName;
- (BOOL)_legacyWirelessEnabled;
- (BOOL)_supportsLegacyWireless;
- (void)assumeProperties:(id)arg1;
- (void)interfaceDropped:(int)arg1;
- (void)disconnect;
- (struct _AMDServiceConnection *)_registerForAppNotifications:(struct _AMDevice *)arg1;
- (BOOL)_reloadDeviceInformation:(struct _AMDevice *)arg1;
- (void)refreshDeviceInformation;
- (id)initWithDevice:(struct _AMDevice *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)_accessDeviceWithInterface:(int)arg1 block:(CDUnknownBlockType)arg2 andPostChangeSessionBlock:(CDUnknownBlockType)arg3;
- (void)_accessDevice:(CDUnknownBlockType)arg1;

@end