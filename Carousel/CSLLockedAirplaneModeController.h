//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLLockedAirplaneModeController : NSObject <RadiosPreferencesDelegate>
{
    RadiosPreferences *_radiosPreferences;
    _Bool _canResetAirplaneMode;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_updateAirplaneModeIfNeeded;
- (void)airplaneModeChanged;
- (id)init;

@end