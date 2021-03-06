//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPAcknowledgementViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    RAPReport *_report;
    CDUnknownBlockType _completion;
    _Bool _hasSetUpViews;
    _Bool _reportBeganSubmitting;
    _Bool _showsProgress;
    NSArray *_landscapeConstraints;
    NSArray *_portraitConstraints;
    NSLayoutConstraint *_headerViewCenterXConstraint;
    NSLayoutConstraint *_headerViewWidthConstraint;
    _Bool _showsNotifications;
    _Bool _showsContactBack;
    UIView *_checkMarkView;
    UILabel *_thankYouLabel;
    UILabel *_messageLabel;
    UIView *_headerView;
    UIView *_headerContainerView;
    UIView *_footerView;
    UIButton *_doneButton;
    UIView *_progressView;
    UITableView *_table;
    UISwitch *_contactBackSwitch;
}

- (void).cxx_destruct;
- (id)_footerView;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)_contactBackSectionIndex;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_invokeCompletion;
- (void)_done;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateTable;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_tableView;
- (id)headerView;
- (id)doneButton;
- (id)_attributedAcknowledgementMessage:(_Bool)arg1;
- (_Bool)showLandscapeUI;
- (void)_removeSuccessViews;
- (void)_update;
- (void)updateViewConstraints;
- (void)_activateHeaderConstraints;
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end