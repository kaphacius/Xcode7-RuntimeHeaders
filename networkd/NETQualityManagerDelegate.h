//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NETQualityManagerDelegate <NSObject>

@optional
- (void)handleWiFiAlternateNetworkAdviceLevelChanged:(NETQualityManager *)arg1 newAdviceLevel:(unsigned int)arg2;
- (void)handleNetworkQualityChange:(NETQualityManager *)arg1;
@end