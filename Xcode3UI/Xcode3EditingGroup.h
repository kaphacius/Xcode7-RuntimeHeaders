//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3EditingGroup : DVTModelObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSArray *_childItems;
    id _representedObject;
    NSString *_name;
}

@property(readonly, copy) NSArray *childItems; // @synthesize childItems=_childItems;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (BOOL)acceptDrop:(id)arg1 atIndex:(long long)arg2;
- (BOOL)allowsDrop:(id)arg1 atIndex:(long long)arg2;
- (id)initWithName:(id)arg1 representedObject:(id)arg2;
- (id)initWithName:(id)arg1 representedObject:(id)arg2 childItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end