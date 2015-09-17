//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRSystemTraceRun : XRKEventsRun
{
    NSMutableArray *_graphedAggregators;
    XRIntKeyedDictionary *_threads;
    XRIntKeyedDictionary *_processes;
    XRIntKeyedDictionary *_categories;
    NSPointerArray *_categoriesBySN;
    NSMutableArray *_displayableProcesses;
    NSMutableArray *_displayableThreads;
    XRKEventsProcess *_scalingProcessAggregator;
    NSMapTable *_scalingThreadAggregatorByProcessAggregator;
    XRKEventsProcess *_allProcesses;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _dataLock;
    XRKEventsIndex *_index;
    XRKEventsIndexQueryBatch *_unprocessedBatch;
    NSMutableDictionary *_batchResultsByToken;
}

+ (BOOL)isSchedulingEvent:(struct XRKEventIntermediate *)arg1;
+ (BOOL)isSyscallEvent:(struct XRKEventIntermediate *)arg1;
+ (BOOL)isVMFaultEvent:(struct XRKEventIntermediate *)arg1;
+ (BOOL)_isProcessExitEvent:(struct XRKEventIntermediate *)arg1;
+ (unsigned short)engineeringType;
+ (id)colorForCategory:(unsigned int)arg1;
+ (id)eventImage;
+ (BOOL)isStateBased;
+ (BOOL)isEventBased;
+ (id)syscallEventCodes;
+ (id)schedulerEventCodes;
+ (id)vmFaultEventCodes;
@property(readonly) XRKEventsProcess *allProcesses; // @synthesize allProcesses=_allProcesses;
- (void).cxx_destruct;
- (id)provideCursorForNavigator:(id)arg1;
- (BOOL)canProvideCursorForNavigator:(id)arg1;
- (id)resultsForQueryToken:(id)arg1;
- (id)prepareQuery:(id)arg1;
- (id)index;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)toggleGraphingOfAggregator:(id)arg1;
- (id)graphedAggregators;
- (void)removeObjectFromDisplayableThreadsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inDisplayableThreadsAtIndex:(unsigned long long)arg2;
- (id)objectInDisplayableThreadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfDisplayableThreads;
@property(readonly, getter=_displayableThreadsProxy) NSMutableArray *displayableThreads;
- (void)removeObjectFromDisplayableProcessesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inDisplayableProcessesAtIndex:(unsigned long long)arg2;
- (id)objectInDisplayableProcessesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfDisplayableProcesses;
@property(readonly, getter=_displayableProcessesProxy) NSMutableArray *displayableProcesses;
- (void)addThreadAndSetDisplayable:(id)arg1 toProcess:(id)arg2;
- (id)processesList;
- (id)threadsList;
- (void)setScalingThreadAggregator:(id)arg1 forProcess:(id)arg2;
- (void)setScalingProcessAggregator:(id)arg1;
- (id)scalingThreadAggregateForProcess:(id)arg1 preferringMaximumWithComparator:(CDUnknownBlockType)arg2;
- (id)scalingProcessAggregatePreferringMaximumWithComparator:(CDUnknownBlockType)arg1;
- (id)mnemonicForEventWithCode:(CDUnion_f44b072f)arg1;
- (id)mnemonicForSignpost:(long long)arg1;
- (void)_updateThreadsAndProcessState:(struct XRKEventIntermediate *)arg1;
- (void)thread:(id)arg1 recommendsAction:(const struct XRThreadRecommendedAction *)arg2 previousThreadOnCPU:(id)arg3;
- (id)processWithPid:(int)arg1 atTimestamp:(unsigned long long)arg2;
- (id)processWithPid:(int)arg1 generation:(unsigned int)arg2;
- (id)lastProcessWithPid:(int)arg1;
- (id)lastProcessWithPid:(int)arg1 allowCreate:(BOOL)arg2;
- (id)threadWithIdentifier:(unsigned long long)arg1;
- (id)threadWithIdentifier:(unsigned long long)arg1 pid:(int)arg2 startTime:(unsigned long long)arg3 allowCreate:(BOOL)arg4;
- (id)categoryWithIdentifier:(unsigned int)arg1 relativeToThread:(id)arg2 allowCreate:(BOOL)arg3;
- (id)mnemonicForCategoryWithSerialNumber:(unsigned int)arg1;
- (BOOL)categorySerialNumberIsID;
- (id)categoryRollupForSerialNumber:(unsigned int)arg1;
- (id)categoryRollups;
- (id)createNewCategoryRollupWithID:(unsigned int)arg1;
- (id)createNewProcessWithPid:(int)arg1 generation:(unsigned int)arg2;
- (id)createNewThreadWithTid:(unsigned long long)arg1 pid:(int)arg2 execName:(id)arg3 startTime:(unsigned long long)arg4;
- (void)_setThreadNameForTid:(unsigned long long)arg1 usingBacktrace:(id)arg2 atTimestamp:(unsigned long long)arg3;
- (void)resymbolicationDidComplete;
- (id)requiredKEventCodes;
- (void)calculateAggregates;
- (void)startRecording;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end