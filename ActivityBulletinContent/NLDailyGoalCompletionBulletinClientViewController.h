//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLDailyGoalCompletionBulletinClientViewController : NLBulletinClientViewController <NLDailyGoalProgressViewDelegate>
{
    NSArray *_goalTypes;
    NSString *_bulletinRecordID;
    HKActivityCache *_activityCache;
    _ActivityChartDataController *_chartDataController;
    FIUIRingsViewController *_ringsVC;
    NLDailyGoalProgressView *_goalCompletedView;
    NSNumberFormatter *_integerNumberFormatter;
    _Bool _showMuteOption;
    id <NLBulletinClientFactoryViewControllerDelegate> _factoryDelegate;
}

@property(readonly, nonatomic) __weak id <NLBulletinClientFactoryViewControllerDelegate> factoryDelegate; // @synthesize factoryDelegate=_factoryDelegate;
- (void).cxx_destruct;
- (_Bool)_wantsDefaultHeaderBackgroundPlatterCompatibilityUnderlay;
- (id)_formatDoubleAsInteger:(double)arg1;
- (id)_backgroundViewForStandChartWithLineSpacing:(float)arg1 lineWidth:(float)arg2;
- (id)_backgroundViewForChart;
- (void)setGraphData:(id)arg1;
- (id)_ringsVC;
- (void)setActivityCache:(id)arg1;
- (void)setLowerText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)progressViewDidSelectMuteCoachingForToday:(id)arg1;
- (void)progressViewDidSelectDismiss:(id)arg1;
- (_Bool)shouldPerformDefaultActionOnView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_unitPreferencesDidChange;
- (void)dealloc;
- (id)initWithGoalTypes:(id)arg1 bulletinRecordID:(id)arg2 factoryDelegate:(id)arg3 showMuteOption:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end