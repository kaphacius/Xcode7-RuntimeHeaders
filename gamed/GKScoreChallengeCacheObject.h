//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKScoreChallengeCacheObject : GKChallengeCacheObject
{
}

+ (id)entityName;
- (void)updateWithServerRepresentation:(id)arg1;
- (id)internalRepresentation;
- (Class)classForInternalRepresentation;
- (_Bool)hasDetails;

// Remaining properties
@property(retain, nonatomic) NSNumber *context; // @dynamic context;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end