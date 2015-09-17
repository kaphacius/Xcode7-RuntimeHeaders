//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDAirDropReceiveManager : NSObject <SDAirDropListenerDelegate, SDNetworkOperationDelegate, SDAirDropAlertManagerDelegate>
{
    SDAirDropListener *_listener;
    NSMutableDictionary *_networkOperations;
    id <SDAirDropAlertManager> _alertManager;
}

- (void).cxx_destruct;
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2;
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2;
- (void)alertManager:(id)arg1 setDestinationURL:(id)arg2 forRecordID:(id)arg3;
- (void)networkOperation:(id)arg1 event:(long)arg2 withResults:(id)arg3;
- (void)listener:(id)arg1 didReceiveError:(id)arg2;
- (void)listener:(id)arg1 informationDidChange:(id)arg2;
- (void)listener:(id)arg1 didReceiveNewRequest:(id)arg2;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end