//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NNMKBulletinContentViewServiceClient <NSObject>
- (void)didRequestReplyOptionsActionSheetForMultipleRecipients;
- (void)didStartSendingMessageRelatedToCurrentMessage;
- (void)willBeginDragging;
- (void)didEndScrollingAtYPosition:(float)arg1;
- (void)didScrollToYPosition:(float)arg1;
- (void)didDismissDragging;
- (void)didDismissInActionMenu;
- (void)didExecuteAction;
- (void)didPresentMode:(unsigned int)arg1;
- (void)didTapLongLookContentInHeaderView;
- (void)didTapQuickLookInHeaderView;
- (void)didTapIconInHeaderView;
- (void)didAnimateSlideDownDismissLongLook:(_Bool)arg1;
- (void)didAnimateDismissLongLook:(_Bool)arg1;
- (void)didAnimateToLongLook:(_Bool)arg1;
- (void)didAnimateInLongLook:(_Bool)arg1;
- (void)didAnimateInQuickLook:(_Bool)arg1;
- (void)didRequestDismissIfNotYetShowing;
- (void)didUpdateAccountEmailAddresses:(NSArray *)arg1;
- (void)didFailRenderingMessage;
- (void)didRenderMessage;
@end