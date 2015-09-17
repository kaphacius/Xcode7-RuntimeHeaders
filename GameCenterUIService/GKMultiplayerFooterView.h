//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKMultiplayerFooterView : UICollectionReusableView
{
    GKMultiplayerActivityView *_activityView;
    GKMultiplayerBubbleView *_bubbleView;
}

+ (id)footerView;
@property(retain, nonatomic) GKMultiplayerBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) GKMultiplayerActivityView *activityView; // @synthesize activityView=_activityView;
- (void)removeAllAnimationsFromBubbles;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBubblesHidden:(_Bool)arg1;
- (void)floatInBubbles;
- (void)setBubbleFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showFooterStatus:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end