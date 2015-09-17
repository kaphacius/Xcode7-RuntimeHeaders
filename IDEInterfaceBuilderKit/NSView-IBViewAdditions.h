//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSView (IBViewAdditions)
+ (id)ib_viewWithSize:(struct CGSize)arg1;
- (void)ib_removeFromSuperviewMakingAncestorFirstResponderIfNeeded;
- (void)ib_setSubviewsMakingAncestorFirstResponderIfNeeded:(id)arg1;
- (void)ib_layoutSubtreeIfNeededIfContainedInAutolayoutEnabledHierarchy;
- (id)ib_layoutDescription;
- (void)ib_centerWithIntegralOriginInRect:(struct CGRect)arg1;
- (id)ib_constraintsForMakingFlushWithSuperview;
- (BOOL)isMouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)firstAncestorPassingTest:(CDUnknownBlockType)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 shouldCenter:(BOOL)arg2 animatingSynchronously:(BOOL)arg3 duration:(double)arg4;
- (void)scrollRectToVisible:(struct CGRect)arg1 shouldCenter:(BOOL)arg2 animatingSynchronously:(BOOL)arg3;
- (struct CGRect)rectToScrollRectToVisible:(struct CGRect)arg1 keepingRectVisible:(struct CGRect)arg2;
- (struct CGRect)intersectRectByAxisForRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (CDStruct_f6143a38)convertLine:(CDStruct_f6143a38)arg1 fromView:(id)arg2;
- (CDStruct_f6143a38)convertLine:(CDStruct_f6143a38)arg1 toView:(id)arg2;
- (CDUnion_31865a80)convertKnobPosition:(CDUnion_31865a80)arg1 fromView:(id)arg2;
- (CDUnion_31865a80)convertKnobPosition:(CDUnion_31865a80)arg1 toView:(id)arg2;
- (unsigned long long)convertRectEdge:(unsigned long long)arg1 fromView:(id)arg2;
- (unsigned long long)convertRectEdge:(unsigned long long)arg1 toView:(id)arg2;
- (id)transformForConvertingPointsFromView:(id)arg1;
- (id)transformForConvertingPointsToView:(id)arg1;
- (id)transformForConvertingToAncestor:(id)arg1;
- (struct CGRect)visibleBoundsIgnoringHiddenAncestors;
- (struct CGPoint)convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToScreen:(struct CGPoint)arg1;
- (struct CGSize)convertSizeToScreen:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromScreen:(struct CGSize)arg1;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
- (struct CGSize)convertOffsetFromWindow:(struct CGSize)arg1;
- (struct CGSize)convertOffsetToWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeToWindow:(struct CGSize)arg1;
- (struct CGPoint)convertPointFromWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToWindow:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromWindow:(struct CGRect)arg1;
- (struct CGRect)convertRectToWindow:(struct CGRect)arg1;
- (CDStruct_c519178c)convertInsetFromWindow:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInsetToWindow:(CDStruct_c519178c)arg1;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(id)arg2;
- (struct CGRect)boundsClippedToAncestor:(id)arg1 convertedToView:(id)arg2;
- (struct CGRect)boundsClippedToAncestorsConvertedToView:(id)arg1;
- (struct CGRect)boundsClippedToAncestorsConvertedToWindow;
- (void)makeRectVisible:(struct CGRect)arg1 ofView:(id)arg2;
- (void)makeRectVisible:(struct CGRect)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)foreachRectBeingDrawn:(CDUnknownBlockType)arg1;
- (BOOL)isVisible;
- (void)invokeWithTemporarySuperview:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)ib_isLayerBackedOrHasLayerBackedDescendant;
@end