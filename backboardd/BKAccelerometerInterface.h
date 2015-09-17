//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BKAccelerometerInterface : NSObject <BKEventClientDelegate>
{
    NSLock *_lock;
    NSMutableSet *_accelerometerClients;
    NSMutableSet *_cachedClients;
    BKAccelerometerClient *_systemAppOrientationClient;
    double _samplingInterval;
}

+ (id)sharedInstance;
- (void)orientationChanged:(int)arg1 orientationLocked:(_Bool)arg2;
- (void)accelerometerDataReceived:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 type:(unsigned int)arg5;
- (void)clientDied:(id)arg1;
- (void)systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;
- (void)_lock_systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;
- (void)_lock_clearSystemAppOrientationClient;
- (void)bksAccelerometerClientRequestedOrientationEvents:(id)arg1 enabled:(_Bool)arg2 passiveEvents:(_Bool)arg3 auditToken:(const CDStruct_6ad76789 *)arg4;
- (void)bksAccelerometerClientRequestedAccelerometerEvents:(id)arg1 updateInterval:(double)arg2 xThreshold:(float)arg3 yThreshold:(float)arg4 zThreshold:(float)arg5 auditToken:(const CDStruct_6ad76789 *)arg6;
- (void)_handleAccelerometerRequestForPort:(id)arg1 auditToken:(const CDStruct_6ad76789 *)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)_lock_existingClientForPort:(unsigned int)arg1;
- (void)_updateSettings;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end