//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitRoutePreviewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TransitRouteTableViewCellDelegate>
{
    BlurView *_blurView;
    BlurDarkeningBackgroundView *_stackedViewsBlurDarkeningView;
    TransitRoutePreviewTimingView *_timingView;
    NSArray *_dataSourceItems;
    NSLayoutConstraint *_tableViewHeightConstraint;
    NSLayoutConstraint *_blurDarkeningHeightConstraint;
    _Bool _isAnimatingInitialHeight;
    _Bool _isAnimatingHeightChange;
    _Bool _isAnimatingDarkeningView;
    _Bool _addSpaceAboveNewRoutingContent;
    double _heightAboveRoutingContent;
    MNRoute *_route;
    RoutePickingTiming *_timing;
    id <TransitRoutePreviewControllerDelegate> _delegate;
    UITableView *_tableView;
    UIView *_messageView;
}

@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TransitRoutePreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RoutePickingTiming *timing; // @synthesize timing=_timing;
@property(readonly, nonatomic) MNRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)disclosureButtonTappedInCell:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_placeholderCellForRowAtIndexPath:(id)arg1;
- (double)_heightForPlaceholderCell;
- (id)_routeCellForRowAtIndexPath:(id)arg1;
- (id)_serviceGapCellForRowAtIndexPath:(id)arg1;
- (id)_incidentCellForRowAtIndexPath:(id)arg1;
- (id)_timingCellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)_messageViewConstraints;
- (id)_initialConstraints;
- (void)_registerCellsWithTableView;
- (void)loadView;
- (void)_updateViewConstraints;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) NSIndexPath *routeIndexPath;
- (void)_reloadDataSource;
- (void)setRoute:(id)arg1 timing:(id)arg2 messageView:(id)arg3 withAnimation:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end