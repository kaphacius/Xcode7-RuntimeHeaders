//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ServiceUIAlertView : UIAlertView
{
    SSAuthenticationContext *_authenticationContext;
    _Bool _runsModal;
    SSVShowDialogRequest *_showDialogRequest;
}

- (void).cxx_destruct;
- (void)_storeKitUI_finishAlertWithResponse:(id)arg1 error:(id)arg2;
- (void)show;
- (void)setRunsModal:(_Bool)arg1;
- (id)initWithAuthenticationContext:(id)arg1;

@end