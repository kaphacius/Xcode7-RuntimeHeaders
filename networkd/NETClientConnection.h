//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETClientConnection : NETHelperEndpoint <NETProxyLookupDelegate, NETDuetGateDelegate, NETLedBellyClientDelegate, NETAgentManagerDelegate, NETDataProtectionManagerDelegate, NETPowerManagerDelegate, NETQualityManagerDelegate, NETCellularFallbackWatcherDelegate>
{
    char _processName[16];
    NETOnDemandJob *_onDemandJob;
    NSString *_effectiveBundleID;
    _Bool _isConnected;
    _Bool _overrideSatisfied;
    _Bool _attemptedAndFailed;
    _Bool _pendingTriggerAgentRestartOnSuccess;
    _Bool _pendingTriggerAgentShouldSendMessage;
    _Bool _isCellularFallback;
    _Bool _isLoopback;
    _Bool _isIPv6LinkLocal;
    _Bool _isPush;
    _Bool _isWaldo;
    _Bool _isCellFallbackWhitelisted;
    _Bool _isDNS;
    _Bool _wifiInUse;
    _Bool _mptcpCellAttempted;
    _Bool _watchingNetworkEvents;
    NWEndpoint *_networkEndpoint;
    NWPath *_currentPath;
    NWPath *_connectedPath;
    NSObject<OS_xpc_object> *_details;
    NWEndpoint *_connectedEndpoint;
    NWParameters *_connectedParameters;
    NSSet *_inactiveAgentUUIDs;
    NSSet *_outstandingTriggerAgentUUIDs;
    NSMutableSet *_updatedTriggerAgentUUIDs;
    NWAddressEndpoint *_reportedAddress;
    NSSet *_pendingTriggerAgentUUIDs;
    NSMutableSet *_receivedTriggerAgentUUIDs;
    NSObject<OS_xpc_object> *_pendingTriggerAgentMessage;
    unsigned int _pendingTriggerAgentIFIndex;
    NETProxyLookup *_proxyLookup;
    NETDuetGate *_duetGate;
    unsigned int _sleepAssertionOutstanding;
    NSObject<OS_dispatch_source> *_ccTimer;
    NSObject<OS_tcp_connection> *_tcpConnection;
    unsigned int _tcpConnectResult;
    unsigned long _previousPathHash;
    unsigned int _evaluateOutstanding;
    unsigned int _attemptOutstanding;
    int _lastAttemptError;
    NETConnectionPool *_connectionPool;
    NETLedBellyClient *_ledBellyClient;
    NETCrazyIvan46Helper *_crazyIvan46Helper;
    NWEndpoint *_derivedEndpoint;
    unsigned long long _start;
    unsigned long long _duetLastQueryTime;
    unsigned long long _connectReportTime;
    unsigned long long _pathSentTimestamp;
}

