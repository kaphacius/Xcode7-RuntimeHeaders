//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAchievementDescriptionCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;
- (id)internalRepresentation;
- (void)updateWithServerRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSNumber *maximumPoints; // @dynamic maximumPoints;
@property(nonatomic) _Bool replayable; // @dynamic replayable;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end