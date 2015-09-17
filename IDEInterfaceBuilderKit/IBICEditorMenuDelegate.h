//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICEditorMenuDelegate : NSObject <IBICCommandMenuDelegate, NSMenuDelegate>
{
    IBICCommandMenuBuilder *_menuBuilder;
}

- (void).cxx_destruct;
- (id)commandMenuBuilderActionContext:(id)arg1;
- (id)commandMenuBuilderDocumentEditor:(id)arg1;
- (id)documentEditor;
- (void)menuNeedsUpdate:(id)arg1;
- (id)generateMenuItems;
- (id)menuBuilder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end