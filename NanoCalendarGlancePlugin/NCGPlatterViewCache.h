//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCGPlatterViewCache : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)cacheBackgroundImage:(id)arg1 forBounds:(struct CGRect)arg2 color:(id)arg3 roundedCorners:(unsigned int)arg4;
- (id)backgroundImageForBounds:(struct CGRect)arg1 color:(id)arg2 roundedCorners:(unsigned int)arg3;
- (id)init;

@end