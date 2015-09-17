//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRMapViewTemplate : NSRTemplate <NSRActionableTemplate>
{
    NSRAction *_action;
    NSRLocation *_location;
    NSNumber *_zoomLevel;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp; // @synthesize extSessionGuidCreatedTimestamp=_extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid; // @synthesize extSessionGuid=_extSessionGuid;
@property(copy, nonatomic) NSNumber *zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) NSRLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSRAction *action; // @synthesize action=_action;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end