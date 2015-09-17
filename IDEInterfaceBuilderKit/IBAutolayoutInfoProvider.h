//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBAutolayoutInfoProvider <IBAutolayoutConcreteConstraintProvider>
@property(readonly, nonatomic) Class autolayoutFrameDecisionDriverClass;
@property(readonly, nonatomic) Class symbolicLayoutConstantClass;
@property(readonly, nonatomic) Class autolayoutEngineClass;
@property(readonly, nonatomic) Class arbitrationUnitClass;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (IBSparseAutolayoutInfo *)sparseAutolayoutInfoForArbitrationUnit:(IBAutolayoutArbitrationUnit *)arg1 objectTransformationBlock:(id (^)(id))arg2;
- (NSObject *)arbitrationUnitRootForObject:(NSObject *)arg1;
- (IBAutolayoutArbitrationUnit *)arbitrationUnitForObject:(id)arg1;
- (NSArray *)allArbitrationUnits;
- (double)priorityForPlaceholderAmbiguousSubviewVerticalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderAmbiguousSubviewHorizontalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderUninitializedSubviewVerticalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityForPlaceholderUninitializedSubviewHorizontalConstraintsForView:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewHasCandidateReferencingConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewCanHaveUninitializedAutolayoutAmbiguityStatus:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewHasAnyAmbiguity:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewHasUninitializedAutolayoutStatus:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewIsVerticallyResizable:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewIsHorizontallyResizable:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewPrefersToVerticallyResizeWithContainer:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewPrefersToHorizontallyResizeWithContainer:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewPrefersMarginRelativeConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewDerivesDesignTimeDefaultIntrinsicContentSize:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewDerivesInternalConstraintsBasedUponInitialFrameSize:(NSObject<IBAutolayoutItem> *)arg1;
- (double)priorityStrongerThanInternalWeakSizeConstraintsForCompressingView:(NSObject<IBAutolayoutItem> *)arg1 inLayoutEngineForOrientation:(unsigned long long)arg2;
- (unsigned long long)orientationsWithInternalConstraintsThatWeaklyDefineViewSizeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (unsigned long long)customSubviewLayoutStrategyForView:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewWithSuperviewOwnedLayoutAllowsSizingConstraints:(NSObject<IBAutolayoutItem> *)arg1;
- (BOOL)viewShouldUseConstraintsInsteadOfAutoresizing:(NSObject<IBAutolayoutItem> *)arg1;
- (NSObject<IBAutolayoutItem> *)designableContentViewForView:(NSObject<IBAutolayoutItem> *)arg1;
- (CDStruct_c519178c)insetToDesignableContentAreaForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSString *)containerWidgetTypeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSString *)widgetTypeForView:(NSObject<IBAutolayoutItem> *)arg1;
- (NSArray *)objectsFromAncestor:(NSObject *)arg1 toObject:(NSObject *)arg2;
- (id)topLevelObjectForObject:(id)arg1;
- (NSArray *)topLevelObjects;
- (id <IBCollection>)objects;
- (NSArray *)orderedChildrenOfObject:(id)arg1;
- (NSArray *)childrenOfObject:(id)arg1;
- (id)parentOfObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;

@optional
- (NSString *)debugDescription;
@end