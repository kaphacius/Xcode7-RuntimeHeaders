//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XcodeItemReference : XcodeContainerItem
{
}

@property BOOL usesTabs;
@property long long tabWidth;
@property(readonly, copy) NSString *realPath;
@property(readonly, copy) NSString *projectRelativePath;
@property int pathType;
@property(readonly, copy) NSString *path;
@property(copy) NSString *name;
@property(readonly) BOOL localized;
@property int lineEnding;
@property(readonly) BOOL leaf;
@property long long indentWidth;
@property(readonly, copy) XcodeGroup *group;
@property(readonly, copy) NSString *fullPath;
@property int fileEncoding;
@property(readonly, copy) NSArray *entireContents;
@property(readonly, copy) NSArray *contents;
@property(readonly, copy) NSString *buildProductsRelativePath;

@end