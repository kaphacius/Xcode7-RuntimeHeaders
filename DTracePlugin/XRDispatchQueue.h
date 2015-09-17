//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRDispatchQueue : XRDispatchObject <NSCoding, XRDispatchData>
{
    NSString *_label;
    NSString *_pointer;
    unsigned long long _creationTime;
    unsigned long long _deletionTime;
    id _createTrace;
    id _deleteTrace;
    struct QueueStats _displayStats;
    unsigned int _width;
    struct QueueStats _overallStats;
    unsigned int _serial;
    NSMutableArray *_queueEvents;
    NSMutableArray *_blockInvokeEvents;
    XRQueueEvent *_currentEvent;
    NSMutableArray *_items;
    NSMutableArray *_pendingItems;
    struct __CFDictionary *_pushStackCounts;
    id _displayMaxPushStack;
    NSString *_displayMaxPushBlock;
    id _overallMaxPushStack;
    NSString *_overallMaxPushBlock;
    int _overallMaxPushCount;
    int _displayMaxPushCount;
    BOOL _selected;
    BOOL _modified;
    BOOL _eventModified;
    unsigned long long _displaySync;
    unsigned long long _overallSync;
    struct XRTimeRange _selectedTimeRange;
    NSString *_identifier;
}

+ (int)serialNumberFromIdentifier:(id)arg1;
+ (id)queuePointerFromIdentifier:(id)arg1;
+ (void)initialize;
+ (int)dataType;
@property unsigned int width; // @synthesize width=_width;
@property(readonly) NSArray *queueEvents; // @synthesize queueEvents=_queueEvents;
@property BOOL selected; // @synthesize selected=_selected;
@property unsigned long long deletionTime; // @synthesize deletionTime=_deletionTime;
@property BOOL modified; // @synthesize modified=_modified;
@property unsigned int serial; // @synthesize serial=_serial;
@property(readonly) unsigned long long creationTime; // @synthesize creationTime=_creationTime;
@property(retain) id deleteTrace; // @synthesize deleteTrace=_deleteTrace;
@property(readonly) NSArray *blockInvokeEvents; // @synthesize blockInvokeEvents=_blockInvokeEvents;
@property(retain) id createTrace; // @synthesize createTrace=_createTrace;
@property(retain) NSString *pointer; // @synthesize pointer=_pointer;
@property(retain) NSString *label; // @synthesize label=_label;
- (void)setCurrentEventModified;
- (id)currentEvent;
- (void)setOverallStats:(struct QueueStats)arg1 atTimestamp:(unsigned long long)arg2;
- (struct QueueStats)overallStats;
- (id)identifier;
- (void)addBlockInvokeEvent:(id)arg1;
- (void)popItemComplete:(id)arg1 forThread:(id)arg2 duration:(unsigned long long)arg3 cpuUsage:(float)arg4 atTimestamp:(unsigned long long)arg5;
- (id)popItemBegin:(id)arg1 forThread:(id)arg2 atTimestamp:(unsigned long long)arg3;
- (BOOL)validatePendingObject:(id)arg1 remove:(BOOL)arg2;
- (void)pushItem:(id)arg1 atTimestamp:(unsigned long long)arg2 stack:(id)arg3 sync:(BOOL)arg4 pending:(BOOL)arg5;
- (void)updatePushStackCount:(id)arg1 forBlock:(id)arg2 atTimestamp:(unsigned long long)arg3;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)transferEventAtTimestampFinal:(unsigned long long)arg1;
- (void)transferEventAtTimestamp:(unsigned long long)arg1;
@property(readonly) int maxPushCount; // @dynamic maxPushCount;
@property(readonly) NSString *maxPushBlock; // @dynamic maxPushBlock;
@property(readonly) id maxPushStack; // @dynamic maxPushStack;
- (void)setSync:(unsigned long long)arg1 atTimestamp:(unsigned long long)arg2;
@property(readonly) unsigned long long sync; // @dynamic sync;
@property(readonly) unsigned long long latency; // @dynamic latency;
@property(readonly) unsigned long long totalWorktime; // @dynamic totalWorktime;
@property(readonly) unsigned int itemsProcessed; // @dynamic itemsProcessed;
@property(readonly) unsigned int itemCount; // @dynamic itemCount;
@property(readonly) NSString *displayPointer; // @dynamic displayPointer;
- (BOOL)isAlive;
@property(readonly) float throughput; // @dynamic throughput;
- (BOOL)isEmpty;
- (void)deleteAtTime:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 pointer:(id)arg2 timestamp:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end