//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersScheduledListModel : RemindersListModel
{
    NSArray *_days;
    long long _todayIndex;
    long long _numCompletedTodayStable;
    long long _numUncompletedTodayStable;
    NSMutableDictionary *_mergedReminders;
}

- (void).cxx_destruct;
- (_Bool)invalidateMaintainedReminders;
- (_Bool)shouldInvalidateReminder:(id)arg1;
- (id)fetchProtectedData;
- (id)predicateForCountingReminders;
- (void)faultReminder:(id)arg1;
- (id)propertiesToFetch;
- (void)_scheduledTaskCacheChanged;
- (void)reloadSynchronously:(_Bool)arg1;
- (long long)displayedNumberOfOverdueReminders;
- (long long)numberOfUncompletedRemindersAtDayIndex:(long long)arg1 forDisplay:(_Bool)arg2 onlyOverdue:(_Bool)arg3;
- (long long)numberOfUncompletedRemindersAtDayIndex:(long long)arg1 forDisplay:(_Bool)arg2;
- (long long)numberOfUncompletedRemindersAtDayIndex:(long long)arg1;
- (long long)numberOfIncompleteRemindersForDisplay:(_Bool)arg1;
- (long long)numberOfIncompleteReminders;
- (long long)displayedNumberOfIncompleteReminders;
- (long long)numberOfCompletedRemindersAtDayIndex:(long long)arg1 forDisplay:(_Bool)arg2;
- (long long)numberOfCompletedRemindersAtDayIndex:(long long)arg1;
- (long long)numberOfCompletedRemindersForDisplay:(_Bool)arg1;
- (long long)numberOfCompletedReminders;
- (long long)displayedNumberOfCompletedReminders;
- (void)checkOrUncheckReminder:(id)arg1;
- (_Bool)deleteReminder:(id)arg1;
- (void)addReminder:(id)arg1;
- (id)reminderAtIndexPath:(id)arg1;
- (long long)indexForDate:(id)arg1;
- (long long)indexForToday:(_Bool)arg1;
- (long long)indexForToday;
- (id)dateForScheduledRemindersAtDayIndex:(long long)arg1;
- (_Bool)containsDate:(id)arg1 atIndex:(long long *)arg2;
- (id)dictionaryForDate:(id)arg1;
- (id)remindersOnDay:(long long)arg1;
- (long long)numberOfScheduledRemindersAtDayIndex:(long long)arg1;
- (long long)numberOfDaysWithScheduledReminders;
- (_Bool)matchesReminder:(id)arg1;
- (id)_days;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1;

@end