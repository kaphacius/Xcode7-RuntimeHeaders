//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SBFLockScreenDateViewAccessibility : __SBFLockScreenDateViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_accessibilityPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityViewIsVisible;
- (_Bool)_accessibilityOverridesInvisibility;
- (void)setContentAlpha:(double)arg1 withDateVisible:(_Bool)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateLegibilityLabelsWithUpdatedDateString:(_Bool)arg1;

@end