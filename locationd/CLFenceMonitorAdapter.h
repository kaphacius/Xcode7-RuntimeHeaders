//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLFenceMonitorAdapter : NSObject <CLRoutineMonitorClientProtocol>
{
    _Bool _valid;
    struct CLFenceMonitor *_fenceMonitor;
}

@property(nonatomic) struct CLFenceMonitor *fenceMonitor; // @synthesize fenceMonitor=_fenceMonitor;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onScenarioTrigger:(id)arg1;
- (id)initWithFenceMonitor:(struct CLFenceMonitor *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end