//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAttachToProcessHelper : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_debugSessionsByIdentifier;
    NSString *_defaultErrorDescription;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *defaultErrorDescription; // @synthesize defaultErrorDescription=_defaultErrorDescription;
- (void).cxx_destruct;
- (void)attachToPID:(int)arg1 platform:(id)arg2 invokedInTabController:(id)arg3 activityViewTitle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_attachToPID:(int)arg1 withDeviceProcessInformation:(id)arg2 runDestination:(id)arg3 invokedInTabController:(id)arg4 activityViewTitle:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_didFinishAttachingToPID:(int)arg1 sessionIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_findProcessInformationForAttachingToPID:(int)arg1 workspace:(id)arg2 runDestination:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_runDestinationForAttachingToPlatform:(id)arg1;
- (void)_registerObserverForObject:(id)arg1 keyPath:(id)arg2 inContextOfSessionWithIdentifier:(id)arg3 handlerBlock:(CDUnknownBlockType)arg4;
- (void)_stopObservingDebugSessionWithIdentifier:(id)arg1;
- (id)_makeStandardDebuggingErrorWithFailureReasonFormat:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end