//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFBTSDevicesModel : NSObject <NPRFBluetoothManagerDelegate>
{
    id <NPRFBTSDevicesModelDelegate> _delegate;
    NSMutableDictionary *_mDevicesDict;
    NSMutableArray *_mDevices;
    NSMutableArray *_mHealthDevices;
    NPRFBluetoothManagerFacade *_bluetoothManager;
}

@property(retain, nonatomic) NPRFBluetoothManagerFacade *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(retain, nonatomic) NSMutableArray *mHealthDevices; // @synthesize mHealthDevices=_mHealthDevices;
@property(retain, nonatomic) NSMutableArray *mDevices; // @synthesize mDevices=_mDevices;
@property(retain, nonatomic) NSMutableDictionary *mDevicesDict; // @synthesize mDevicesDict=_mDevicesDict;
@property(retain, nonatomic) id <NPRFBTSDevicesModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)acceptSSPForDevice:(id)arg1 error:(int)arg2;
- (void)stopHealthSessions;
- (void)startHealthSessions;
- (void)disconnectDevice:(id)arg1;
- (void)connectDevice:(id)arg1;
- (void)powerDidChanged:(_Bool)arg1;
- (void)numericComparisionForDevice:(id)arg1 comparisionValue:(id)arg2;
- (void)pinRequestForDevice:(id)arg1;
- (void)discoveryStopped;
- (void)discoveryStarted;
- (void)connectionChanged:(unsigned int)arg1;
- (void)cleanDeviceList;
- (void)stopDiscoverDevices;
- (void)startDiscoverDevices;
- (_Bool)containsDevice:(id)arg1;
- (void)updateDevice:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
@property(readonly, nonatomic) _Bool discovering;
@property(readonly, nonatomic) _Bool powerAndActive;
@property(readonly, nonatomic) _Bool power;
- (id)deviceForKey:(id)arg1;
- (id)devicesDict;
- (void)sortHealthDevices;
- (void)sortDevices;
- (CDUnknownBlockType)sortComparator;
@property(readonly, nonatomic) NSArray *healthDevices;
@property(readonly, nonatomic) NSArray *devices;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end