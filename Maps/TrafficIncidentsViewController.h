//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TrafficIncidentsViewController : UITableViewController
{
    TrafficIncidentsHeaderView *_tableHeaderView;
    UILabel *_incidentInfo;
    UILabel *_timeLabel;
    UIView *_tableFooterContainer;
    VKTrafficIncident *_incident;
    NSMutableArray *_sectionKeys;
    NSMutableDictionary *_sectionContents;
}

@property(retain, nonatomic) NSMutableDictionary *sectionContents; // @synthesize sectionContents=_sectionContents;
@property(retain, nonatomic) NSMutableArray *sectionKeys; // @synthesize sectionKeys=_sectionKeys;
@property(retain, nonatomic) VKTrafficIncident *incident; // @synthesize incident=_incident;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_incidentInfo;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)_updateTableFooter;
- (id)_tableFooterContainer;
- (id)_timeLabel;
- (void)_transformIncidentObject;
- (void)viewDidLoad;
- (id)_tableHeaderView;
- (id)initWithStyle:(long long)arg1;
- (void)_contentSizeDidChange:(id)arg1;
- (void)updateForLightLevel:(long long)arg1;
- (_Bool)isDimmed;
- (void)dealloc;

@end