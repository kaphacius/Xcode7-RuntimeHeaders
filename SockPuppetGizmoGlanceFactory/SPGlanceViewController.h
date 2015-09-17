//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SPGlanceViewController : SPInterfaceViewController <CUISGlanceServiceViewController>
{
    _Bool _active;
    _Bool _hasAppeared;
    SPGlanceViewControllerDelegate *_spvcDelegate;
    id <CUISGlanceServiceViewControllerDelegate> _delegate;
    NSDictionary *_glanceContext;
    NSString *_launchBundleID;
    NSURL *_launchURL;
    NSUserActivity *_userActivity;
    NSObject<OS_dispatch_queue> *_lastLoadTimestampQueue;
    NSDate *_lastLoadTimestamp;
    CDUnknownBlockType _finishedPreloadingHandler;
    double _glanceViewDidAppearTime;
}

@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double glanceViewDidAppearTime; // @synthesize glanceViewDidAppearTime=_glanceViewDidAppearTime;
@property(copy, nonatomic) CDUnknownBlockType finishedPreloadingHandler; // @synthesize finishedPreloadingHandler=_finishedPreloadingHandler;
@property(retain, nonatomic) NSDate *lastLoadTimestamp; // @synthesize lastLoadTimestamp=_lastLoadTimestamp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastLoadTimestampQueue; // @synthesize lastLoadTimestampQueue=_lastLoadTimestampQueue;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property(retain, nonatomic) NSDictionary *glanceContext; // @synthesize glanceContext=_glanceContext;
@property(nonatomic) __weak id <CUISGlanceServiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPGlanceViewControllerDelegate *spvcDelegate; // @synthesize spvcDelegate=_spvcDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *prelaunchBundleID;
@property(readonly, nonatomic) NSUserActivity *glanceUserActivity;
@property(readonly, nonatomic) NSString *duetIdentifier;
@property(readonly, copy, nonatomic) NSString *glanceTitle;
- (void)_interfaceWillDisappear;
- (void)_interfaceDidAppear;
- (void)_interfaceWillDeactivate;
- (void)_interfaceWillActivate;
- (void)_finishedPreloading;
- (void)_preloadingCanceled;
- (void)preloadInterfaceWithFinishedPreloadingHandler:(CDUnknownBlockType)arg1;
- (void)_backgroundLoad;
- (id)launchUrlWithUserActivity:(id)arg1;
- (void)setUserActivity;
- (void)updateUserActivity:(id)arg1;
- (void)_glanceUpdated;
- (void)glanceDidSettle;
- (void)preheat;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)rootView;
- (id)initWithRootItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end