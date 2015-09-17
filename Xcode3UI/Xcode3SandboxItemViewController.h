//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3SandboxItemViewController : IDEProjectItemViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    DVTTableView *_fileAccessTable;
    DVTBorderedView *_fileAccessTableHeaderBorderedView;
}

@property(retain) DVTBorderedView *fileAccessTableHeaderBorderedView; // @synthesize fileAccessTableHeaderBorderedView=_fileAccessTableHeaderBorderedView;
@property(retain) DVTTableView *fileAccessTable; // @synthesize fileAccessTable=_fileAccessTable;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)loadView;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Xcode3SandboxItemModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end