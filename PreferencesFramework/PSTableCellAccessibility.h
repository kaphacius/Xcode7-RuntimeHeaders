//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PSTableCellAccessibility : __PSTableCellAccessibility_super
{
}

+ (void)_setAccessibilityData:(id)arg1 onCell:(id)arg2;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityIsScannerElement;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (_Bool)_accessibilityIsSpeakThisElement;
- (id)accessibilityHint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformationWithSpecifier:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (_Bool)_accessibilityLanguageOverriddesUser;

@end