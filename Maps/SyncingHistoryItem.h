//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SyncingHistoryItem <NSObject, NSCopying, MapsSynced>
@property(copy, nonatomic) NSString *syncIdentifier;
@property(nonatomic) double position;
@property(readonly, nonatomic) _Bool isValid;
@end