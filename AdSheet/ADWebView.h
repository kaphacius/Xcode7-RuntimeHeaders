//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADWebView : UIWebView
{
    _Bool _paused;
    _Bool _shouldReportScriptErrors;
    id <UIWebViewDelegate><ADWebViewDelegate> _delegate;
    NSString *_iAdJSVersion;
    NSString *_userAgent;
    NSString *_identifier;
    NSData *_clientAuditToken;
    NSMutableDictionary *_resourceLoadStartDates;
}

+ (void)clearContentStorage;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *resourceLoadStartDates; // @synthesize resourceLoadStartDates=_resourceLoadStartDates;
@property(retain, nonatomic) NSData *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *iAdJSVersion; // @synthesize iAdJSVersion=_iAdJSVersion;
@property(nonatomic) _Bool shouldReportScriptErrors; // @synthesize shouldReportScriptErrors=_shouldReportScriptErrors;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) id <UIWebViewDelegate><ADWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)removeImageFromCacheForURL:(id)arg1;
- (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2;
- (id)mainFrame;
@property(readonly, nonatomic) JSContext *javaScriptContext;
- (void)loadWebArchive:(id)arg1;
- (void)sendOrientationEventForOrientation:(long long)arg1;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3;
- (void)_handleConsoleMessage:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)pauseAllMediaInWebView:(id)arg1;
- (id)_accessibilityUserTestingElementAttributes;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end