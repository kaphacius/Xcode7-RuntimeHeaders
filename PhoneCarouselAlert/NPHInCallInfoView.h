//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHInCallInfoView : UIView
{
    _Bool _updatingDuration;
    _Bool _observingBacklight;
    NMUVolumeControlsView *_volumeControlView;
    NSString *_displayName;
    CADisplayLink *_durationUpdater;
}

@property(nonatomic, getter=isObservingBacklight) _Bool observingBacklight; // @synthesize observingBacklight=_observingBacklight;
@property(retain, nonatomic) CADisplayLink *durationUpdater; // @synthesize durationUpdater=_durationUpdater;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NMUVolumeControlsView *volumeControlView; // @synthesize volumeControlView=_volumeControlView;
@property(nonatomic) _Bool updatingDuration; // @synthesize updatingDuration=_updatingDuration;
- (void).cxx_destruct;
- (void)handleCrownButton;
- (void)updateDuration:(id)arg1;
- (void)_backlightWillTurnOn:(id)arg1;
- (void)dealloc;

@end