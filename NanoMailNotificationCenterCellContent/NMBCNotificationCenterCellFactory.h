//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NMBCNotificationCenterCellFactory : CUISNotificationCenterDefaultCellFactory
{
    id <CUISNotificationCenterCellFactoryDelegate> _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)reuseIdentifierForBulletin:(id)arg1;
- (unsigned int)iconStyleForBulletin:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedSectionIDs;

@end