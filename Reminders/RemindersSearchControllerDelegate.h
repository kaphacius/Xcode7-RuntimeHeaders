//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol RemindersSearchControllerDelegate
- (void)searchController:(UIViewController *)arg1 didSelectReminder:(EKReminder *)arg2 forSearchTerm:(NSString *)arg3;
- (void)searchController:(UIViewController *)arg1 willBecomeActive:(_Bool)arg2;

@optional
- (void)searchControllerDidTapActionButton:(UIViewController *)arg1;
@end