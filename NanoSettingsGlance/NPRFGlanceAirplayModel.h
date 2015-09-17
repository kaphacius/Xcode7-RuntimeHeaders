//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFGlanceAirplayModel : NSObject
{
    _Bool _airplayActive;
    _Bool _airplayAvailable;
    id <NPRFGlanceAirplayModelDelegate> _delegate;
    NMCAudioRoutingManager *_audioRoutingManager;
}

@property(readonly, nonatomic) NMCAudioRoutingManager *audioRoutingManager; // @synthesize audioRoutingManager=_audioRoutingManager;
@property(nonatomic, getter=isAirplayAvailable) _Bool airplayAvailable; // @synthesize airplayAvailable=_airplayAvailable;
@property(nonatomic, getter=isAirplayActive) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(nonatomic) __weak id <NPRFGlanceAirplayModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_virtualAudioRoutesDidChangeNotification;
- (void)updateAudioRoutingManager;
- (void)dealloc;
- (id)init;

@end