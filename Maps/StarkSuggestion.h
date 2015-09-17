//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkSuggestion : NSObject <NSCopying>
{
    int _suggestionType;
    int _routineType;
    NSString *_name;
    MKMapItem *_mapItem;
    NSURL *_url;
    NSDate *_date;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEORoute *_route;
}

@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int routineType; // @synthesize routineType=_routineType;
@property(readonly, nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuggestionType:(int)arg1 mapItem:(id)arg2 url:(id)arg3 date:(id)arg4;

@end