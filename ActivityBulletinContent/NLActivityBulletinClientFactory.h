//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLActivityBulletinClientFactory : CUISBulletinClientFactory <NLBulletinClientFactoryDelegate>
{
    NLBulletinClientSubFactory *_subFactory;
    HKHealthStore *_healthStore;
    NSDate *_presentationDate;
    NSDate *_dismissDate;
}

- (void).cxx_destruct;
- (void)_saveCoachingEventWithDismissReason:(int)arg1;
- (void)_recordEventInAggdWithDismissReason:(int)arg1 timeInterval:(double)arg2;
- (void)subFactoryClientViewControllerDidDisappear:(id)arg1;
- (void)subFactoryClientViewControllerDidAppear:(id)arg1;
- (void)subFactoryDidMute:(id)arg1;
- (void)subFactoryDidPerformAction:(id)arg1 shouldAnimateAction:(_Bool)arg2;
- (void)subFactoryDidPerformAction:(id)arg1;
- (_Bool)shouldClearBulletinsAfterDismissalForReason:(unsigned int)arg1;
- (void)presentationActivelyDismissed;
- (id)userActivity;
- (id)actionMenuPresentation;
- (id)primaryPagePresentation;
- (id)initWithBulletins:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end