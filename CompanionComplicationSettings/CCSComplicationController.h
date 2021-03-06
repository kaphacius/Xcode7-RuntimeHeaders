//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CCSComplicationController : PSEditableListController <NCSSettingsManagerDelegate>
{
    NCSSettingsManager *_settingsManager;
    NSMutableArray *_groupSpecifiers;
}

@property(retain, nonatomic) NSMutableArray *groupSpecifiers; // @synthesize groupSpecifiers=_groupSpecifiers;
@property(retain, nonatomic) NCSSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
- (void).cxx_destruct;
- (void)settingsManagerReloadedComplications:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)findIndexOfNthComplication:(long long)arg1 withActiveState:(_Bool)arg2;
- (long long)findIndexOfComplicationWithIdentifier:(id)arg1;
- (id)_specifiersFromSettingsManager;
- (id)activeStateForSpecifier:(id)arg1;
- (void)setActiveState:(id)arg1 forSpecifier:(id)arg2;
- (void)setActiveState:(id)arg1 forSpecifier:(id)arg2 save:(_Bool)arg3;
- (void)_showLimitReached:(id)arg1;
- (void)willUnlock;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end