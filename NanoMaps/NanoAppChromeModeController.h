//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NanoAppChromeModeController <NanoChromeModeController, NSObject>
@property(nonatomic) NanoAppChromeViewController *chromeViewController;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id <NanoAppChromeModeController>)arg2;
- (void)becomeCurrentModeWithViews:(id <MapsChromeViews>)arg1 animated:(_Bool)arg2 state:(NSDictionary *)arg3 fromMode:(id <NanoAppChromeModeController>)arg4;

@optional
- (_Bool)allowsEdgeSwipePop;
- (void)actionControllerWillAppear;
- (_Bool)supportsLocateOnLaunch;
- (_Bool)shouldAllowActivityContinuation;
- (void)populateMapsActivity:(MapsActivity *)arg1 withFidelity:(unsigned int)arg2;
- (void)statusBarWasTapped;
- (PUICActionGroup *)actionGroup;
@end