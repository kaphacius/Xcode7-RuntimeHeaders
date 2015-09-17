//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBLayoutConstraintDrawingDestination <NSObject>
- (NSImage *)equalSizeBadge;
- (NSImage *)greaterThanOrEqualToBadge;
- (NSImage *)lessThanOrEqualToBadge;
- (NSImage *)constraintBadgeImageForLabel:(NSString *)arg1 tintColor:(NSColor *)arg2 drawSelected:(BOOL)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (NSImage *)badgeImageForAspectRatioConstraint:(IBLayoutConstraint *)arg1 drawSelected:(BOOL)arg2 attribute:(unsigned long long)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (NSImage *)badgeImageForMisplacedConstraint:(IBLayoutConstraint *)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (NSImage *)badgeImageForAmbiguousConstraint:(IBLayoutConstraint *)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_d2b197d1 *)arg5;
- (NSImage *)badgeImageForConflictingConstraint:(IBLayoutConstraint *)arg1 drawSelected:(BOOL)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_d2b197d1 *)arg4;
- (struct CGRect)rectIncludingBadgeForDrawable:(IBAutolayoutConstraintDrawable *)arg1;
- (BOOL)isShowingResizeKnobs;
- (NSString *)badgeLabelForAbstraction:(IBAbstractLayoutConstraintAbstraction *)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (NSColor *)defaultDrawableTintColorForAbstraction:(IBAbstractLayoutConstraintAbstraction *)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (id <IBLayoutConstraintColorSpecifier>)colorSpecifier;
- (long long)userInterfaceLayoutDirection;
- (NSObject<IBAutolayoutItem> *)constraintOverlayView;
- (struct CGRect)layoutRectInOverlayCoordinatesForConstraintItem:(NSObject<IBAutolayoutItem> *)arg1;
- (double)valueOfAttribute:(unsigned long long)arg1 forView:(NSObject<IBAutolayoutItem> *)arg2 inCoordinateSpaceOfView:(NSObject<IBAutolayoutItem> *)arg3 withUserInterfaceLayoutDirection:(long long)arg4;
@end