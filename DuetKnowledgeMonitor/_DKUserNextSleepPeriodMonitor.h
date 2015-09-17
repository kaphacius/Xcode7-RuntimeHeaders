//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DKUserNextSleepPeriodMonitor : _DKMonitor
{
    NSDictionary *_tuningDictionary;
    NSObject<_DKKnowledgeStoreExecuteProtocol> *_knowledgeStore;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
}

+ (id)eventStream;
@property(retain) _DKDataProtectionStateMonitor *dataProtectionMonitor; // @synthesize dataProtectionMonitor=_dataProtectionMonitor;
@property(retain) NSObject<_DKKnowledgeStoreExecuteProtocol> *knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain) NSDictionary *tuningDictionary; // @synthesize tuningDictionary=_tuningDictionary;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)update;
- (id)_eventWithDate:(id)arg1;
- (id)readConfigurationFromDefaults;
- (id)sanitizeTuningConfiguration:(id)arg1;
- (id)defaultTuningConfiguration;
- (id)initWithQueryExecutor:(id)arg1;
- (id)init;
- (void)registerCTSUpdateJob;
- (id)getCTSJobCriteria;

@end