//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitionViewController : SBUIRemoteAlertServiceViewController <LARemoteUI, LAUIMechanism>
{
    _Bool _awaitingDissappear;
    _Bool _awaitingDaemonActivity;
    _Bool _disappeared;
    _Bool _appeared;
    CDUnknownBlockType _disappearedNotification;
    CDUnknownBlockType _appearedNotification;
    TransitionViewController *_childController;
    long long _policy;
    NSDictionary *_options;
    id <LABackoffCounter> _backoffCounter;
    NSString *_callerName;
    NSString *_callerBundleId;
    NSData *_externalizedACMContext;
    NSDictionary *_internalInfo;
    NSString *_authenticationTitle;
    NSString *_authenticationSubtitle;
    id <LAUIMechanism> _mechanism;
    id <LARemoteUIHost> _remoteUIHost;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(readonly, nonatomic) id <LARemoteUIHost> remoteUIHost; // @synthesize remoteUIHost=_remoteUIHost;
@property(readonly, nonatomic) id <LAUIMechanism> mechanism; // @synthesize mechanism=_mechanism;
@property(retain, nonatomic) NSString *authenticationSubtitle; // @synthesize authenticationSubtitle=_authenticationSubtitle;
@property(retain, nonatomic) NSString *authenticationTitle; // @synthesize authenticationTitle=_authenticationTitle;
@property(readonly, nonatomic) NSDictionary *internalInfo; // @synthesize internalInfo=_internalInfo;
@property(readonly, nonatomic) NSData *externalizedACMContext; // @synthesize externalizedACMContext=_externalizedACMContext;
@property(readonly, nonatomic) NSString *callerBundleId; // @synthesize callerBundleId=_callerBundleId;
@property(readonly, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(readonly, nonatomic) id <LABackoffCounter> backoffCounter; // @synthesize backoffCounter=_backoffCounter;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mechanismEvent:(long long)arg1;
- (void)internalInfoWithReply:(CDUnknownBlockType)arg1;
- (void)_setActivityWatchdog;
- (void)uiFailureWithError:(id)arg1;
- (void)uiSuccessWithResult:(id)arg1;
- (void)uiFallback;
- (void)uiCancel;
- (void)uiEvent:(long long)arg1 options:(id)arg2;
- (_Bool)isRemoteViewController;
- (_Bool)isFullScreenController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_performOnMainQueueWhenAppeared:(CDUnknownBlockType)arg1;
- (void)transitionToController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dismissRemoteUIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didReceiveAuthenticationData;
- (id)initWithUiOptions:(id)arg1 parentViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end