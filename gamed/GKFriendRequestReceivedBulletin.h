//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKFriendRequestReceivedBulletin : GKFriendRequestBulletin
{
    _Bool _isNewAccount;
    NSString *_requestID;
    NSString *_selfPlayerID;
    NSString *_originatorEmail;
    NSString *_originatorMessage;
}

+ (id)URLPathForFriendRequestFromPlayerID:(id)arg1;
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property _Bool isNewAccount; // @synthesize isNewAccount=_isNewAccount;
@property(retain) NSString *originatorMessage; // @synthesize originatorMessage=_originatorMessage;
@property(retain) NSString *originatorEmail; // @synthesize originatorEmail=_originatorEmail;
@property(retain) NSString *selfPlayerID; // @synthesize selfPlayerID=_selfPlayerID;
@property(retain) NSString *requestID; // @synthesize requestID=_requestID;
- (id)description;
- (void)dealloc;
- (id)initWithPushNotification:(id)arg1;
- (_Bool)isPlayerInAddressBook:(id)arg1;
- (void)declineFriendRequst;
- (void)handleDeclineAction;
- (void)acceptFriendRequest;
- (void)handleAcceptAction;
- (void)handleAction:(id)arg1;
- (void)assembleBulletin;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;
- (void)primeFriendRequestCacheWithHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end