//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPDirectionsTransfer : NSObject
{
    unsigned long long _problematicStepIndex;
    NSString *_startingStopName;
    id <GEOTransitArtworkDataSource> _startingStopArtworkData;
    NSString *_endingStopName;
    id <GEOTransitArtworkDataSource> _endingStopArtworkData;
}

@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> endingStopArtworkData; // @synthesize endingStopArtworkData=_endingStopArtworkData;
@property(readonly, nonatomic) NSString *endingStopName; // @synthesize endingStopName=_endingStopName;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> startingStopArtworkData; // @synthesize startingStopArtworkData=_startingStopArtworkData;
@property(readonly, nonatomic) NSString *startingStopName; // @synthesize startingStopName=_startingStopName;
@property(readonly, nonatomic, getter=_problematicStepIndex) unsigned long long problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;
- (void).cxx_destruct;
- (id)startToEndStationsLabelText;
- (id)_initWithStartingStopName:(id)arg1 artworkData:(id)arg2 endingStopName:(id)arg3 artworkData:(id)arg4 problematicStepIndex:(unsigned long long)arg5;

@end