//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUITextView : IBUIScrollView <IBDocumentArchiving, NSCoding, IBUIAttributedTextContainer, IBUITextInputTraits>
{
    NSString *text;
    IBUIFontDescription *fontDescription;
    NSColor *textColor;
    BOOL editable;
    BOOL selectable;
    int textAlignment;
    IBUITextInputTraits *textInputTraits;
    unsigned long long dataDetectorTypes;
    NSAttributedString *attributedText;
    BOOL usesAttributedText;
    BOOL allowsEditingTextAttributes;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) int textAlignment; // @synthesize textAlignment;
@property(nonatomic) BOOL editable; // @synthesize editable;
@property(copy, nonatomic) NSString *text; // @synthesize text;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor;
@property(nonatomic) BOOL selectable; // @synthesize selectable;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes;
@property(nonatomic) BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes;
@property(nonatomic) BOOL usesAttributedText; // @synthesize usesAttributedText;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText;
- (void).cxx_destruct;
- (void)decodeFont:(id)arg1;
- (void)encodeFont:(id)arg1;
- (void)unarchiveFont:(id)arg1;
- (void)archiveFont:(id)arg1;
- (void)decodeAttributedText:(id)arg1;
- (void)encodeAttributedText:(id)arg1;
- (void)unarchiveAttributedText:(id)arg1;
- (void)archiveAttributedText:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(retain, nonatomic) IBUITextInputTraits *textInputTraits;
- (void)setFontDescription:(id)arg1;
@property(readonly, copy, nonatomic) IBUIFontDescription *fontDescription;
@property(readonly) IBUIFontDescription *defaultFontDescription;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (BOOL)ibOverridesFrameworkMetricsForPreferredSize;
- (id)ibFontFromFontDescription;
- (id)ibDefaultFontKeyPath;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (Class)ibEditorClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end