//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRCoreProfileTapPlugIn : XRTapPlugIn
{
}

- (void)voteForEpoch:(id)arg1 token:(id)arg2;
- (void)endRecording:(id)arg1;
- (void)unpauseRecording:(id)arg1;
- (void)pauseRecording:(id)arg1;
- (id)startRecordingTableIDs:(id)arg1 runNumber:(long long)arg2 trace:(id)arg3;
- (BOOL)canRecordTableIDs:(id)arg1 runNumber:(long long)arg2 trace:(id)arg3;

@end