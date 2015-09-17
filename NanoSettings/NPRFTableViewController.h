//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFTableViewController : NPRFBaseTableViewController
{
    NSMutableDictionary *_imageCashesDictionary;
    _Bool _hideInternalSettings;
    NSBundle *_internalBundle;
    unsigned int _rowsCount;
    NSArray *_textsForCells;
    NSArray *_classesForCells;
    _Bool _isInWiFiDiagnosticMode;
    _Bool _isLoggingProfileInstalled;
    _Bool _isBluetoothShowing;
    _Bool _isAirplaneModeShowing;
    _Bool _isSoundsShowing;
    _Bool _isPasscodeShowing;
    _Bool _isBrightnessShowing;
    _Bool _isInternalSettingsBundleExists;
}

@property(nonatomic) _Bool isInternalSettingsBundleExists; // @synthesize isInternalSettingsBundleExists=_isInternalSettingsBundleExists;
@property(nonatomic) _Bool isBrightnessShowing; // @synthesize isBrightnessShowing=_isBrightnessShowing;
@property(nonatomic) _Bool isPasscodeShowing; // @synthesize isPasscodeShowing=_isPasscodeShowing;
@property(nonatomic) _Bool isSoundsShowing; // @synthesize isSoundsShowing=_isSoundsShowing;
@property(nonatomic) _Bool isAirplaneModeShowing; // @synthesize isAirplaneModeShowing=_isAirplaneModeShowing;
@property(nonatomic) _Bool isBluetoothShowing; // @synthesize isBluetoothShowing=_isBluetoothShowing;
@property(nonatomic) _Bool isLoggingProfileInstalled; // @synthesize isLoggingProfileInstalled=_isLoggingProfileInstalled;
@property(nonatomic) _Bool isInWiFiDiagnosticMode; // @synthesize isInWiFiDiagnosticMode=_isInWiFiDiagnosticMode;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)actualRowFromRow:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)imageForSection:(int)arg1 row:(int)arg2;
@property(readonly, nonatomic) NSMutableDictionary *imageCashesDictionary;
- (void)checkIfLoggingProfileInstalled;
- (void)checkIfWiFiDebugProfileInstalled;
- (void)checkProfileInstallation;
- (void)_loadInternalBundle;
- (void)calculateRowsCount;
- (void)_getInternalBundle;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end