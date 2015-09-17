//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXCaptioningThemeController : AXCaptionStyleChooserController
{
    NSMutableArray *_editableHiddenSpecifiers;
    NSMutableArray *_editableVisibleSpecifiers;
    _Bool _isEditingTable;
    NSMutableArray *_customProfiles;
    NSMutableArray *_defaultProfiles;
}

@property(retain, nonatomic) NSMutableArray *defaultProfiles; // @synthesize defaultProfiles=_defaultProfiles;
@property(retain, nonatomic) NSMutableArray *customProfiles; // @synthesize customProfiles=_customProfiles;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_manageHiddenSpecifiers:(_Bool)arg1 editing:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_donePressed;
- (void)_editPressed;
- (void)_addEditButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectProfile:(id)arg1;
- (void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2;
- (id)_videoOverridesStyle:(id)arg1;
- (_Bool)_profileOverridesStyle:(struct __CFString *)arg1;
- (void)viewDidLoad;
- (void)_resetActiveProfileToDefault;
- (id)specifiers;
- (void)_themeCountChanged:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end