//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol GKRemoteViewControllerDelegate <NSObject>
@property(retain, nonatomic) GKGame *game;
- (void)setInitialState:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)setValue:(NSObject *)arg1 forKeyPath:(NSString *)arg2 withReply:(void (^)(_Bool))arg3;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;

@optional
- (void)hostApp:(NSString *)arg1 grantingAccessExtensionSandbox:(NSString *)arg2 replyWithEndpoint:(void (^)(NSXPCListenerEndpoint *))arg3;
- (void)nudge;
@end