//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NNMKNotificationContentViewDelegate <NSObject>
- (void)notificationContentViewDidDismissDragging:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidDismissInActionMenu:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewWillBeginDragging:(NNMKNotificationContentView *)arg1;
- (void)notificationContentView:(NNMKNotificationContentView *)arg1 didEndScrollingAtYPosition:(float)arg2;
- (void)notificationContentView:(NNMKNotificationContentView *)arg1 didScrollToYPosition:(float)arg2;
- (void)notificationContentViewDidTapLongLookContent:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidTapQuickLookInHeaderView:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidTapIconInHeaderView:(NNMKNotificationContentView *)arg1;

@optional
- (void)notificationContentViewDidStopLoading:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewWillStartLoading:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidRenderMessageContent:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidArchiveMessage:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidTrashMessage:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidUnflagMessage:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidFlagMessage:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidMarkMessageAsUnread:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidMarkMessageAsRead:(NNMKNotificationContentView *)arg1;
- (void)notificationContentViewDidRequestReplyActions:(NNMKNotificationContentView *)arg1;
@end