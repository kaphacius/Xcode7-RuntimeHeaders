//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSToolbarItemEditor : IBNSViewEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (id)viewForClippingToWhenDrawingSelectionKnobsForObject:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (id)stringEditingContextForEvent:(id)arg1;
- (id)fontForTitleEditing;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(CDUnion_42e99c75)arg3;
- (id)editedView;
- (id)itemView;
- (id)allowedItemsView;
- (id)configurationView;
- (id)editedToolbarItem;

@end