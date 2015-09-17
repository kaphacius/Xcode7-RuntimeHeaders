//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNGuidanceCurrentRoadDisplay : NSObject
{
    ChromeViewController *_viewController;
    id <MapsChromeModeController> _container;
    UIView *_superview;
    _Bool _hidingSigns;
    _Bool _showingRoadDescription;
    MNGuidanceCurrentRoadSign *_currentRoadSign;
    InterruptibleAnimation *_hidingAnimation;
    id <MNGuidanceCurrentRoadDisplayDelegate> _delegate;
    NSString *_lastRoadDescription;
    struct UIEdgeInsets _minimumEdgeInsets;
}

@property(retain, nonatomic) NSString *lastRoadDescription; // @synthesize lastRoadDescription=_lastRoadDescription;
@property(nonatomic) __weak id <MNGuidanceCurrentRoadDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
@property(retain, nonatomic) InterruptibleAnimation *hidingAnimation; // @synthesize hidingAnimation=_hidingAnimation;
- (void).cxx_destruct;
- (void)setShowsDimmedSign:(_Bool)arg1 animation:(id)arg2;
@property(nonatomic) _Bool showsDimmedSign; // @dynamic showsDimmedSign;
- (void)setCurrentRoadDescriptionIsUnreliable:(_Bool)arg1;
- (void)setCurrentRoadDescription:(id)arg1;
- (void)layoutForUnobscuredBoundsChange;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeFromContainingViewController;
- (void)_setMinimumEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3;

@end