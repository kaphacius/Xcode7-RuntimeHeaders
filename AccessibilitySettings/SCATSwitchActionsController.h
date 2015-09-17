//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATSwitchActionsController : PSListController
{
    _Bool _selectLongPress;
    AXSwitch *_storedSwitch;
}

@property(retain, nonatomic) AXSwitch *storedSwitch; // @synthesize storedSwitch=_storedSwitch;
@property(nonatomic) _Bool selectLongPress; // @synthesize selectLongPress=_selectLongPress;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)initWithSwitch:(id)arg1;
- (void)dealloc;
- (_Bool)_popToActionTypeController;
- (id)_systemActions;
- (id)_scannerActions;
- (id)_rootSwitchesController;
- (void)_removeSwitch:(id)arg1;
- (void)_addSwitch:(id)arg1;
- (id)_actionSpecifiersWithActions:(id)arg1;

@end