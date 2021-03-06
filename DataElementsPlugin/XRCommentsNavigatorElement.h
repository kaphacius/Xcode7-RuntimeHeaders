//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRCommentsNavigatorElement : PFTDataElement <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_comments;
    NSTableView *_tableNotRetained;
    struct _NSRange _filteringStackRange;
    NSFont *_normalFont;
    NSFont *_frameFont;
    BOOL _inverted;
}

+ (id)colorForLibrary:(id)arg1;
- (void).cxx_destruct;
- (id)stackFromTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_selectionDidChange:(id)arg1;
- (void)_rowClicked:(id)arg1;
- (id)createView;
- (void)_copyFrames:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_handleAction:(id)arg1;
- (id)selectedObjects;
- (void)setup;
- (void)invert;
- (void)_updateSortIcon;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end