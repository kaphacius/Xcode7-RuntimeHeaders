//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHAudioRouteManager : NSObject <NACRoutingControllerDelegate>
{
    id <NACRoutingController> _companionRoutingController;
    _Bool _observingAudioRoutes;
    BluetoothDevice *_BTDeviceAfterConnect;
    TUCall *_TUCallAfterConnect;
}

+ (id)sharedCompanionAudioRouteController;
- (void).cxx_destruct;
- (void)_connectionFailed;
- (void)_bluetoothManagerDeviceConnectFailedNotification:(id)arg1;
- (void)_bluetoothManagerDeviceConnectSuccessNotification:(id)arg1;
- (void)_systemAudioRouteFailedToConnectNotification:(id)arg1;
- (void)_bluetoothDeviceFailedToConnectNotification:(id)arg1;
- (void)_virtualAudioRoutesDidChangeNotification:(id)arg1;
- (void)routingControllerDidUpdateAvailableRoutes:(id)arg1;
- (id)gizmoHFPBluetoothDevices;
- (id)_gizmoSpeaker;
- (void)_moveTUCall:(id)arg1 toConnectedLocalHFPBluetoothDevice:(id)arg2;
- (void)moveTUCall:(id)arg1 toLocalHFPBluetoothDevice:(id)arg2;
- (void)moveCallToCompanionAudioRoute:(id)arg1;
- (id)companionAudioRouteMostCloselyMatchingLocalBluetoothDevice:(id)arg1;
- (void)endObservingAudioRoutes;
- (void)beginObservingAudioRoutes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end