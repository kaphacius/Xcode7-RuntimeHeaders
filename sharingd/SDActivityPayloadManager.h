//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDActivityPayloadManager : NSObject <IDSServiceDelegate>
{
    IDSService *_activityService;
    IDSService *_encryptionService;
    _Bool _restrictionsDisabled;
    SDActivityAdvertiser *_advertiser;
    SDActivityScanner *_scanner;
    NSMutableDictionary *_persistedKeyRequests;
    NSMutableArray *_cachedActivityPayloads;
    NSMutableDictionary *_uniqueIDToKeyReplyDate;
    NSMutableDictionary *_messageIdentifierToKeyRequestRecords;
    NSMutableDictionary *_messageIdentifierToReplyRecords;
    NSMutableDictionary *_messageIdentifierToRequestRecords;
}

+ (id)sharedPayloadManager;
- (void).cxx_destruct;
- (void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;
- (id)protobufDataFromRequest:(id)arg1;
- (id)requestFromProtobufData:(id)arg1;
- (id)dataFromUUID:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)newAdvertisementWithPayloadRequest:(id)arg1;
- (void)payloadReplyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)payloadRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)encryptionKeyReplyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)encryptionKeyRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 activityIdentifier:(id)arg3 activityPayload:(id)arg4;
- (void)sendActivityPayloadReplyRequestToDevice:(id)arg1 withActivityIdentifier:(id)arg2 advertisementPayload:(id)arg3 activityPayload:(id)arg4 requestIdentifier:(id)arg5 error:(id)arg6;
- (void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 canDoCloudReply:(_Bool)arg2 encryptionKey:(id)arg3 requestIdentifier:(id)arg4;
- (_Bool)sendEncryptionKeyRequestRecord:(id)arg1;
- (void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)savePersistedKeyRequests;
- (void)loadPersistedKeyRequests;
- (void)confirmFunctioningEncryptionKeyFromDeviceIdentifier:(id)arg1;
- (void)resetStateTwoRequested:(id)arg1;
- (void)debugInfoRequested:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)requestTimedOut:(id)arg1;
- (id)idsDeviceWithUniqueID:(id)arg1;
@property(readonly) IDSDevice *defaultPairedDevice;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end