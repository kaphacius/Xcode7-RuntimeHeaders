//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUITabBarControllerEditor : IBUIViewControllerEditor
{
    NSSet *tabBarItems;
}

+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
- (BOOL)interceptEvent:(id)arg1;
- (struct CGRect)windowClippingRectForHighlightingObject:(id)arg1;
- (struct CGRect)highlightRectForObject:(id)arg1;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageStateForItems:(id)arg1 withName:(id)arg2;
- (id)draggedImageStateForControllers:(id)arg1 withName:(id)arg2;
- (id)bottomBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)topBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)tabBarForSimulatedBarMetrics:(id)arg1;
- (id)editorView:(id)arg1 selectedItemForSimulatedTabBar:(id)arg2;
- (id)editorView:(id)arg1 itemsForSimulatedTabBar:(id)arg2;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)didDeactivate;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)didOpen;
- (id)editedTabBarControllerViewControllers;
- (id)orderedSelectedViewControllers;
- (id)selectedViewControllers;
- (id)editedTabBarController;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

@end