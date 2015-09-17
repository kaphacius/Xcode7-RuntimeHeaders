//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStructureAreaDockItemView : DVTLayoutView_ML
{
    NSImage *image;
    NSString *title;
    struct CGSize imageSize;
    id representedObject;
    IBAbstractStructureAreaDockLabelPopUp *labelPopUp;
    NSImage *cachedPressedImageMask;
    BOOL pressed;
    BOOL drawsWithActiveLook;
    BOOL drawsSelected;
    BOOL drawsHighlighted;
    IBStructureAreaDockLabelContainer *labelPopUpContainer;
    BOOL showingOpenIndicator;
    unsigned long long labelArrowEdge;
    BOOL shouldShowLabelPopUp;
    BOOL _drawsWithFlatStyle;
    id <IBStructureAreaDockItemViewDelegate> _delegate;
}

+ (id)openIndicatorImageDrawnAsSelected:(BOOL)arg1;
+ (id)openIndicatorImage;
@property(nonatomic) BOOL drawsWithFlatStyle; // @synthesize drawsWithFlatStyle=_drawsWithFlatStyle;
@property(nonatomic) __weak id <IBStructureAreaDockItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldShowLabelPopUp; // @synthesize shouldShowLabelPopUp;
@property(nonatomic) unsigned long long labelArrowEdge; // @synthesize labelArrowEdge;
@property(nonatomic, getter=isShowingOpenIndicator) BOOL showingOpenIndicator; // @synthesize showingOpenIndicator;
@property(retain) IBStructureAreaDockLabelContainer *labelPopUpContainer; // @synthesize labelPopUpContainer;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook;
@property(nonatomic) BOOL drawsHighlighted; // @synthesize drawsHighlighted;
@property(nonatomic) BOOL drawsSelected; // @synthesize drawsSelected;
@property(retain) id representedObject; // @synthesize representedObject;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize;
@property(retain, nonatomic) NSImage *image; // @synthesize image;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)highlightPath;
- (struct CGPoint)startOfCurveCommingFromCorner:(struct CGPoint)arg1 goingAroundCorner:(struct CGPoint)arg2 withRadius:(double)arg3;
- (double)valueApproachingValue:(double)arg1 from:(double)arg2 distance:(double)arg3;
- (id)cachedPressedImageMask;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackMouse:(id)arg1;
- (BOOL)isPressed;
- (void)setPressed:(BOOL)arg1;
- (id)labelPopUp;
- (void)layoutBottomUp;
- (struct CGPoint)labelPopOutPoint;
- (struct CGRect)openIndicatorRect;
- (struct CGSize)idealSize;
- (struct CGRect)selectionRect;
- (struct CGRect)imageRect;
- (double)imageHorizontalInset;
- (double)imageVerticalInset;
- (CDStruct_c519178c)imageInset;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end