//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FCSubscriptionObserving <NSObject>

@optional
- (void)subscriptionController:(FCSubscriptionController *)arg1 didAddTags:(NSSet *)arg2 changeTags:(NSSet *)arg3 removeTags:(NSSet *)arg4;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didChangePendingSubscription:(FCSubscription *)arg2;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didRemovePendingSubscription:(FCSubscription *)arg2;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didAddPendingSubscription:(FCSubscription *)arg2;
@end