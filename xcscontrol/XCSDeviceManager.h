//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSDeviceManager : NSObject
{
    XCSService *_service;
    id <XCSDeviceManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_persistDevicesQueue;
    NSError *_persistDevicesError;
}

+ (id)sharedDeviceManager;
@property(retain, nonatomic) NSError *persistDevicesError; // @synthesize persistDevicesError=_persistDevicesError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistDevicesQueue; // @synthesize persistDevicesQueue=_persistDevicesQueue;
@property __weak id <XCSDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (BOOL)setDevelopmentBitOnDeviceWithUUID:(id)arg1 error:(id *)arg2;
- (void)snapshotDevicesToServer:(id)arg1 disconnectingMissingDevices:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)persistAvailableDevicesWithError:(id *)arg1;
- (BOOL)startObservingDevicesWithTimeout:(double)arg1 error:(id *)arg2;
- (void)reloadDevices;
- (id)init;

@end