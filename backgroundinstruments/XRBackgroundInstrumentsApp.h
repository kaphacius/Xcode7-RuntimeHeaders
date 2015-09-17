//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRBackgroundInstrumentsApp : NSApplication <XRBackgroundActions, XRTimeProfileRequestor, XRRelocationDetectorDelegate, XRUIModelChangeObserver, NSApplicationDelegate>
{
    XRBackgroundTimeProfiler *_timeProfiler;
    XRBackgroundServiceProvider *_servicesProvider;
    XRBackgroundSplashController *_splashCtrl;
    XRTimeProfileRequestElement *_currentTimeProfileRequest;
    XRRelocationDetector *_reloDetector;
    NSTimer *_idleTimeout;
    XRBusyModel *_activityModel;
}

- (void).cxx_destruct;
- (long long)runModalForWindow:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)detector:(id)arg1 detectedBundleMoveToFilePathURL:(id)arg2;
- (id)currentTimeProfileRequest;
- (void)dockMenuNeedsProfile:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)modelDidChange:(id)arg1;
- (void)dealloc;
- (void)finishLaunching;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end