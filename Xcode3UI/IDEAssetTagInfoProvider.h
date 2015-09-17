//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEAssetTagInfoProvider <DVTInvalidation, NSObject>
+ (id)assetTagInfoProviderForFileReference:(IDEContainerItem *)arg1;
+ (BOOL)canProvideAssetTagInfoForFileReference:(IDEContainerItem *)arg1;
- (BOOL)isTagEditable:(NSString *)arg1;
- (void)removeTaggedAssetItemListener:(id <IDEAssetTagChangeListener>)arg1;
- (void)addTaggedAssetItemListener:(id <IDEAssetTagChangeListener>)arg1;
- (NSSet *)taggedAssetItems;
@end