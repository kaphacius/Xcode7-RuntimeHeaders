//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUDebuggingAddition : NSObject <IDEDebuggingAddition>
{
    BOOL _breakpointsActiveBeforeCapture;
    BOOL _isFakeDebugSession;
    NSString *_identifier;
    GPUDebuggerController *_debuggerController;
    GPUInferiorSession *_gpuSession;
    NSString *_localizedCaptureUnavailabilityReason;
    IDELaunchSession *_launchSession;
}

+ (id)_extensionsWithIdentifier:(id)arg1 predicate:(id)arg2;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (BOOL)_isLinkedToCapturableFrameworks:(id)arg1 withPlatformID:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property BOOL isFakeDebugSession; // @synthesize isFakeDebugSession=_isFakeDebugSession;
@property BOOL breakpointsActiveBeforeCapture; // @synthesize breakpointsActiveBeforeCapture=_breakpointsActiveBeforeCapture;
@property(copy, nonatomic) NSString *localizedCaptureUnavailabilityReason; // @synthesize localizedCaptureUnavailabilityReason=_localizedCaptureUnavailabilityReason;
@property(retain, nonatomic) GPUInferiorSession *gpuSession; // @synthesize gpuSession=_gpuSession;
@property(retain, nonatomic) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) BOOL isDebuggingLoadedArchive;
- (void)primitiveInvalidate;
- (void)processFinalLaunchParameters:(id)arg1;
- (id)adjustedLaunchParametersForLaunchParameters:(id)arg1;
- (BOOL)_loadInferiorSession:(id)arg1 forAppWithName:(id)arg2 error:(id *)arg3;
- (void)_displayAlertWithError:(id)arg1;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end