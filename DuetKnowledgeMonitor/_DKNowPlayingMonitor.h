//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DKNowPlayingMonitor : _DKMonitor
{
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)arg1 info:(id)arg2 isPlaying:(_Bool)arg3;
+ (id)_metadataFromInfo:(id)arg1 isPlaying:(_Bool)arg2;
- (void)_nowPlayingInfoDidChange:(struct _MROrigin *)arg1;
- (void)_registerForNowPlayingNotifications;
- (void)stop;
- (void)start;
- (id)init;

@end