//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIPopUpButton (IBHIPopUpButtonIntegration)
+ (id)titledWidgetTypes;
+ (id)untitledWidgetTypes;
+ (id)menuItemlessWidgetTypes;
+ (id)standardWidgetTypes;
+ (id)titledMenuItemlessWidgetTypes;
+ (id)untitledMenuItemlessWidgetTypes;
+ (id)titledStandardWidgetTypes;
+ (id)untitledStandardWidgetTypes;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)selectedMenuItem;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (struct _NSSize)ibMaximumSize;
- (struct _NSSize)ibMinimumSize;
- (struct _NSSize)ibPreferredDesignSize;
- (id)widgetType;
- (Class)trackerClass;
- (Class)ibEditorClass;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (id)ibDefaultChildren;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end