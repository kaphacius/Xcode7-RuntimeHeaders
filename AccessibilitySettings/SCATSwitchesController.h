//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATSwitchesController : PSListController
{
}

+ (id)switchSpecifiersForSwitchesWithTarget:(id)arg1 get:(SEL)arg2;
+ (void)_sortSwitches:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)actionStringForSpecifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_switchSpecifiers;
- (_Bool)_shouldAllowEditing;

@end