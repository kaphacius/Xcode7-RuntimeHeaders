//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3BuildPropertyOutlineView : DVTOutlineView
{
    double _contentInset;
    double _startingIndentation;
}

@property(nonatomic) double startingIndentation; // @synthesize startingIndentation=_startingIndentation;
@property(nonatomic) double contentInset; // @synthesize contentInset=_contentInset;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (id)subtitles;
- (void)_drawBackgroundForGroupRow:(long long)arg1 clipRect:(struct CGRect)arg2 isButtedUpRow:(BOOL)arg3;
- (double)_indentationForRow:(long long)arg1 withLevel:(long long)arg2 isSourceListGroupRow:(BOOL)arg3;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (id)selectedItems;
- (void)cancelOperation:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end