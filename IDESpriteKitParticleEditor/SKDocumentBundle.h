//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKDocumentBundle : NSBundle
{
    SKDocumentBundleCache *_cache;
}

+ (void)releaseSharedBundleForSKDocument:(id)arg1;
+ (id)sharedBundleForSKDocument:(id)arg1;
@property(retain, nonatomic) SKDocumentBundleCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)searchDirectoryForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)initWithPath:(id)arg1 andCache:(id)arg2;

@end