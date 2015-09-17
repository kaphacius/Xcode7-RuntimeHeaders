//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CustomGestureController : AXNamedItemsListController <ASTGestureRecorderMainViewControllerDelegate>
{
    NSMutableArray *_hiddenSpecifiers;
    ASTGestureRecorderMainViewController *_gestureRecorderMainViewController;
    id _appDidResignActiveNotificationHandlerToken;
    AXAssertion *_disableSystemGesturesAssertion;
}

@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(retain, nonatomic) id appDidResignActiveNotificationHandlerToken; // @synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken;
- (void)gestureRecorder:(id)arg1 saveGestureWithPropertyListRepresentation:(id)arg2;
- (_Bool)gestureRecorder:(id)arg1 canSaveGestureWithName:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
@property(readonly, nonatomic) unsigned long long maximumNumberOfCustomGestures;
@property(readonly, nonatomic) NSString *customGesturesExplanatoryText;
@property(readonly, nonatomic) NSString *customGesturesTitle;
@property(readonly, nonatomic) SEL customGesturesSetter;
@property(readonly, nonatomic) SEL customGesturesGetter;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)createCustomGesture;
- (id)specifiers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_toggleHiddenSpecifiersAnimated:(_Bool)arg1;
- (void)_disableCreateNewGestureButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldDisableCreateNewGestureButton;
- (_Bool)_isGestureNameSpecifier:(id)arg1;
- (id)_customGestures;
- (id)specifierForKey:(id)arg1 withSpecifiers:(id)arg2;
@property(readonly, nonatomic) NSArray *customGestureSpecifiers;
- (void)handleExternalSettingsChange;
- (id)setName:(id)arg1 forItem:(id)arg2;
- (id)nameForItem:(id)arg1;
- (SEL)settingsSetter;
- (SEL)settingsGetter;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end