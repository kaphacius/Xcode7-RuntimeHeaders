//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Flyover : NSObject
{
    NSString *_announcement;
    GEOPDFlyover *_flyover;
    unsigned long long _animationID;
}

@property(readonly, nonatomic) unsigned long long animationID; // @synthesize animationID=_animationID;
@property(readonly, nonatomic) GEOPDFlyover *flyover; // @synthesize flyover=_flyover;
@property(readonly, nonatomic) NSString *announcement; // @synthesize announcement=_announcement;
- (void).cxx_destruct;
- (id)initWithAnnouncement:(id)arg1 flyover:(id)arg2 animationID:(unsigned long long)arg3;

@end