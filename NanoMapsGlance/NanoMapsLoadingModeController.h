//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoMapsLoadingModeController : UIViewController <PUICActivityIndicatorViewDelegate, NanoChromeModeController>
{
    PUICActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    UILabel *_secondaryLabel;
    UIView *_containingView;
    CDUnknownBlockType _cancelBlock;
    NSString *_message;
    id <NanoChromeModeController> _previousMode;
    NanoChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (void)activityIndicatorViewWillAnimateIn:(id)arg1 duration:(double)arg2;
- (void)performLoad:(CDUnknownBlockType)arg1 cancellation:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)showsMapView;
- (id)viewController;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)initWithLoadingMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end