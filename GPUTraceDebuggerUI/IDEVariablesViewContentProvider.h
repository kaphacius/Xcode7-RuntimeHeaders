//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEVariablesViewContentProvider <NSObject, DVTInvalidation>
@property(readonly) BOOL supportsShowingRawValues;
@property(readonly) CDUnknownBlockType nodeSortComparator;
@property(readonly) id <IDEVariablesViewContextMenuDelegate> contextMenuDelegate;
- (NSString *)contextNameForNode:(IDEVariablesViewNode *)arg1;
- (NSImage *)imageForNode:(IDEVariablesViewNode *)arg1;
- (BOOL)deleteNode:(IDEVariablesViewNode *)arg1;
- (void)provideScopeChoices:(id <IDEScopeableView>)arg1;
- (void)providerWasInstalledForVariablesView:(IDEVariablesView *)arg1;

@optional
@property(readonly) BOOL loadingNewVariablesInBackground;
- (int)formatterSizeStyle;
- (int)compoundNodeFormatterModeForItem:(IDEVariablesViewNode *)arg1 atRow:(long long)arg2;
- (NSDictionary *)statusCellsDictionary;
- (NSImage *)imageToUseInDefaultQuickLookForNode:(IDEVariablesViewNode *)arg1;
- (void)quickLookProviderForDataValue:(id <IDEDataValue>)arg1 quickLookProviderHandler:(void (^)(id <IDEVariablesViewQuickLookProvider>, NSError *))arg2;
- (void)newRootFromChildrenWasInstalled;
- (void)nodeWasDoubleClicked:(IDEVariablesViewNode *)arg1 row:(long long)arg2 column:(long long)arg3;
- (NSString *)scopePopUpTitleForScopeItem:(long long)arg1;
@end