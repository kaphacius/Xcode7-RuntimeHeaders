//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NRStateMachineDelegate <NSObject>
- (void)processEvent:(NSString *)arg1;
- (void)pushVersion4CompatibilityMessageIfNeeded;
- (void)activateDevice:(NSUUID *)arg1;
- (_Bool)isInternalInstall;
- (void)startRecovery;
- (_Bool)hasRecoverySteps;
- (void)setRedisplayRunBridgeDialogTimer;
- (void)clearRedisplayRunBridgeAlertTimer;
- (_Bool)isDeviceUnlocked;
- (void)clearPairingAgentDelegate;
- (void)setPairingAgentDelegate;
- (long long)minPairingCompatibilityVersion;
- (long long)maxPairingCompatibilityVersion;
- (void)updateLastUnpairReason:(unsigned long long)arg1;
- (NSUUID *)getPairingID;
- (NSString *)_pathToNanoRegistryStateDirectory;
- (NRRecoveryManager *)sharedRecoveryManager;
- (void)unregisterAccountFromiCloud;
- (void)sendXPCBTPairRequestMessage:(NSUUID *)arg1;
- (void)sendXPCCompatibilityStateDidChangeMessage:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)requestGizmoTransitionToCompatibilityState:(unsigned short)arg1;
- (void)displayRunBridgeDialog;
- (void)displayUpdateCompanionDialog;
- (void)IDSLocalSetupUnpairStart;
- (void)setBridgeBadge;
- (void)clearBridgeBadge;
- (_Bool)isFakePairingEnabled;
- (void)IDSSetTrafficMode:(unsigned short)arg1;
- (void)IDSConnectPairedDevice:(NSUUID *)arg1;
- (void)deleteAccounts;
- (void)unpairBluetoothDevicesWithPeers:(NSArray *)arg1 andQueue:(NSObject<OS_dispatch_queue> *)arg2 andCompletion:(void (^)(_Bool))arg3;
- (void)getBluetoothPairedPeersWithQueue:(NSObject<OS_dispatch_queue> *)arg1 andCompletion:(void (^)(_Bool, NSArray *))arg2;
- (void)sendXPCOOBKeyChanged:(NSData *)arg1;
- (NSData *)getOOBKey;
- (void)beginDiscovery;
- (void)sendRemoteUnpairingDidBeginNotification;
- (NSString *)getAdvertisedNameFromDevice:(NSUUID *)arg1;
- (void)clearStateMachineTimeout:(NSString *)arg1;
- (void)createStateMachineTimeout:(NSString *)arg1 withDuration:(double)arg2;
- (void)resumeStateMachineTimeout:(NSString *)arg1;
- (void)suspendStateMachineTimeout:(NSString *)arg1;
- (void)clearStateMachineTimeouts;
- (void)updateDeviceAdvertisedName:(NSUUID *)arg1 withAdvertisedName:(NSString *)arg2;
- (void)IDSLocalSetupComplete;
- (void)setOOBPairingEnabled:(_Bool)arg1;
- (void)beginBackup;
- (void)notifyPairingBeginning:(NSUUID *)arg1;
- (void)createDiscoveredDevice:(NSUUID *)arg1 withAdvertisedName:(NSString *)arg2 withBluetoothPeer:(CBPeer *)arg3;
- (void)createDiscoveredDevice:(NSUUID *)arg1 withAdvertisedName:(NSString *)arg2;
- (_Bool)isBluetoothPaired:(NSUUID *)arg1;
- (void)notifyStateChanged;
- (_Bool)isIDSPaired:(NSUUID *)arg1;
- (void)IDSDeletePairedDevice:(NSUUID *)arg1;
- (void)IDSAddPairedDevice:(NSUUID *)arg1;
- (void)IDSLocalSetupUnpair;
- (void)IDSLocalSetupStop;
- (void)IDSLocalSetupStart;
- (void)notifyActivationBeginning:(NSUUID *)arg1;
- (void)setIsActive:(_Bool)arg1 withDeviceID:(NSUUID *)arg2;
- (void)setIsPaired:(_Bool)arg1 withDeviceID:(NSUUID *)arg2;
- (void)resetStockholm;
- (void)deleteLocalPairingStore:(NSUUID *)arg1;
- (_Bool)createLocalPairingStore:(NSUUID *)arg1;
- (void)obliterateDevice:(NSString *)arg1;
- (void)sendIDSUnpairRequest:(_Bool)arg1;
- (void)disableDaemons;
- (void)enableDaemons;
- (void)refreshPropertyCache;
- (void)removeDeviceFromPairedList:(NSUUID *)arg1;
- (void)moveDeviceToPairedList:(NSUUID *)arg1;
- (void)sendXPCDeviceNeedsPasscodeMessage:(NSUUID *)arg1 passcode:(NSNumber *)arg2;
- (void)sendXPCUnpairSuccessMessage:(NSUUID *)arg1;
- (void)sendXPCPairFailureMessage:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)sendXPCPairSuccessMessage:(NSUUID *)arg1;
- (void)failBluetoothPairingRequest:(NSUUID *)arg1;
- (void)respondToBluetoothPasscodePairingRequest:(NSUUID *)arg1 key:(NSNumber *)arg2;
- (void)respondToBluetoothOOBPairingRequest:(CBPeer *)arg1 key:(NSData *)arg2;
- (void)sendBluetoothUnpairingRequest:(NSUUID *)arg1;
- (void)cancelCompanionBluetoothPairingRequest:(CBPeripheral *)arg1;
- (void)sendCompanionBluetoothPairingRequest:(CBPeripheral *)arg1;
- (void)forceEndDiscovery;
- (void)forceEndAdvertising;
- (void)beginAdvertising:(NSString *)arg1;
@end