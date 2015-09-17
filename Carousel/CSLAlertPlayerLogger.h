//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLAlertPlayerLogger : NSObject
{
    NSMutableArray *_playedSystemSoundIDLog;
    NSObject<OS_dispatch_queue> *_queue;
    id <NACVolumeController> _volumeController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addToLog:(id)arg1;
- (void)_writeEventToAggD:(id)arg1 withSuffix:(id)arg2;
- (void)_backlightDidTurnOn:(id)arg1;
- (id)playedSystemSoundIDLog;
- (void)audioServicesPlaySystemSoundWithVibration:(unsigned long)arg1 withBehavior:(unsigned long)arg2 andVibrationPattern:(id)arg3;
- (void)audioServicesPlaySystemSound:(unsigned long)arg1;
- (id)init;

@end