//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol ADSSession_RPC
- (void)_priv_removeRecordForAccountWithIdentifier:(NSNumber *)arg1;
- (void)_remote_acquireMatchSlotWithBodyParameters:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)_remote_reportClientEvent:(NSData *)arg1;
- (void)_remote_reportStationTileImpression:(NSData *)arg1;
- (void)_remote_optimalTransmissionWindowDidOpen;
- (void)_remote_didFinishAdPlaybackForSlot:(NSString *)arg1 skippedCount:(long long)arg2;
- (void)_remote_willBeginAdPlaybackForSlot:(NSString *)arg1 visuallyEngaged:(_Bool)arg2 adSpaceType:(int)arg3;
- (void)_remote_requestAdsForSlot:(ADAdSlot *)arg1 completionHandler:(void (^)(NSArray *, NSArray *))arg2;
- (void)_remote_didStopPlaybackOnStation:(NSData *)arg1;
- (void)_remote_didBeginPlaybackOnStation:(NSData *)arg1 song:(NSData *)arg2;
- (void)_remote_didEnterStation:(NSData *)arg1;
- (void)_remote_setVisuallyEngaged:(_Bool)arg1;
- (void)_remote_disablePolicyEngine;
- (void)_remote_enablePolicyEngine;
- (void)_remote_requestAdsForContext:(NSString *)arg1 serverURL:(NSURL *)arg2 creativeTypes:(NSArray *)arg3 completionHandler:(void (^)(NSArray *, NSString *, NSError *))arg4;
- (void)_remote_reportPrerollRequest;
- (void)_remote_addClientToSegments:(NSArray *)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (void)_remote_requestAttributionDetailsWithBlock:(void (^)(NSDictionary *))arg1;
- (void)_remote_lookupAdConversionDetails:(void (^)(NSDate *, NSDate *))arg1;
- (void)_remote_determineAppInstallAttributionWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)_remote_setClientLinkedOnVersion:(NSString *)arg1;
@end