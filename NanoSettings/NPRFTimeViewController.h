//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFTimeViewController : NPRFBaseTableViewController <NTKWheelsOfTimeDelegate>
{
    NSTimer *_timer;
    NSDateFormatter *_timeFormatter;
    NPRFWOTViewController *_wotViewController;
    int _timeOffsetInMin;
}

@property(nonatomic) int timeOffsetInMin; // @synthesize timeOffsetInMin=_timeOffsetInMin;
@property(retain, nonatomic) NPRFWOTViewController *wotViewController; // @synthesize wotViewController=_wotViewController;
- (void).cxx_destruct;
- (void)rightButtonWOTAction;
- (void)leftButtonWOTAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_timeOrLocaleChanged:(id)arg1;
- (void)_updateDetailTextForCell:(id)arg1;
- (void)_updateTimeOffsetRow;
- (void)_updateTimeFormatter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end