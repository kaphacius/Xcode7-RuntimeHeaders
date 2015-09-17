//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSTextFieldCell (IBTextFieldCellIntegration)
- (Class)ibPreferredControlClass;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (struct CGSize)ibPreferredDesignSizeForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (void)setGTitle:(id)arg1;
- (id)gTitle;
- (void)setAllowsOnlyRomanCharacters:(BOOL)arg1;
- (BOOL)allowsOnlyRomanCharacters;
- (id)romanOnlyLocales;
- (id)defaultDesignValueForTableView:(id)arg1;
- (BOOL)titleEditsSelf;
- (long long)ibBaselineCount;
- (double)baselineForFrame:(struct CGRect)arg1 atIndex:(long long)arg2;
- (BOOL)isSpecialCasingForMiniFont;
- (id)widgetType;
- (BOOL)isStaticText;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (id)ibDesignableColorKeyPath;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)displayNameForDesignableKeyPath:(id)arg1;
- (id)ibDocumentationKeyPathForKeyPath:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
- (Class)ibEditorClass;
- (long long)gBorderType;
- (void)setGBorderType:(long long)arg1;
- (BOOL)ibWouldClipContentWithCellSize:(struct CGSize)arg1;
@end