//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;
- (void)setSAPversion:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setInternal:(_Bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setStoreMode:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
@end