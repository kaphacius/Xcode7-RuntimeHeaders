//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNWaypointsLoaderTicket : NSObject
{
    id <GEOMapServiceTicket> _mapServiceTicket;
    _Bool _isCancelled;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) id <GEOMapServiceTicket> mapServiceTicket; // @synthesize mapServiceTicket=_mapServiceTicket;
- (void).cxx_destruct;
- (void)cancel;

@end