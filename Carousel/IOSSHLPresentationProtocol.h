//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IOSSHLPresentationProtocol <NSObject, IOSSHLPresentationContext>
- (void)deactivate;
- (void)activate;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)suppressesNotifications;
- (_Bool)orientationChangedEventsEnabled;
- (_Bool)allowsEventOnlySuspension;
- (int)statusBarStyle;
@end