//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WebProcessPlugInBrowserPageController : _SFWebProcessPlugInReaderEnabledPageController <PageLoadTestWebProcessController, RequestDesktopSiteWebProcessPlugInListener>
{
    _WKRemoteObjectInterface *_pageLoadTestControllerInterface;
    PageLoadTestMeasurementController *_pageLoadTestMeasurementController;
    WebProcessPlugInPageExtensionController *_extensionController;
    id <AppBannerMetaTagContentObserver> _appBannerObserverProxy;
    id <RequestDesktopSiteUIProcessListener> _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface *_requestDesktopSiteWebProcessPlugInListenerInterface;
    NSMutableSet *_domainsNeedingDesktopUserAgent;
}

- (void).cxx_destruct;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 userAgentForURL:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFailLoadWithErrorForFrame:(id)arg2 error:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFailProvisionalLoadWithErrorForFrame:(id)arg2 error:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(id)arg4;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didFinishLoadForResource:(unsigned long long)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)_logPageLoadCompleted:(id)arg1;
- (void)_logPageLoadStarted:(id)arg1;
- (id)_searchForSmartAppBannerMetaContent;
- (id)_appBannerMetaElementInHeaderElement:(id)arg1;
- (id)_appBannerMetaTagObserverProxy;
- (void)_setupPageLoadTestController;
- (void)enablePageLoadMeasurementCollection;
- (void)willDestroyBrowserContextController:(id)arg1;
- (void)dealloc;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end