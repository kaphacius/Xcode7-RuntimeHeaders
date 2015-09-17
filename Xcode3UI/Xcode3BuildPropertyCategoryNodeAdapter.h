//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3BuildPropertyCategoryNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    Xcode3BuildSettingsEditor *_editor;
    XCPropertyDomainSpecification *_propertyDomain;
}

@property(retain) XCPropertyDomainSpecification *propertyDomain; // @synthesize propertyDomain=_propertyDomain;
@property(readonly) Xcode3BuildSettingsEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (BOOL)shouldSortChildrenOfNode:(id)arg1;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (long long)compareDataNode:(id)arg1 withDataNode:(id)arg2;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)dataNode:(id)arg1 outlineViewIsGroupItem:(id)arg2;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (BOOL)isDataNodeExpandedByDefault:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (BOOL)filterChildData:(id)arg1 parentNode:(id)arg2 designatedAdapter:(id)arg3;
- (BOOL)filterAllValuesForName:(id)arg1 searchString:(id)arg2 inValue:(BOOL)arg3 inDefinition:(BOOL)arg4;
- (BOOL)_filterAllValuesForName:(id)arg1 searchString:(id)arg2 inColumnContext:(id)arg3 inValue:(BOOL)arg4 inDefinition:(BOOL)arg5;
- (BOOL)filter:(id)arg1 searchString:(id)arg2;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (id)nameForNode:(id)arg1;
- (id)nameForData:(id)arg1;
- (void)dealloc;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end