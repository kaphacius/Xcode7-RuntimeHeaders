//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkAddressWaypointsController : StarkWaypointsController
{
    AddressBookAddress *_address;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)subtitleForCurrentDestination;
- (id)titleForCurrentDestination;
- (id)destinationWaypoint;
- (id)initWithAddress:(id)arg1;
- (id)initWithAddress:(id)arg1 overridingTitle:(id)arg2;

@end