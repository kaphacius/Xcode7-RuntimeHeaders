//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface LoadingController : NSObject
{
    _Bool _loading;
    NSURL *_URL;
    NSString *_title;
    WKWebView *_webView;
    id <LoadingControllerDelegate> _delegate;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) __weak id <LoadingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2;
@property(retain, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(nonatomic) float estimatedProgress;
@property(nonatomic, getter=isLoading) _Bool loading;

@end