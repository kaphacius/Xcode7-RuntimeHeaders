//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedBasedCollectionViewCell : UICollectionViewCell
{
    unsigned long long _rankInSource;
    unsigned long long _mode;
    FRSubscriptionButton *_actionButton;
    UIView *_highlightedScrimView;
    unsigned long long _previousMode;
}

@property(nonatomic) unsigned long long previousMode; // @synthesize previousMode=_previousMode;
@property(readonly, nonatomic) UIView *highlightedScrimView; // @synthesize highlightedScrimView=_highlightedScrimView;
@property(readonly, nonatomic) FRSubscriptionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long rankInSource; // @synthesize rankInSource=_rankInSource;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
@property(readonly, nonatomic) NSString *accessibilityPublisherOrTopicName;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) _Bool isRemovable;
@property(readonly, nonatomic) _Bool isSubscribedTo;
@property(readonly, nonatomic) _Bool isAddable;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateButtonImage;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateHighlightedState;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end