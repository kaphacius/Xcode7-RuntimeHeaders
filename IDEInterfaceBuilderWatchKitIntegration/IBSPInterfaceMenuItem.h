//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPInterfaceMenuItem : IBSPInterfaceObject <IBDocumentArchiving, NSCoding>
{
    long long _icon;
    IBSPInterfaceMenu *_menu;
    NSString *_title;
    NSString *_image;
}

+ (id)keyPathsForValuesAffectingIbInspectedIcon;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IBSPInterfaceMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithTargetRuntime:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property long long ibInspectedIcon;
- (void)ibPopulateWarnings:(id)arg1 forDocument:(id)arg2 inConfiguration:(id)arg3 withStorage:(id)arg4 context:(id)arg5;
- (id)ibDefaultPlistValueForKeyPath:(id)arg1 plistKey:(id)arg2;
- (void)ibEnumeratePlistKeysForKeyPath:(id)arg1 document:(id)arg2 reason:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)ibTransformPlistValue:(id)arg1 forKeyPath:(id)arg2 plistKey:(id)arg3 document:(id)arg4 configuration:(id)arg5 reason:(long long)arg6;
- (BOOL)ibWantsIncompatibilityWarningForInterfaceType:(long long)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibIsValidOutletDestination;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end