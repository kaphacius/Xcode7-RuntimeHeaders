//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDHealthDataViewController : UIViewController
{
    WDControllerManager *_controllerManager;
    WDMyHealthViewController *_listVC;
    WDCalendarSplitViewController *_calendarSplitViewController;
    long long _selectedControlIndex;
    _UINavigationControllerPalette *_palette;
    NSUserActivity *_listUserActivity;
    NSUserActivity *_calendarUserActivity;
}

- (void).cxx_destruct;
- (void)restoreUserActivityState:(id)arg1;
- (void)addItem:(id)arg1;
- (void)todayPressed:(id)arg1;
- (void)_updateTabsFrom:(id)arg1 toVC:(id)arg2;
- (void)attachPaletteTo:(id)arg1;
- (void)_switchToSegment:(unsigned long long)arg1;
- (void)controlValueChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithControllerManager:(id)arg1;

@end