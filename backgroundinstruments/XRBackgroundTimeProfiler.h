//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRBackgroundTimeProfiler : NSResponder <XRBackgroundActions, XRUIModelChangeObserver>
{
    NSMutableDictionary *_profileOpsByPid;
    XRUnimportedProfileListModel *_unimportedTraces;
    NSTimer *_cullingTimer;
}

- (void).cxx_destruct;
- (void)modelDidChange:(id)arg1;
- (void)endTimeProfile:(id)arg1;
- (void)scheduleTimeProfile:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end