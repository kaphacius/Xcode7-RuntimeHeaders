//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSURLStorageCacheClient
- (void)notifyCacheClientOfTimeRelativeResponses:(NSArray *)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(NSString *)arg1 filePath:(NSString *)arg2 forUUID:(NSString *)arg3;
@end