+ (void)forEach:(CDUnknownBlockType)arg1;
+ (void)handleChange:(const char *)arg1 line:(int)arg2;
+ (_Bool)fetchAndResetNetworkdConnectionStats:(struct netcore_stats_networkd_report *)arg1;
@property(retain) NWEndpoint *derivedEndpoint; // @synthesize derivedEndpoint=_derivedEndpoint;
@property(retain) NETCrazyIvan46Helper *crazyIvan46Helper; // @synthesize crazyIvan46Helper=_crazyIvan46Helper;
@property(retain) NETLedBellyClient *ledBellyClient; // @synthesize ledBellyClient=_ledBellyClient;
@property(retain) NETConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property int lastAttemptError; // @synthesize lastAttemptError=_lastAttemptError;
@property unsigned int attemptOutstanding; // @synthesize attemptOutstanding=_attemptOutstanding;
@property unsigned int evaluateOutstanding; // @synthesize evaluateOutstanding=_evaluateOutstanding;
@property unsigned long long pathSentTimestamp; // @synthesize pathSentTimestamp=_pathSentTimestamp;
@property unsigned long previousPathHash; // @synthesize previousPathHash=_previousPathHash;
@property unsigned int tcpConnectResult; // @synthesize tcpConnectResult=_tcpConnectResult;
@property(retain) NSObject<OS_tcp_connection> *tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property unsigned long long connectReportTime; // @synthesize connectReportTime=_connectReportTime;
@property(retain) NSObject<OS_dispatch_source> *ccTimer; // @synthesize ccTimer=_ccTimer;
@property(nonatomic) _Bool watchingNetworkEvents; // @synthesize watchingNetworkEvents=_watchingNetworkEvents;
@property(nonatomic) _Bool mptcpCellAttempted; // @synthesize mptcpCellAttempted=_mptcpCellAttempted;
@property(nonatomic) _Bool wifiInUse; // @synthesize wifiInUse=_wifiInUse;
@property(nonatomic) _Bool isDNS; // @synthesize isDNS=_isDNS;
@property(nonatomic) _Bool isCellFallbackWhitelisted; // @synthesize isCellFallbackWhitelisted=_isCellFallbackWhitelisted;
@property(nonatomic) _Bool isWaldo; // @synthesize isWaldo=_isWaldo;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool isIPv6LinkLocal; // @synthesize isIPv6LinkLocal=_isIPv6LinkLocal;
@property(nonatomic) _Bool isLoopback; // @synthesize isLoopback=_isLoopback;
@property(nonatomic) _Bool isCellularFallback; // @synthesize isCellularFallback=_isCellularFallback;
@property(nonatomic) unsigned int sleepAssertionOutstanding; // @synthesize sleepAssertionOutstanding=_sleepAssertionOutstanding;
@property(retain) NETDuetGate *duetGate; // @synthesize duetGate=_duetGate;
@property(retain) NETProxyLookup *proxyLookup; // @synthesize proxyLookup=_proxyLookup;
@property unsigned long long duetLastQueryTime; // @synthesize duetLastQueryTime=_duetLastQueryTime;
@property _Bool pendingTriggerAgentShouldSendMessage; // @synthesize pendingTriggerAgentShouldSendMessage=_pendingTriggerAgentShouldSendMessage;
@property unsigned int pendingTriggerAgentIFIndex; // @synthesize pendingTriggerAgentIFIndex=_pendingTriggerAgentIFIndex;
@property _Bool pendingTriggerAgentRestartOnSuccess; // @synthesize pendingTriggerAgentRestartOnSuccess=_pendingTriggerAgentRestartOnSuccess;
@property(retain) NSObject<OS_xpc_object> *pendingTriggerAgentMessage; // @synthesize pendingTriggerAgentMessage=_pendingTriggerAgentMessage;
@property(retain) NSMutableSet *receivedTriggerAgentUUIDs; // @synthesize receivedTriggerAgentUUIDs=_receivedTriggerAgentUUIDs;
@property(retain) NSSet *pendingTriggerAgentUUIDs; // @synthesize pendingTriggerAgentUUIDs=_pendingTriggerAgentUUIDs;
@property(retain) NWAddressEndpoint *reportedAddress; // @synthesize reportedAddress=_reportedAddress;
@property(retain) NSMutableSet *updatedTriggerAgentUUIDs; // @synthesize updatedTriggerAgentUUIDs=_updatedTriggerAgentUUIDs;
@property(retain) NSSet *outstandingTriggerAgentUUIDs; // @synthesize outstandingTriggerAgentUUIDs=_outstandingTriggerAgentUUIDs;
@property(retain) NSSet *inactiveAgentUUIDs; // @synthesize inactiveAgentUUIDs=_inactiveAgentUUIDs;
@property unsigned long long start; // @synthesize start=_start;
@property(retain) NWParameters *connectedParameters; // @synthesize connectedParameters=_connectedParameters;
@property(retain) NWEndpoint *connectedEndpoint; // @synthesize connectedEndpoint=_connectedEndpoint;
@property _Bool attemptedAndFailed; // @synthesize attemptedAndFailed=_attemptedAndFailed;
@property(nonatomic) _Bool overrideSatisfied; // @synthesize overrideSatisfied=_overrideSatisfied;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain) NSObject<OS_xpc_object> *details; // @synthesize details=_details;
@property(retain) NWPath *connectedPath; // @synthesize connectedPath=_connectedPath;
@property(retain) NWPath *currentPath; // @synthesize currentPath=_currentPath;
@property(retain) NWEndpoint *networkEndpoint; // @synthesize networkEndpoint=_networkEndpoint;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)destroy:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)resetProxyLookup:(_Bool)arg1;
- (id)initWithParameters:(id)arg1 networkEndpoint:(id)arg2 path:(id)arg3 state:(id)arg4 client:(id)arg5 endpointID:(unsigned long long)arg6 start:(unsigned long long)arg7;
- (void)filloutNetworkObjectsWithEndpointDictionary:(id)arg1 parametersDictionary:(id)arg2;
- (id)init;
- (void)switchToClient:(id)arg1 withID:(unsigned long long)arg2;
- (void)handleMessage:(id)arg1 ofType:(unsigned long long)arg2;
- (_Bool)needsLaunchOnDemand;
- (void)evaluate;
@property(readonly) long long poolPriority;
@property(retain) NETOnDemandJob *onDemandJob;
@property(readonly, nonatomic) const char *name;
@property(readonly) unsigned long long cid;
@property(readonly) int pid;
- (void)ledBellyStateChanged:(id)arg1;
- (void)duetGateChanged:(id)arg1;
- (void)proxyLookupComplete:(id)arg1;
- (void)handleProxyChange;
- (void)handleNetworkQualityChange:(id)arg1;
- (void)handleInterestingFallbackNetworkEvent:(unsigned int)arg1;
- (void)handleConnectionRetry:(id)arg1;
- (void)handleMessageForLedbellyFd:(id)arg1;
- (void)handleDestinationFallback:(id)arg1;
- (void)handleConnectReport:(id)arg1;
- (void)handleDNSFail:(const char *)arg1 request:(id)arg2;
- (void)handleConnectFail:(id)arg1;
- (void)handleUpdate:(id)arg1;
- (void)handleMPTCPToTCPFallback:(id)arg1;
- (void)handleMPTCPResuming:(id)arg1;
- (void)handleMPTCPFailureReport:(id)arg1;
- (void)handleMPTCPStatsReport:(id)arg1;
- (void)handleWatchNetworkEvents:(id)arg1;
- (void)handleConnectionStatsReport:(id)arg1;
- (void)reportAWDForConnectionStats:(const struct netcore_stats_tcp_report *)arg1;
- (id)createFallbackReportFromStruct:(const struct netcore_stats_tcp_cell_fallback_report *)arg1;
- (id)createDataUsageSnapshotFromStruct:(const struct netcore_stats_data_usage_snapshot *)arg1;
- (id)createStatisticsReportFromStruct:(const struct netcore_stats_tcp_statistics_report *)arg1;
- (void)reportAWDStatsForMPTCP:(id)arg1;
- (id)copyMatchingMultipathInterfaces;
- (void)evaluateLedBellyConnected;
- (void)evaluateEstablishedMultipath;
- (void)evaluateConnectedPath;
- (void)evaluatePath;
- (void)evaluateCrazyIvan46;
- (void)evaluatePathConnectionPool;
- (void)evaluatePathMultipath;
- (_Bool)expensiveProhibited;
- (void)evaluateNetworkPath;
- (void)handlePowerChange;
- (void)handleDataProtectionChange;
- (void)handleAgentChange:(id)arg1;
- (void)decrementConnectionAttemptOutstanding;
- (void)incrementConnectionAttemptOutstanding;
- (void)decrementEvaluateOutstanding;
- (void)incrementEvaluateOutstanding;
- (void)handleReachabilityReply:(id)arg1 decrementSleepAssert:(_Bool)arg2;
- (void)decrementSleepAssertion;
- (void)incrementSleepAssertion;
- (void)cancelConditionalConnectionEvents;
- (void)setupConditionalConnectionEvents;
- (_Bool)voluntaryAgentsMatchAddress;
- (_Bool)startNetworkAgentsForMessage:(id)arg1 sendRestartOnSuccess:(_Bool)arg2;
- (_Bool)startNetworkAgentsForEndpoint:(id)arg1 message:(id)arg2 sendRestartOnSuccess:(_Bool)arg3 resetCurrentPath:(_Bool)arg4;
- (void)handleAgentChangeForPendingMessage:(id)arg1;
- (void)sendPendingAgentMessage;
- (id)networkSignatureForInterface:(unsigned int)arg1;
- (id)scrubParametersForEntitlements:(id)arg1;
- (const char *)processName;
@property(readonly) NSString *dnsName;
- (int)helperClientPID;
- (unsigned long long)helperClientID;
@property(readonly) NSString *effectiveBundleID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end