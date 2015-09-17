//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ServiceStorePageViewController : UIViewController <SKUIStorePageDelegate>
{
    SKUIClientContext *_clientContext;
    _Bool _isEntitled;
    SKUIStorePageViewController *_storePageViewController;
    SSURLBag *_urlBag;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (id)_storePageViewController;
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)_clientViewControllerProxy;
- (void)storePage:(id)arg1 showStorePageForURL:(id)arg2;
- (void)storePage:(id)arg1 showProductPageForItem:(id)arg2;
- (void)loadPageWithURL:(id)arg1;
- (void)loadPageWithURLBagKey:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end