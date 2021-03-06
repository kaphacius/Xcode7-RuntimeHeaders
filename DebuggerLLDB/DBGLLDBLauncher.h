//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBLauncher : IDERunOperationPathWorker <IDEConsoleAdaptorDelegateProtocol>
{
    struct SBDebugger _lldbDebugger;
    DBGLLDBSession *_debugSession;
    NSString *_lastKnownDebuggerPrompt;
    BOOL _ignorePromptOnce;
    NSObject<OS_dispatch_queue> *_executeLLDBCommandQueue;
    DVTDispatchLock *_lifeCycleLock;
    BOOL _terminateCalled;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) BOOL terminateCalled; // @synthesize terminateCalled=_terminateCalled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)terminate;
- (void)start;
- (id)_consumeEventAfterConnectToDebugServer:(struct SBProcess)arg1 lldbTarget:(struct SBTarget)arg2 launchParameters:(id)arg3;
- (void)_setMiscHandleCommands:(id)arg1;
- (void)_setPlatformForStart:(id)arg1;
- (void)_messageTrace:(id)arg1;
- (id)devicePathSubstitutionPairsString;
- (struct SBTarget)_tryWithAnotherArchitectureOnBinaryPath:(id)arg1;
- (struct SBProcess)_doRegularDebugWithTarget:(struct SBTarget)arg1 usingDebugServer:(BOOL)arg2 errTargetString:(id)arg3;
- (void)_reportTarget:(id)arg1 failedToLaunchError:(struct SBError)arg2;
- (struct SBProcess)_doAttachWithTarget:(struct SBTarget)arg1 childPID:(unsigned long long *)arg2;
- (id)parseConsoleOutputFromOriginalOutput:(id)arg1;
- (id)parseConsoleInputFromOriginalInput:(id)arg1;
- (void)_executeLLDBCommands:(id)arg1;
- (void)_createDebuggerConsoleAdaptor;
- (struct SBDebugger)lldbDebugger;
- (void)setFinishedRunning;
- (void)_logToConsoleForUserActions:(id)arg1;
- (void)_logDebugStringFromLLDB:(const char *)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

@end