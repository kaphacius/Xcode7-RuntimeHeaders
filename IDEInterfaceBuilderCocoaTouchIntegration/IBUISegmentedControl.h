//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUISegmentedControl : IBUIControl <IBDocumentArchiving, NSCoding>
{
    BOOL _apportionsSegmentWidthsByContent;
    NSMutableArray *segmentConfigurations;
    int segmentControlStyle;
    BOOL momentary;
    long long selectedSegmentIndex;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedWidthForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedAutosizeValueForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedIsSelectedForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedIsEnabledForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedContentYOffsetsForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedContentXOffsetsForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedImageForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedTitleForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedSegmentControlStyle;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL apportionsSegmentWidthsByContent; // @synthesize apportionsSegmentWidthsByContent=_apportionsSegmentWidthsByContent;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex;
@property(nonatomic) BOOL momentary; // @synthesize momentary;
@property(nonatomic) int segmentControlStyle; // @synthesize segmentControlStyle;
- (void).cxx_destruct;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
@property(copy) NSArray *segmentImages;
@property(copy) NSArray *segmentContentOffsetsAsStrings;
@property(copy) NSArray *segmentContentOffsets;
@property(copy) NSArray *segmentWidths;
@property(copy) NSArray *segmentEnabledStates;
@property(copy) NSArray *segmentTitles;
- (id)imageForSegment:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (BOOL)isEnabledForSegment:(unsigned long long)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (double)widthForSegment:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 forSegment:(unsigned long long)arg2;
- (id)titleForSegment:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
@property long long numberOfSegments;
- (id)marshallerForAttributeStateKey:(id)arg1 defaultMarshaller:(id)arg2 context:(id)arg3;
- (id)ibDisplayNameForKeyPath:(id)arg1;
@property(copy) NSArray *ibArchivedSegmentConfigurations;
- (id)segmentConfigurations;
- (void)decodeTintColor:(id)arg1;
- (void)encodeTintColor:(id)arg1;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIbInspectedNumberOfSegments:(long long)arg1;
- (long long)ibInspectedNumberOfSegments;
- (void)setIbInspectedWidthForInspectedSegment:(id)arg1;
- (id)ibInspectedWidthForInspectedSegment;
- (id)ibInspectedAutosizeValueForInspectedSegment;
- (double)ibAutosizedSegmentWidth;
- (void)setIbInspectedIsSelectedForInspectedSegment:(BOOL)arg1;
- (BOOL)ibInspectedIsSelectedForInspectedSegment;
- (void)setIbInspectedIsEnabledForInspectedSegment:(BOOL)arg1;
- (BOOL)ibInspectedIsEnabledForInspectedSegment;
- (void)setIbInspectedContentYOffsetsForInspectedSegment:(id)arg1;
- (id)ibInspectedContentYOffsetsForInspectedSegment;
- (void)setIbInspectedContentXOffsetsForInspectedSegment:(id)arg1;
- (id)ibInspectedContentXOffsetsForInspectedSegment;
- (void)setIbInspectedImageForInspectedSegment:(id)arg1;
- (id)ibInspectedImageForInspectedSegment;
- (void)setIbInspectedTitleForInspectedSegment:(id)arg1;
- (id)ibInspectedTitleForInspectedSegment;
- (long long)ibInspectedSegmentValue;
- (void)setIbExternalInspectedSegment:(id)arg1;
- (id)ibExternalInspectedSegment;
- (void)setIbInspectedSegmentControlStyle:(int)arg1;
- (int)ibInspectedSegmentControlStyle;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoIBUIToolbar:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUINavigationItem:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)customizeForBar:(id)arg1;
- (long long)ibPreferredResizeDirection;
- (void)designableSetImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)designableSetTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (BOOL)shouldEditTitleOfSegment:(long long)arg1;
- (BOOL)isClippingDesignableContent;
- (double)mostConstrainedSegmentWidth;
- (id)ibDesignableFont;
- (id)imageRects;
- (id)textRects;
- (unsigned long long)segmentAtPoint:(struct CGPoint)arg1;
- (id)segmentLayoutRects;
- (id)segmentRects;
- (id)segmentRectsForBoundsWithInset:(CDStruct_c519178c)arg1;
- (Class)ibEditorClass;
- (id)ibQualifyingInfoForDefaultLabel;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end