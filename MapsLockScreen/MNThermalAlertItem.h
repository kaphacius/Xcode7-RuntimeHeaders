//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNThermalAlertItem : SBAlertItem
{
}

- (int)alertPriority;
- (void)performUnlockAction;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)reappearsAfterLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)localizedCoolDownString;

@end