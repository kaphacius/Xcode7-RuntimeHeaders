//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKRealTimeMultiplayerAcceptBulletin : GKRealTimeMultiplayerActionBulletin
{
    NSNumber *_blobType;
    NSNumber *_relayType;
    NSData *_relayConnectionID;
    NSData *_relayTranscationID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
    NSData *_relayToken;
}

@property(retain) NSData *relayToken; // @synthesize relayToken=_relayToken;
@property(retain) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(retain) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(retain) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(retain) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(retain) NSData *relayTranscationID; // @synthesize relayTranscationID=_relayTranscationID;
@property(retain) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(retain) NSNumber *blobType; // @synthesize blobType=_blobType;
- (void)handleAction:(id)arg1;
- (void)assembleBulletin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushNotification:(id)arg1;
- (_Bool)isAccept;
- (id)notificationName;
- (id)debugLine;
- (id)aggregateDictionaryKey;

@end