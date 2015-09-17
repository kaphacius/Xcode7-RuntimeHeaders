//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRDiscoveryViewController : UIViewController <FRSubscriptionLimitExceededDelegate>
{
    FRFloatingCirclesViewController *_circlesViewController;
    FRFloatingCirclesDataSource *_circlesDataSource;
    FRFloatingCirclesCollectionViewDelegate *_circlesDelegate;
    FRFeldsparContext *_feldsparContext;
}

@property(retain, nonatomic) FRFeldsparContext *feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) FRFloatingCirclesCollectionViewDelegate *circlesDelegate; // @synthesize circlesDelegate=_circlesDelegate;
@property(readonly, nonatomic) FRFloatingCirclesDataSource *circlesDataSource; // @synthesize circlesDataSource=_circlesDataSource;
@property(readonly, nonatomic) FRFloatingCirclesViewController *circlesViewController; // @synthesize circlesViewController=_circlesViewController;
- (void).cxx_destruct;
- (void)exceededMaximumAllowedSubscription;
- (void)setupWithFeldsparContext:(id)arg1 collectionViewController:(id)arg2 andDataSource:(id)arg3 andDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end