//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CLSignificantVisitManagerServiceProtocol <CLIntersiloServiceProtocol>
- (void)disconnectClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1;
- (void)stopMonitoringSignificantVisitsForClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1;
- (void)startMonitoringSignificantVisitsForClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1;
- (void)connectClient:(byref id <CLSignificantVisitManagerClientProtocol>)arg1 withKey:(NSString *)arg2;
@end