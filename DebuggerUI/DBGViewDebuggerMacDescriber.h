//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGViewDebuggerMacDescriber : DBGAbstractViewDescriber
{
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (id)_dylibPathFromPluginsPath:(id)arg1;
+ (id)_dylibPathFromPlugins;
+ (id)_dylibPathFromLaunchSession:(id)arg1;
+ (id)viewDebuggingDylibPathForLaunchSession:(id)arg1;
+ (void)initialize;
- (void)primitiveInvalidate;
- (id)targetKitFamilyIdentifier;
- (void)_asyncStringFromDataValueSummary:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableFontFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableImageFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableColorFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_turnOnLayersAsSnapshotsOptionString;
- (void)fetchViewInfo:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)inspectableValueForDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)isViewObjectInteresting:(id)arg1;
- (id)classNameForDefaultViewIcon;

@end