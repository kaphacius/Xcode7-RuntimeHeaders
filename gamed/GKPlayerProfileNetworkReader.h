//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKPlayerProfileNetworkReader : NSObject <GKDataReader>
{
    int _familiarity;
    GKDataTransport *_transport;
}

+ (id)readerWithFamiliarity:(int)arg1 transport:(id)arg2;
@property(nonatomic) int familiarity; // @synthesize familiarity=_familiarity;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
- (id)playerForServerRepresentation:(id)arg1;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)poolName;
- (id)profileRequestForPlayerIDs:(id)arg1;
- (void)dealloc;
- (id)initWithFamiliarity:(int)arg1 transport:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end