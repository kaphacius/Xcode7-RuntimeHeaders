//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCALCoalescedBulletinsClientViewController : NCALBulletinClientViewController <CUISAlertHeaderViewDataSource, CUISAlertHeaderViewDelegate, NCALSizeDelegatingViewSizingDelegate>
{
    NSArray *_icons;
    NSArray *_bulletinClientViews;
    NSDictionary *_customInfo;
}

- (void).cxx_destruct;
- (struct CGSize)clientView:(id)arg1 sizeThatFits:(struct CGSize)arg2;
- (void)_processBulletins:(id)arg1;
- (void)backlightWillTurnOn;
- (void)localeDidChange;
- (id)customInfo;
- (void)didTapIconInHeaderView:(id)arg1;
- (id)iconForHeaderView:(id)arg1;
- (id)subtitleForHeaderView:(id)arg1;
- (id)subtitleColorForHeaderView:(id)arg1;
- (id)longLookPlatterColorForHeaderView:(id)arg1;
- (id)titleColorForHeaderView:(id)arg1;
- (id)titleForHeaderView:(id)arg1;
- (void)loadView;
- (id)initWithBulletinList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end