//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedPickerCollectionViewCell : FRFeedBasedCollectionViewCell
{
    FCFeedDescriptor *_populatedFeed;
    id <FRSubscriptionLimitExceededDelegate> _delegate;
    FCSubscriptionController *_subscriptionController;
    long long _subscribeLocation;
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) long long subscribeLocation; // @synthesize subscribeLocation=_subscribeLocation;
@property(readonly, nonatomic) __weak FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(nonatomic) __weak id <FRSubscriptionLimitExceededDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FCFeedDescriptor *populatedFeed; // @synthesize populatedFeed=_populatedFeed;
- (void).cxx_destruct;
- (void)_attemptSubscriptionToPopulatedFeed;
- (void)_unsubscribeToPopulatedFeed;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateActionButtonPosition;
- (void)setMode:(unsigned long long)arg1;
- (id)accessibilityPublisherOrTopicName;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (_Bool)isRemovable;
- (_Bool)isSubscribedTo;
- (_Bool)isAddable;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_updateHighlightedState;
- (void)refresh;
- (_Bool)supportsInlineRefresh;
- (void)populateWithFeed:(id)arg1 context:(id)arg2 subscribeLocation:(long long)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end