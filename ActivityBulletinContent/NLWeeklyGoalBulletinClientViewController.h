//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLWeeklyGoalBulletinClientViewController : NLBulletinClientViewController
{
    NLWeeklyGoalBulletinView *_bulletinView;
    id <NLBulletinClientFactoryViewControllerDelegate> _factoryDelegate;
}

@property(readonly, nonatomic) __weak id <NLBulletinClientFactoryViewControllerDelegate> factoryDelegate; // @synthesize factoryDelegate=_factoryDelegate;
- (void).cxx_destruct;
- (_Bool)_wantsDefaultHeaderBackgroundPlatterCompatibilityUnderlay;
@property(readonly, nonatomic) HKQuantity *weeklyGoal;
- (_Bool)shouldPerformDefaultActionOnView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithWeeklySummaryInfo:(id)arg1 recommendedGoal:(double)arg2 factoryDelegate:(id)arg3;
- (id)init;

@end