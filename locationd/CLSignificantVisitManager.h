//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLSignificantVisitManager : CLIntersiloService <CLRoutineMonitorClientProtocol, CLClientAuthorizationCacheClientProtocol, CLSignificantVisitManagerServiceProtocol>
{
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::__1::default_delete<CLDarwinNotifier_Type::Client>> _darwinNotifierClient;
    struct map<id<CLSignificantVisitManagerClientProtocol>, NSString *, std::__1::less<id<CLSignificantVisitManagerClientProtocol>>, std::__1::allocator<std::__1::pair<const id<CLSignificantVisitManagerClientProtocol>, NSString *>>> _clientToKey;
    _Bool _clientsActive;
    _Bool _armed;
    struct CLPersistentStore *_clientInterest;
    struct CLPersistentStore *_clientAuthDate;
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;
    NSMutableArray *_recentVisits;
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;
}

+ (_Bool)isSupported;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitor; // @synthesize routineMonitor=_routineMonitor;
@property(retain, nonatomic) NSMutableArray *recentVisits; // @synthesize recentVisits=_recentVisits;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(nonatomic) struct CLPersistentStore *clientAuthDate; // @synthesize clientAuthDate=_clientAuthDate;
@property(nonatomic) struct CLPersistentStore *clientInterest; // @synthesize clientInterest=_clientInterest;
@property(nonatomic) _Bool clientsActive; // @synthesize clientsActive=_clientsActive;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDarwinNotifierNotification:(int)arg1 data:(struct NotificationData)arg2;
- (void)onAuthDateStoreTimer:(struct __CFRunLoopTimer *)arg1;
- (void)onInterestStoreTimer:(struct __CFRunLoopTimer *)arg1;
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;
- (void)onVisit:(id)arg1;
- (void)checkForMonitoring;
- (id)authorizationDateForClientWithKey:(id)arg1;
- (void)notifyClientsOfVisit:(id)arg1;
- (void)disconnectClient:(byref id)arg1;
- (void)stopMonitoringSignificantVisitsForClient:(byref id)arg1;
- (void)startMonitoringSignificantVisitsForClient:(byref id)arg1;
- (void)connectClient:(byref id)arg1 withKey:(id)arg2;
- (id)keyForClient:(byref id)arg1;
- (void)performBlockWhenArmed:(CDUnknownBlockType)arg1;
- (void)deliverVisit:(id)arg1 toClient:(byref id)arg2;
- (void)sendVisitsToClient:(byref id)arg1;
- (_Bool)isClientWithKeyInterested:(id)arg1;
- (void)removeOldVisits;
- (void)stopMonitoring;
- (void)ensureMonitoring;
- (void)flushAll;
- (void)flushInterest;
- (void)flushAuthDates;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end