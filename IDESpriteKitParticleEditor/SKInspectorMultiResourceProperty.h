//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKInspectorMultiResourceProperty : IDEInspectorProperty <NSTableViewDataSource, NSTableViewDelegate>
{
    IDEInspectorKeyPath *_valueKeyPath;
    DVTTableView *_tableView;
    NSDictionary *_mediaFileMapper;
    NSDictionary *_displayNamePathMapper;
    id <DVTInvalidation> _variantContextKVOToken;
    IDEMediaResourceVariantContext *_variantContext;
}

+ (id)parseAssetCatalogAtPath:(id)arg1;
+ (id)supportedSoundFileTypes;
+ (id)supportedFileTypes;
- (void).cxx_destruct;
- (void)updateRowSelection;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)keyUp:(id)arg1;
- (void)refresh;
- (double)baseline;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)retrieveIDEMediaResourceWithFoldingStrategy:(id)arg1;
- (void)primitiveInvalidate;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end