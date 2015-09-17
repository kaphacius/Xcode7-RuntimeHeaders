//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKProfileViewController : GKLoadableContentViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    GKBubbleFlowContainerView *_bubbleContainerView;
    NSArray *_bubbleViews;
    NSArray *_bubbleLocations;
    NSArray *_bubbleConstraints;
    NSLayoutConstraint *_scrollHeightConstraint;
    NSLayoutConstraint *_scrollBottomConstraint;
    NSLayoutConstraint *_bubbleContainerTopInsetConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bubbleContainerTopInsetConstraint; // @synthesize bubbleContainerTopInsetConstraint=_bubbleContainerTopInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollBottomConstraint; // @synthesize scrollBottomConstraint=_scrollBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollHeightConstraint; // @synthesize scrollHeightConstraint=_scrollHeightConstraint;
@property(retain, nonatomic) NSArray *bubbleConstraints; // @synthesize bubbleConstraints=_bubbleConstraints;
@property(retain, nonatomic) NSArray *bubbleLocations; // @synthesize bubbleLocations=_bubbleLocations;
@property(retain, nonatomic) NSArray *bubbleViews; // @synthesize bubbleViews=_bubbleViews;
@property(retain, nonatomic) GKBubbleFlowContainerView *bubbleContainerView; // @synthesize bubbleContainerView=_bubbleContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)positionBubbleViewsBelowView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end