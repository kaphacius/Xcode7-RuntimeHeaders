//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATAxisSweepPickerViewController : AXNumericalPreferencePickerViewController
{
}

- (id)stringValueForSpecifier:(id)arg1;
- (long long)keyboardTypeforSpecifier:(id)arg1;
- (id)unitsStringForSpecifier:(id)arg1;
- (double)stepAmount;
- (id)localizedTitle;
- (id)localizedFooterText;
- (void)setNumericalPreferenceValueFromUser:(double)arg1;
- (double)numericalPreferenceValue;
- (double)minimumValue;
- (double)maximumValue;

@end