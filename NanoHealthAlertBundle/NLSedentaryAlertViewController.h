//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLSedentaryAlertViewController : CUISAlertViewController <CUISAlertSwipeToDismissViewDelegate, CUISAlertSwipeToDismissViewDataSource, CUISAlertHeaderViewDataSource, CUISAlertHeaderViewDelegate, CUISBulletinActionMenuDelegate>
{
    CUISAlertSwipeToDismissView *_alertView;
    CUISAlertPlatterView *_alertContentPlatterView;
    CUISBulletinActionMenu *_actionMenu;
    PUICTableView *_actionMenuTableView;
    UILabel *_muteHelpTextLabel;
    UIView *_contentView;
    CUISAlertHeaderView *_header;
    UIView *_bodyView;
    NSTimer *_quickLongLookTimer;
    PCPersistentTimer *_timeoutTimer;
    NTKDigitalTimeLabel *_timeLabel;
    _Bool _coachingEventRecorded;
    id <NLSedentaryAlertViewControllerDelegate> _delegate;
    NSDate *_timeoutDate;
    int _alertType;
    NSDictionary *_userInfo;
    NSDate *_presentationDate;
}

@property(nonatomic) _Bool coachingEventRecorded; // @synthesize coachingEventRecorded=_coachingEventRecorded;
@property(retain, nonatomic) NSDate *presentationDate; // @synthesize presentationDate=_presentationDate;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(nonatomic) __weak id <NLSedentaryAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapIconInHeaderView:(id)arg1;
- (id)longLookPlatterColorForHeaderView:(id)arg1;
- (id)longLookTitleForHeaderView:(id)arg1;
- (id)longLookIconForHeaderView:(id)arg1;
- (id)longLookTitleColorForHeaderView:(id)arg1;
- (id)iconForHeaderView:(id)arg1;
- (id)subtitleColorForHeaderView:(id)arg1;
- (id)subtitleForHeaderView:(id)arg1;
- (id)titleColorForHeaderView:(id)arg1;
- (id)titleForHeaderView:(id)arg1;
- (void)didDismissBulletinActionMenu:(id)arg1;
- (void)bulletinActionMenu:(id)arg1 didSelectItem:(id)arg2;
- (id)_resourceBundle;
- (id)contentViewForAlertView:(id)arg1;
- (void)didSwipeDownAlertView:(id)arg1;
- (void)_muteCoachingForToday:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)_timeOutTimerFired:(id)arg1;
- (void)_quickLongLookTimerFired:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end