//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BTSHealthDeviceLE : BTSDevice
{
    NSString *_name;
    NSString *_identifier;
    HKHealthService *_healthService;
    HKHealthStore *_healthStore;
    HKHealthServiceSession *_session;
}

@property(retain, nonatomic) HKHealthServiceSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKHealthService *healthService; // @synthesize healthService=_healthService;
- (void).cxx_destruct;
- (void)updateStatus;
- (void)updateName;
- (void)getIdentifier;
- (void)unpair;
- (void)disconnect;
- (void)connect;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)pairWithCompletion:(CDUnknownBlockType)arg1;
- (int)type;
- (id)initWithHealthService:(id)arg1 healthStore:(id)arg2 paired:(_Bool)arg3 connected:(_Bool)arg4;

@end