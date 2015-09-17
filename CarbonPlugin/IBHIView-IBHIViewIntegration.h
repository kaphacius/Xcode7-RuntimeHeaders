//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIView (IBHIViewIntegration)
+ (id)hiMaximumLayoutSizes;
+ (id)hiMinimumLayoutSizes;
+ (id)layoutMetrics;
- (BOOL)ibIsEdge:(int)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(int)arg3;
- (BOOL)ibIsDistanceFromEdge:(int)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(int)arg3;
- (struct _NSSize)ibMaximumSize;
- (struct _NSSize)ibMinimumSize;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviewsWhileGrowingFromKnob:(int)arg1 inDocument:(id)arg2;
- (id)designableTypeAliases;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (void)ibDidRemoveFromDesignableDocument:(id)arg1;
- (void)ibDidAddToDesignableDocument:(id)arg1;
- (BOOL)isClippingDesignableContent;
- (id)ibPasteboardTypes;
- (BOOL)ibIsConnectionInspectorModeEnabled;
- (id)ibDesignableContentView;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateIdentityInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end