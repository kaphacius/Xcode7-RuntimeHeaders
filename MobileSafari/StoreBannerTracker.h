//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StoreBannerTracker : NSObject
{
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
- (void)blockProductBanner:(id)arg1;
- (void)isProductBannerBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clear;
- (void)save;
- (void)load;
- (id)filePath;
- (id)init;

@end