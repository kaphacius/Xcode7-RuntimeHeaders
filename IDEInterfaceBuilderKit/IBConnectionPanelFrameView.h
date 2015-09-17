//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBConnectionPanelFrameView : DVTLayoutView_ML
{
    IBConnectionPanelScrollView *scrollView;
    IBImageButton *closeButton;
    DVTColoredSpinner *spinner;
    NSTextField *titleField;
    BOOL pinned;
    NSEvent *lastMouseDown;
}

+ (id)defaultSpinner;
+ (id)defaultTitleField;
+ (id)defaultCloseButton;
+ (void)setupCloseButtonImages:(id)arg1 pinned:(BOOL)arg2;
+ (id)defaultScrollView;
+ (double)minimumContentHeight;
+ (void)setDefaultContentWidth:(double)arg1;
+ (double)defaultContentWidth;
+ (double)minimumContentWidth;
@property(nonatomic) BOOL pinned; // @synthesize pinned;
@property(copy) NSEvent *lastMouseDown; // @synthesize lastMouseDown;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowKeyOrMainStateChanged:(id)arg1;
- (id)effectiveFooterBackgroundColor;
- (id)effectiveHeaderBackgroundColor;
- (BOOL)drawsMain;
- (BOOL)drawsKey;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)sizeToFitContentVerticallyRespectingMaximumHeight;
- (BOOL)isSizedToFitContents;
- (void)layoutTopDown;
- (struct CGSize)sizeForContentSize:(struct CGSize)arg1;
- (double)widthForContentWidth:(double)arg1;
- (double)heightForContentHeight:(double)arg1;
- (struct CGRect)growBoxFrame;
- (struct CGRect)footerFrame;
- (struct CGRect)headerFrame;
- (struct CGRect)titleFrame;
- (struct CGRect)spinnerFrame;
- (struct CGRect)contentFrame;
- (struct CGRect)closeButtonFrame;
- (double)frameCornerRadius;
- (double)footerHeight;
- (double)headerHeight;
- (BOOL)isFlipped;
- (id)spinner;
@property(copy) NSString *title;
@property(retain) NSView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end