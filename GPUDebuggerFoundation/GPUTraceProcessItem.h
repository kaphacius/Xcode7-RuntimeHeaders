//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUTraceProcessItem : GPUTraceGroupItem <IDEDebugTopNavigableModel>
{
}

- (id)contentDelegateUIExtensionIdentifier;
@property(copy, nonatomic) NSString *name;
- (id)UUIDSection;
- (id)initWithController:(id)arg1 label:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *associatedProcessUUID;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, nonatomic) NSArray *loadedCodeModules;
@property(readonly, nonatomic) IDEDebugSession *parentDebugSession;
@property(readonly) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end