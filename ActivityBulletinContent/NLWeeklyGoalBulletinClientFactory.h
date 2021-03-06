//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLWeeklyGoalBulletinClientFactory : NLBulletinClientSubFactory
{
    NLWeeklyGoalBulletinClientViewController *_weeklyGoalViewController;
    BBBulletin *_bulletin;
    NSUserActivity *_userActivity;
    HKHealthStore *_healthStore;
    double _recommendedGoalInCalories;
    double _savedGoalInCalories;
}

- (void).cxx_destruct;
- (id)coachingEventSampleForPresentationDate:(id)arg1 dismissDate:(id)arg2 dismissReason:(int)arg3;
- (id)aggdKeyName;
- (void)saveWeeklyGoal;
- (id)userActivity;
- (id)actionMenuPresentation;
- (id)primaryPagePresentation;
- (id)initWithBulletins:(id)arg1;

@end