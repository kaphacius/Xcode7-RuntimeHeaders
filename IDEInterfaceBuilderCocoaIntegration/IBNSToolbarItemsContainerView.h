//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSToolbarItemsContainerView : DVTLayoutView_ML
{
    IBNSToolbarItemsContainerView *itemsContainerCounterpart;
    IBMutableIdentityDictionary *viewsByToolbarItem;
    IBNSToolbarConfigurationView *configurationView;
    NSMutableArray *orderedItemViews;
    NSArray *preDragOrderedItemViews;
    IBToolbarItemView *draggedItem;
    NSMutableArray *layoutMatrix;
    NSEvent *lastMouseDown;
    NSMutableArray *items;
    NSArray *preDragItems;
    id <IBNSToolbarItemsContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IBNSToolbarItemsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IBNSToolbarConfigurationView *configurationView; // @synthesize configurationView;
@property(retain, nonatomic) IBNSToolbarItemsContainerView *itemsContainerCounterpart; // @synthesize itemsContainerCounterpart;
@property(copy, nonatomic) NSArray *items; // @synthesize items;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (long long)dropIndexForPoint:(struct CGPoint)arg1 forItemAtIndex:(long long)arg2;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (void)dragItemView:(id)arg1 withMouseDown:(id)arg2 mouseDragged:(id)arg3;
- (id)toolbarItemFromPasteboardData:(id)arg1;
- (id)dataForSerializingToolbarItem:(id)arg1;
- (BOOL)supportsDragFromCounterpart;
- (id)localPasteboardType;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutBottomUp;
- (id)layoutItems:(id)arg1 inRect:(struct CGRect)arg2;
@property(readonly, nonatomic) BOOL wraps;
- (void)viewDidMoveToWindow;
- (id)itemViewAtPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)addItem:(id)arg1;
- (void)removeAllItems;
- (void)removeItemRepresentedByItemView:(id)arg1;
- (id)generateItemViewForToolbarItem:(id)arg1;
- (BOOL)isFlipped;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)orderedItemViews;
- (BOOL)canAddToolbarItem:(id)arg1;
- (id)toolbarItemForItemView:(id)arg1;
- (id)firstViewForItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItems:(id)arg1;
- (void)toolbarItemsContainerViewCommonInit;

@end