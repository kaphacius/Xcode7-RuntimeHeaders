//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NDCallbackQueueDelegate <NSObject>
- (NSString *)descriptionForTaskWithIdentifier:(unsigned int)arg1;
- (id <NSXPCProxyCreating><NDBackgroundSessionClient>)getClientProxy;
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned int)arg1;
- (void)errorOccurredDuringAuthCallbackDelivery:(NSError *)arg1 completionHandler:(void (^)(int, NSURLCredential *))arg2;
- (void)errorOccurredDuringFinishedCallbackDelivery:(NSError *)arg1;
- (void)wakeUpClient;
@end