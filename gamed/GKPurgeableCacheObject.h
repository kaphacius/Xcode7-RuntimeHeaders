//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKPurgeableCacheObject : GKCacheObject
{
}

+ (void)purgeFromManagedObjectContext:(id)arg1 level:(int)arg2;
- (void)purge;
- (_Bool)purgeable;

@end