//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUIOnWristStatusViewController : NSObject
{
    UIWindow *_window;
    CSLPITimer *_loggingTimer;
}

@property(retain, nonatomic) CSLPITimer *loggingTimer; // @synthesize loggingTimer=_loggingTimer;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_logOnWristDuration:(int)arg1;
- (id)_getSunriseDate;
- (void)loggingTimerFired;
- (void)_setLoggingTimer;
- (void)_updateViewForOnWristManager:(id)arg1;
- (void)_handleOnWristStateChanged:(id)arg1;
- (void)dealloc;
- (void)_displayPreferencesChanged;
- (void)_reloadDisplayPreferences;
- (id)init;

@end