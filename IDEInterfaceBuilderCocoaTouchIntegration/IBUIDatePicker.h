//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUIDatePicker : IBUIControl <IBDocumentArchiving, NSCoding>
{
    int datePickerMode;
    NSLocale *locale;
    NSDate *date;
    NSDate *minimumDate;
    NSDate *maximumDate;
    BOOL useCurrentDateDuringDecoding;
    BOOL hasMinimumDate;
    BOOL hasMaximumDate;
    double countDownDuration;
    unsigned long long minuteInterval;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedUseCurrentDate;
+ (id)keyPathsForValuesAffectingInspectedDatePickerMode;
+ (id)keyPathsForValuesAffectingIbInspectedMaximumDate;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumDate;
+ (id)keyPathsForValuesAffectingIbInspectedDate;
+ (id)keyPathsForValuesAffectingInspectedCountDownDuration;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL useCurrentDateDuringDecoding; // @synthesize useCurrentDateDuringDecoding;
@property(nonatomic) unsigned long long minuteInterval; // @synthesize minuteInterval;
@property(nonatomic) double countDownDuration; // @synthesize countDownDuration;
@property(nonatomic) BOOL hasMaximumDate; // @synthesize hasMaximumDate;
@property(nonatomic) BOOL hasMinimumDate; // @synthesize hasMinimumDate;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale;
@property(nonatomic) int datePickerMode; // @synthesize datePickerMode;
- (void).cxx_destruct;
@property(copy) NSDate *ibArchivedMaximumDate;
@property(copy) NSDate *ibArchivedMinimumDate;
@property(copy) NSDate *ibArchivedDate;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(copy) NSDate *maximumDate; // @synthesize maximumDate;
@property(copy) NSDate *minimumDate; // @synthesize minimumDate;
@property(copy) NSDate *date; // @synthesize date;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)prefersCachedImageBasedDrawing;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIbInspectedUseCurrentDate:(unsigned long long)arg1;
- (unsigned long long)ibInspectedUseCurrentDate;
- (void)setInspectedDatePickerMode:(int)arg1;
- (int)inspectedDatePickerMode;
- (void)setIbInspectedMaximumDate:(id)arg1;
- (id)ibInspectedMaximumDate;
- (void)setIbInspectedMinimumDate:(id)arg1;
- (id)ibInspectedMinimumDate;
- (void)setIbInspectedDate:(id)arg1;
- (id)ibInspectedDate;
- (void)setInspectedCountDownDuration:(double)arg1;
- (double)inspectedCountDownDuration;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (unsigned long long)ibPreferredActionEventType;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGSize)ibMinimumSizeForCustomizationForTargetRuntime:(id)arg1;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end