//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRSettingsController : PSListController <CRCarPlayPreferencesDelegate, CRVehicleDiscovery>
{
    CRCarPlayPreferences *_carplayPreferences;
    CRPairedVehicleManager *_vehicleManager;
    CRVehicleDiscoverer *_vehicleDiscoverer;
    CRRadiosAvailabilityPrompt *_radiosPowerPrompt;
    NSMutableArray *_storedCarsSpecifiers;
    UIImage *_headerImage;
}

@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) NSMutableArray *storedCarsSpecifiers; // @synthesize storedCarsSpecifiers=_storedCarsSpecifiers;
@property(retain, nonatomic) CRRadiosAvailabilityPrompt *radiosPowerPrompt; // @synthesize radiosPowerPrompt=_radiosPowerPrompt;
@property(retain, nonatomic) CRVehicleDiscoverer *vehicleDiscoverer; // @synthesize vehicleDiscoverer=_vehicleDiscoverer;
@property(retain, nonatomic) CRPairedVehicleManager *vehicleManager; // @synthesize vehicleManager=_vehicleManager;
@property(retain, nonatomic) CRCarPlayPreferences *carplayPreferences; // @synthesize carplayPreferences=_carplayPreferences;
- (void).cxx_destruct;
- (void)handleCarPlayAllowedDidChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)_setSpecifier:(id)arg1 shouldShowActivity:(_Bool)arg2;
- (void)_updateSpecifierForVehicle:(id)arg1;
- (id)_specifierForIndexPath:(id)arg1;
- (void)_updateOtherCarsGroupNameForSpecifier:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (_Bool)storedVehicles:(id)arg1 containsMatchForDiscoveredVehicle:(id)arg2;
- (id)statusForDiscoveredVehicleSpecifier:(id)arg1;
- (id)specifierForDiscoveredVehicle:(id)arg1;
- (id)statusForStoredVehicleSpecifier:(id)arg1;
- (id)specifierForStoredVehicle:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)handlePairedVehiclesChanged:(id)arg1;
- (id)viewControllerPresentingPairingForVehicleDiscoverer:(id)arg1;
- (void)vehicleDiscoverer:(id)arg1 didRemoveVehicle:(id)arg2;
- (void)vehicleDiscoverer:(id)arg1 didUpdateVehicle:(id)arg2;
- (void)vehicleDiscoverer:(id)arg1 didDiscoverVehicle:(id)arg2;
- (void)pairAccessorySpecifier:(id)arg1;
- (void)unpairVehicle:(id)arg1;
- (void)pairVehicle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end