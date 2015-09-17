//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLCompanionTransport : NSObject <IDSServiceDelegate>
{
    _Bool _isConnected;
    IDSDevice *_pairedDevice;
    IDSService *_idsService;
    CDUnknownBlockType _receivedMessageHandler;
    CDUnknownBlockType _connectionUpdateHandler;
    double _pairedDeviceLastSeenTimestamp;
}

+ (id)computeMD5:(id)arg1;
@property(copy) CDUnknownBlockType connectionUpdateHandler; // @synthesize connectionUpdateHandler=_connectionUpdateHandler;
@property(copy) CDUnknownBlockType receivedMessageHandler; // @synthesize receivedMessageHandler=_receivedMessageHandler;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property double pairedDeviceLastSeenTimestamp; // @synthesize pairedDeviceLastSeenTimestamp=_pairedDeviceLastSeenTimestamp;
@property(retain) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleCompanionPingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleMotionCalsUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCoarseElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCoarseElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCoarseElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleTrackUpdateData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleTrackUpdateUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleTrackUpdateSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerBatchMode:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCyclingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCyclingUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleOdometerCyclingSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)receivedMessage:(unsigned short)arg1 data:(id)arg2 identifierString:(id)arg3;
- (void)sendMessage:(id)arg1 type:(unsigned short)arg2 priority:(int)arg3 fireAndForget:(_Bool)arg4 encrypt:(_Bool)arg5 bypassConnectionCheck:(_Bool)arg6 timeout:(double)arg7;
- (void)updateIDSStatusAndNotify;
- (void)updateIDSStatus;
- (void)dealloc;
- (id)initWithSilo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end