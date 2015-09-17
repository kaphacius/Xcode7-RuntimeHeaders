//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKMultiplayerBubbleView : UIView
{
    GKTextBubbleControl *_inviteButton;
    GKTextBubbleControl *_playButton;
    GKHorizontalBubbleControlsView *_bubblesView;
}

@property(retain, nonatomic) GKHorizontalBubbleControlsView *bubblesView; // @synthesize bubblesView=_bubblesView;
@property(retain, nonatomic) GKTextBubbleControl *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) GKTextBubbleControl *inviteButton; // @synthesize inviteButton=_inviteButton;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBubblesHidden:(_Bool)arg1;
- (void)floatInBubbles;
- (void)removeAllAnimationsFromBubbles;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end