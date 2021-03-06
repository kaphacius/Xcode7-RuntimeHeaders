//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PlaceDisplayHistoryItem : NSObject <SyncingHistoryItem, HistoryItem, NSCopying>
{
    double _timestamp;
    MKMapItem *_mapItem;
    double _position;
    MSPHistoryEntryStorage *_storage;
}

@property(readonly, nonatomic) MSPHistoryEntryStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *syncIdentifier;
- (long long)type;
- (double)timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)storageData;
- (void)updateWithStorage:(id)arg1;
- (id)initWithSearchRequestStorage:(id)arg1;
- (id)initWithMapItem:(id)arg1;
@property(readonly, nonatomic) NSData *syncData;
- (_Bool)updateFromSyncData:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end