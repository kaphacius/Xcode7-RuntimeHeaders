//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CUISBulletinClientFactoryDelegate <NSObject>
- (void)clientFactory:(CUISBulletinClientFactory *)arg1 requestsTextInputWithCompletion:(void (^)(_Bool, NSDictionary *))arg2;
- (void)clientFactoryDidPerformAction:(CUISBulletinClientFactory *)arg1 shouldAnimateAction:(_Bool)arg2;
- (void)clientFactoryDidPerformAction:(CUISBulletinClientFactory *)arg1;
- (unsigned int)audioFeedbackAllowedForClientFactory:(CUISBulletinClientFactory *)arg1;
- (void)clientFactoryRequestsInvalidateActionItems:(CUISBulletinClientFactory *)arg1;
- (void)clientFactoryRequestsDismissal:(CUISBulletinClientFactory *)arg1;
@end