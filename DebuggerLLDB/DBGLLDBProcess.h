//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBProcess : DBGProcess
{
    struct SBProcess _lldbProcess;
    NSMutableSet *_previousThreadsToInvalidate;
    NSArray *_previousDBGThreads;
    unsigned long long _addressByteSize;
    BOOL _needCodeModuleUpdate;
    BOOL _pendingLazyCodeModuleUpdate;
    DVTDispatchLock *_previousDBGThreadsLock;
    NSMutableDictionary *_codeModuleForPathTable;
    DBGLLDBAddressSanitizerHelper *_addressSanitizerHelper;
    BOOL _isDoingAsyncAttach;
    BOOL _isCoreFile;
    NSArray *_loadedCodeModules;
}

@property BOOL isCoreFile; // @synthesize isCoreFile=_isCoreFile;
@property BOOL isDoingAsyncAttach; // @synthesize isDoingAsyncAttach=_isDoingAsyncAttach;
@property(copy) NSArray *loadedCodeModules; // @synthesize loadedCodeModules=_loadedCodeModules;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isMemoryFaultForDataValue:(id)arg1;
- (void)shadowMemoryForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg3;
- (void)memoryPointerDescriptionForAddress:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (BOOL)canProvideMemoryPointerDescriptions;
- (id)_addressSanitizerHelper;
- (void)recordedThreadsForAddress:(unsigned long long)arg1 handleOnMainQueueWithResultHandler:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;
- (void)_assertIsLLDBSessionThread;
- (void)reflectLLDBSelectedThreadAndFrame;
- (BOOL)_isExceptionBreakpoint:(unsigned long long)arg1;
- (void)_updateThreadStateAndStopReason:(id)arg1 fromLLDBThread:(struct SBThread)arg2 isCurrentThread:(BOOL)arg3;
- (BOOL)isLLDBExceptionFatal:(unsigned long long)arg1;
- (void)_addMemoryDataIfStoppedByInstrumentation:(id)arg1;
- (void)clearQueueThreadStackStates;
- (void)_readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 dataToReadInto:(id)arg3 shouldCancel:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)readMemoryAtAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_rawMemoryDataForAddressExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)rawMemoryDataForAddressExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (Class)classForMemoryData;
- (BOOL)updateQueuesAndThreads;
- (void)_updateQueues:(id *)arg1 fromLLDBProcess:(struct SBProcess *)arg2 withComputedThreads:(id)arg3;
- (void)_updateThreads:(id *)arg1 currentThread:(id *)arg2 fromLLDBProcess:(struct SBProcess *)arg3;
- (struct SBThread)_currentLLDBThread;
- (void)_updateCodeModulesImmediatelyIfNecessary;
- (void)_updateCodeModulesAfterDelay;
@property BOOL needCodeModuleUpdate;
- (unsigned long long)addressByteSize;
- (struct SBProcess)lldbProcess;
- (void)setCurrentStackFrame:(id)arg1;
@property(readonly) DBGLLDBSession *parentDebugSession;
- (id)initWithDebugSession:(id)arg1 lldbProcess:(struct SBProcess)arg2;

@end