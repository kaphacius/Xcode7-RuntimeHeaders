//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPInterfacePicker : IBSPInterfaceView <IBDocumentArchiving, NSCoding>
{
    long long _style;
    long long _focusStyle;
    long long _indicatorMode;
    BOOL _enabled;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (BOOL)ibWantsRenderedDraggedLibraryView;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long indicatorMode; // @synthesize indicatorMode=_indicatorMode;
@property(nonatomic) long long focusStyle; // @synthesize focusStyle=_focusStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (unsigned long long)archivingDefaultAccessibilityTraits;
- (BOOL)archivingDefaultIsAccessibilityElement;
- (id)initWithTargetRuntime:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibDefaultPlistValueForKeyPath:(id)arg1 plistKey:(id)arg2;
- (id)ibTransformPlistValue:(id)arg1 forKeyPath:(id)arg2 plistKey:(id)arg3 document:(id)arg4 configuration:(id)arg5 reason:(long long)arg6;
- (long long)ibPreferredActionArgumentType;
- (BOOL)ibWantsPlaceholderImageInCanvas;
- (BOOL)ibIsInteractiveControl;
- (id)ibPlistItemTypeForEncodingReason:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end