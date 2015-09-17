//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol UITableViewDataSource <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (int)tableView:(UITableView *)arg1 numberOfRowsInSection:(int)arg2;

@optional
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (int)tableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(int)arg3;
- (NSArray *)sectionIndexTitlesForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForFooterInSection:(int)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(UITableView *)arg1;
@end