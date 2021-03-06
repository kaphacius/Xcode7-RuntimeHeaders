//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSTabView (IBNSTabViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedInitialTabViewItem;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfTabViewItems;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)setIbInspectedInitialTabViewItem:(id)arg1;
- (id)ibInspectedInitialTabViewItem;
- (void)setIbInspectedNumberOfTabViewItems:(long long)arg1;
- (long long)ibInspectedNumberOfTabViewItems;
- (BOOL)xmlCoder:(id)arg1 shouldDelayEncodingObject:(id)arg2 forKey:(id)arg3 context:(id)arg4;
- (id)xmlCoderEncodingCallbackContext:(id)arg1;
- (BOOL)ibHasVerticalTabLayout;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibResumeAutoResizingSubviews:(id)arg1;
- (id)ibStopAutoResizingSubviewsWhileGrowingFromKnob:(CDUnion_42e99c75)arg1 inDocument:(id)arg2;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (struct CGSize)ibPreferredSize;
- (struct CGPoint)ibPreferredOriginForSize:(struct CGSize)arg1;
- (BOOL)ibUseFrameDecisionForSuggestingLayout;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (void)ibWillSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (struct CGRect)ibContentRectForBoundsRect:(struct CGRect)arg1;
- (BOOL)ibIsClippingContent;
@property(copy) NSArray *ibShadowedTabViewItems;
@property(retain) NSTabViewItem *ibShadowedSelectedTabViewItem;
@property(retain) NSTabViewItem *ibExternalInitialTabViewItem;
- (id)ibInitialTabViewItemAttribute;
- (id)ibWidgetType;
- (Class)ibTabViewItemClass;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (BOOL)isContainedTabViewItem:(id)arg1;
- (Class)ibEditorClass;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibIsNSAppearanceContainer;
@end