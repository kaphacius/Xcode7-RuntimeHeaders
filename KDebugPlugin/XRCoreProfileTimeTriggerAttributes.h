//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRCoreProfileTimeTriggerAttributes : NSObject <XRCoreProfileTriggerAttributes>
{
    int _pid;
    unsigned int _sampleRateInMicroSeconds;
    BOOL _allThreadStates;
    BOOL _needsUserCallstack;
    BOOL _needsKernelCallstack;
}

- (id)createCoreProfileTriggerConfig;
- (BOOL)attemptMergeWithTriggerAttributes:(id)arg1;
- (id)initWithAttributes:(id)arg1 tableName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end