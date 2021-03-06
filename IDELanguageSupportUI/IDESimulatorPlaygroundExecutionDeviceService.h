//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESimulatorPlaygroundExecutionDeviceService : IDEPlaygroundExecutionDeviceService <IDESimulatorPlaygroundFramebufferServiceChannelDelegate>
{
    IDESimulatorPlaygroundDeviceCommunicationService *_deviceCommunicationService;
    struct CGImage *_deviceSnapshotImage;
    IDESimulatorPlaygroundFramebufferServiceChannel *_framebufferServiceChannel;
}

+ (id)capability;
+ (id)simulatorPlaygroundExecutionDeviceServiceLogAspect;
@property(retain) IDESimulatorPlaygroundFramebufferServiceChannel *framebufferServiceChannel; // @synthesize framebufferServiceChannel=_framebufferServiceChannel;
@property struct CGImage *deviceSnapshotImage; // @synthesize deviceSnapshotImage=_deviceSnapshotImage;
@property(retain) IDESimulatorPlaygroundDeviceCommunicationService *deviceCommunicationService; // @synthesize deviceCommunicationService=_deviceCommunicationService;
- (void).cxx_destruct;
- (void)simulatorPlaygroundFramebufferServiceChannel:(id)arg1 didReceiveFramebufferImage:(struct CGImage *)arg2;
- (id)_disabledSimulatorJobs;
- (BOOL)_shouldDisableUnnecessarySimulatorJobs;
- (BOOL)_shouldDisableSimulatorDataMigration;
- (struct CGImage *)lastDeviceSnapshotImage;
- (int)_launchAppAtURL:(id)arg1 withDevice:(id)arg2 launchOptions:(id)arg3 checkForCancellationBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (BOOL)bootDevice:(id)arg1 error:(out id *)arg2;
- (int)_launchAppInFullSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 checkForCancellationBlock:(CDUnknownBlockType)arg3 slaveFilename:(id)arg4 error:(out id *)arg5;
- (int)_launchAppInSimpleSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 slaveFilename:(id)arg3 error:(id *)arg4;
- (id)_sandboxProfileDataWithContainerPath:(id)arg1 socketPath:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (CDUnknownBlockType)_createPlaygroundLauncherForPreparationParameters:(id)arg1;
- (id)sessionForExecutingPlaygroundWithParameters:(id)arg1;
- (void)dealloc;
- (id)defaultStubPathForSDK:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end