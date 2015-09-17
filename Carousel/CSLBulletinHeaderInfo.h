//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinHeaderInfo : NSObject <CUISAlertHeaderViewDataSource>
{
    CSLBulletinAlertItem *_bulletin;
    NSDictionary *_customInfo;
    CUISBulletinLongLookLayoutAttributes *_defaultLayoutAttributes;
}

- (void).cxx_destruct;
- (unsigned int)roundedCornersForHeaderView:(id)arg1;
- (id)longLookPlatterColorForHeaderView:(id)arg1;
- (id)longLookIconForHeaderView:(id)arg1;
- (id)longLookTitleColorForHeaderView:(id)arg1;
- (id)longLookTitleForHeaderView:(id)arg1;
- (id)iconForHeaderView:(id)arg1;
- (id)subtitleColorForHeaderView:(id)arg1;
- (id)subtitleForHeaderView:(id)arg1;
- (id)titleColorForHeaderView:(id)arg1;
- (id)titleForHeaderView:(id)arg1;
- (id)_appColor;
- (id)initWithBulletin:(id)arg1 customInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end