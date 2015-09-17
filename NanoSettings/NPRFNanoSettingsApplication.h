//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFNanoSettingsApplication : PUICApplication <PUICApplicationDelegate>
{
    PUICNavigationController *_navigationController;
    RadiosPreferences *_radioPrefs;
    UIWindow *_window;
    NPRFTableViewController *_settingsController;
    NSUserActivity *_continuityActivity;
}

@property(retain, nonatomic) PUICNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSUserActivity *continuityActivity; // @synthesize continuityActivity=_continuityActivity;
@property(retain, nonatomic) NPRFTableViewController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)invalidateContinuityActivity;
- (void)makeContinuityActivityCurrent;
- (_Bool)isAirplaneModeOn;
- (void)handleSetRequest:(id)arg1 task:(id)arg2;
- (void)handleShowRequest:(id)arg1 task:(id)arg2;
- (void)showRootViewController;
- (void)showVoiceOverSetting;
- (void)showAirplaneSettingAndTurnOnAirplaneMode:(_Bool)arg1;
- (void)_application:(id)arg1 handleSiriTask:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)_runOpenBTListWithName:(id)arg1 options:(id)arg2;
- (void)_runScrollBTListWithName:(id)arg1 options:(id)arg2;
- (void)_runScrollAboutWithName:(id)arg1 options:(id)arg2;
- (void)_runScrollMainListWithName:(id)arg1 options:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=puic_applicationStatusBarItem) PUICApplicationStatusBarItem *applicationStatusBarItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end