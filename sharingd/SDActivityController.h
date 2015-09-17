//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDActivityController : NSObject <IDSServiceDelegate>
{
    IDSService *_activityService;
    _Bool _shouldStart;
    NSArray *_allPeerBTIdentifiers;
}

@property(retain, nonatomic) NSArray *allPeerBTIdentifiers; // @synthesize allPeerBTIdentifiers=_allPeerBTIdentifiers;
@property(nonatomic) _Bool shouldStart; // @synthesize shouldStart=_shouldStart;
- (void).cxx_destruct;
- (void)activityServiceDevicesChanged:(id)arg1;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)idsDeviceFromBTIdentifier:(id)arg1;
- (void)stop;
- (_Bool)restart;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end