//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRScriptListElement : PFTDataElement <NSTableViewDataSource, NSTableViewDelegate>
{
    XRScriptListElementViewController *_scriptListVC;
}

@property(retain, nonatomic) XRScriptListElementViewController *scriptListVC; // @synthesize scriptListVC=_scriptListVC;
- (void).cxx_destruct;
- (void)_loadScriptText;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_tableViewSelectionDidChange;
- (void)playButtonClicked:(id)arg1;
- (void)playButtonRowClicked:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)createView;
- (id)stopImage;
- (id)playImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end