//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol UIApplicationDelegatePrivate <NSObject>

@optional
- (void)_application:(UIApplication *)arg1 handleSiriTask:(AFSiriTask *)arg2;
- (void)_application:(UIApplication *)arg1 didReceiveViewServiceRequestForViewControllerClassName:(NSString *)arg2;
- (void)application:(UIApplication *)arg1 needsUserChoiceForUbiquitousStorage:(void (^)(_Bool))arg2;
- (_Bool)_applicationLaunchesIntoPortrait:(UIApplication *)arg1;
- (void)_application:(UIApplication *)arg1 statusBarTouchesEnded:(UIEvent *)arg2;
- (void)application:(UIApplication *)arg1 didSnoozeLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didFinishLaunchingSuspendedWithOptions:(NSDictionary *)arg2;
@end