//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WeatherGlanceViewController : PUICViewController <PUICCrownInputSequencerDelegate, CSLSConnectionStatusObserver, CUISGlanceServiceViewController>
{
    _Bool _active;
    NSDictionary *_glanceContext;
    UILabel *_temperatureLabel;
    UILabel *_cityLabel;
    UIImageView *_weatherImage;
    UILabel *_lowerLabel;
    UIImageView *_locationIndicator;
    UILabel *_conditionTextLabel;
    UILabel *_highLowTempLabel;
    PUICContentUnavailableView *_noCitiesOverlay;
    NWMDisconnectedMessage *_disconnectedMessage;
    PUICContentUnavailableView *_errorNoData;
    PUICActivityIndicatorView *_spinner;
    NWMUserCityForecast *_forecast;
    unsigned int _connectionStatus;
    NWMKVOMediator *_forecastMediator;
    id _forecastUpdater;
    NWMScheduledCondition *_needsUpdate;
    unsigned int _mode;
    NWMKVOMediator *_cityListMediator;
    NWMUserCityList *_cityList;
    id _cityListUpdater;
    NSUserActivity *_userActivity;
}

@property(retain) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain) id cityListUpdater; // @synthesize cityListUpdater=_cityListUpdater;
@property(retain) NWMUserCityList *cityList; // @synthesize cityList=_cityList;
@property(retain) NWMKVOMediator *cityListMediator; // @synthesize cityListMediator=_cityListMediator;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(retain) NWMScheduledCondition *needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain) id forecastUpdater; // @synthesize forecastUpdater=_forecastUpdater;
@property(retain) NWMKVOMediator *forecastMediator; // @synthesize forecastMediator=_forecastMediator;
@property(nonatomic) unsigned int connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NWMUserCityForecast *forecast; // @synthesize forecast=_forecast;
@property(retain, nonatomic) NSDictionary *glanceContext; // @synthesize glanceContext=_glanceContext;
- (void).cxx_destruct;
- (id)autoload_spinner;
@property(readonly) PUICActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (id)autoload_errorNoData;
@property(readonly) PUICContentUnavailableView *errorNoData; // @synthesize errorNoData=_errorNoData;
- (id)autoload_disconnectedMessage;
@property(readonly) NWMDisconnectedMessage *disconnectedMessage; // @synthesize disconnectedMessage=_disconnectedMessage;
- (id)autoload_noCitiesOverlay;
@property(readonly) PUICContentUnavailableView *noCitiesOverlay; // @synthesize noCitiesOverlay=_noCitiesOverlay;
- (id)autoload_highLowTempLabel;
@property(readonly) UILabel *highLowTempLabel; // @synthesize highLowTempLabel=_highLowTempLabel;
- (id)autoload_conditionTextLabel;
@property(readonly) UILabel *conditionTextLabel; // @synthesize conditionTextLabel=_conditionTextLabel;
- (id)autoload_locationIndicator;
@property(readonly) UIImageView *locationIndicator; // @synthesize locationIndicator=_locationIndicator;
- (id)autoload_lowerLabel;
@property(readonly) UILabel *lowerLabel; // @synthesize lowerLabel=_lowerLabel;
- (id)autoload_weatherImage;
@property(readonly) UIImageView *weatherImage; // @synthesize weatherImage=_weatherImage;
- (id)autoload_cityLabel;
@property(readonly) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
- (id)autoload_temperatureLabel;
@property(readonly) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
- (id)_basicLabel;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)loadData:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)preheat;
@property(readonly, nonatomic) NSString *duetIdentifier;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) NSString *prelaunchBundleID;
@property(readonly, nonatomic) NSString *launchBundleID;
@property(readonly, nonatomic) NSURL *launchURL;
- (void)_updateViewMode;
- (void)connectionStatusDidChange:(unsigned int)arg1 lastConnection:(id)arg2;
- (void)cityList:(id)arg1 setSelectedCity:(id)arg2;
- (void)temperaturePreferenceChanged:(id)arg1;
- (void)forecast:(id)arg1 setDailyForecasts:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 setHourlyForecasts:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 setUpdating:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 setCurrentConditions:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 didBecomeDaytime:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 didSetUsingGeo:(id)arg2 atKeyPath:(id)arg3;
- (void)forecast:(id)arg1 didSetName:(id)arg2 atKeyPath:(id)arg3;
- (void)_refreshCityName:(id)arg1 usingGeo:(_Bool)arg2;
- (void)reloadData;
- (void)dealloc;
- (void)viewDidLoad;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CUISGlanceServiceViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *glanceTitle;
@property(readonly, nonatomic) NSUserActivity *glanceUserActivity;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end