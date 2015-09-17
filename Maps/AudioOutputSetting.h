//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AudioOutputSetting : NSObject
{
    NSSet *_pickableRoutes;
    _Bool _selected;
    _Bool _selectedForSystem;
    _Bool _hfpPreference;
}

+ (_Bool)isBluetoothRoute:(id)arg1;
+ (id)macAddressForRoute:(id)arg1;
@property(nonatomic) _Bool selectedForSystem; // @synthesize selectedForSystem=_selectedForSystem;
- (void).cxx_destruct;
- (void)setHfpPreference:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hfpPreference;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 shouldSetHFPPreference:(_Bool)arg2;
- (_Bool)selectedForRouteSelection:(int)arg1;
- (_Bool)isPicked;
- (_Bool)_isPicked:(id)arg1;
- (void)setPicked:(_Bool)arg1;
- (_Bool)_pickRoute:(id)arg1;
- (_Bool)pickedStateConsistentWithHFPPreference;
- (id)pickableRouteForHFPPreference:(_Bool)arg1;
- (_Bool)_isHFPRoute:(id)arg1;
- (_Bool)allowHFPPreferenceSelectionForRouteSelection:(int)arg1;
- (_Bool)settingSupportsBluetoothHFP;
- (_Bool)settingForDefaultRoute;
- (_Bool)settingForBluetoothComboDevice;
- (_Bool)settingForBluetoothDevice;
- (_Bool)isEqualToSetting:(id)arg1;
- (id)macAddress;
- (id)routeUID;
- (id)displayName;
- (id)description;
- (_Bool)containsPickableRoute:(id)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (id)initWithPickableRoute:(id)arg1;

@end