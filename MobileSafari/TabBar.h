//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_tabBarItemViewReuseStack;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_tapRecognizer;
    UIView *_leftContainer;
    UIView *_rightContainer;
    UIView *_leftBackgroundTintView;
    UIView *_rightBackgroundTintView;
    UIView *_leftBackgroundOverlayView;
    UIView *_rightBackgroundOverlayView;
    UIGestureRecognizer *_reorderRecognizer;
    _Bool _reorderOriginNeedsReset;
    struct CGPoint _reorderOrigin;
    struct CGPoint _reorderEffectiveTouchLocation;
    TabBarItem *_floatingItem;
    TabBarItem *_sinkingItem;
    _Bool _hidesTitles;
    id <TabBarDelegate> _delegate;
    NSArray *_items;
    TabBarStyle *_barStyle;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool hidesTitles; // @synthesize hidesTitles=_hidesTitles;
@property(retain, nonatomic) TabBarStyle *barStyle; // @synthesize barStyle=_barStyle;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_relinquishReusableTabBarItemView:(id)arg1;
- (id)_requestReusableTabBarItemView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (unsigned long long)_maximumTruncationIndexForTitle:(id)arg1;
- (void)reorder:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_finishReorderingAnimated:(_Bool)arg1;
- (void)_beginReorderingItem:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tap:(id)arg1;
- (id)_itemForTouch:(id)arg1;
- (void)_activateItemIfNecessary:(id)arg1;
- (id)_itemAtLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)_layoutIndexes:(id)arg1 ofItems:(id)arg2;
- (void)_layoutContainers;
- (unsigned long long)_effectiveIndexForIndex:(unsigned long long)arg1 ofItems:(id)arg2;
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1 activeItemIndex:(unsigned long long)arg2;
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 activeItemIndex:(unsigned long long)arg2;
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 activeItemIndex:(unsigned long long)arg2 withSlowingFactor:(double)arg3;
- (void)_scrollTowardItem:(id)arg1 byAmount:(double)arg2;
- (void)scrollToItem:(id)arg1 animated:(_Bool)arg2;
- (void)_scrollToItemIfNeeded:(id)arg1;
- (_Bool)_isScrollable;
- (double)_scrollableWidth;
- (double)_itemWidth;
- (void)_layoutItem:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 itemCount:(unsigned long long)arg4 beforeActiveItem:(_Bool)arg5;
- (void)_itemDidPressCloseButton:(id)arg1;
- (void)_updateBackground;
- (void)_updateReorderRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end