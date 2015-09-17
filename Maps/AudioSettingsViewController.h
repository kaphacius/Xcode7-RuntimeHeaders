//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AudioSettingsViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, AudioOutputSettingsManagerObserver, AudioOutputSettingAllowHFPTableRowDelegate>
{
    id <AudioSettingsViewControllerDelegate> _audioSettingsViewControllerDelegate;
    NSArray *_displayedRows;
    NSArray *_pickableRoutes;
}

@property(retain, nonatomic) NSArray *displayedRows; // @synthesize displayedRows=_displayedRows;
@property(nonatomic) __weak id <AudioSettingsViewControllerDelegate> audioSettingsViewControllerDelegate; // @synthesize audioSettingsViewControllerDelegate=_audioSettingsViewControllerDelegate;
- (void).cxx_destruct;
- (void)audioOutputSettingsManager:(id)arg1 updatedSettings:(id)arg2;
- (void)_routesChanged;
- (void)audioOutputSettingAllowHFPTableRow:(id)arg1 didChangeAllowHFPValue:(_Bool)arg2;
- (_Bool)bluetoothIsPicked;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_pauseSpokenAudioChanged:(id)arg1;
- (void)_selectOutputForTableRow:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_volumeStringForVolumeIndex:(int)arg1;
- (int)_volumeIndexForVolumeString:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadRoutes;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end