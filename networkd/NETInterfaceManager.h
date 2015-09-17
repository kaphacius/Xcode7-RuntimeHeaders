//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETInterfaceManager : NSObject
{
    _Bool _hasCellularAgents;
    _Bool _dumpingState;
    int _persistentInterfaceGuidanceState;
    NSString *_primaryInterfaceName;
    NSString *_fallbackInterfaceName;
    NSMutableArray *_interfaces;
    NSMutableArray *_unscopedDNSResolvers;
    NSMutableArray *_changeHandlers;
    int _nwiToken;
    int _dnsToken;
    int _configToken;
    int _ioctl_socket;
    struct ifaddrs *_interfaceAddrs;
    CDStruct_83126b12 *_dnsConfig;
    unsigned int _coalescedUpdatePending;
    unsigned int _persistentInterfaceIndex;
    NSObject *_changeHandlersLock;
    NSObject *_interfacesLock;
}

+ (id)sharedInterfaceManager;
+ (_Bool)interface:(id)arg1 matchesParameters:(id)arg2;
+ (_Bool)interface:(id)arg1 matchesInterfaceType:(int)arg2;
@property _Bool dumpingState; // @synthesize dumpingState=_dumpingState;
@property(retain) NSObject *interfacesLock; // @synthesize interfacesLock=_interfacesLock;
@property(retain) NSObject *changeHandlersLock; // @synthesize changeHandlersLock=_changeHandlersLock;
@property _Bool hasCellularAgents; // @synthesize hasCellularAgents=_hasCellularAgents;
@property unsigned int persistentInterfaceIndex; // @synthesize persistentInterfaceIndex=_persistentInterfaceIndex;
@property unsigned int coalescedUpdatePending; // @synthesize coalescedUpdatePending=_coalescedUpdatePending;
@property CDStruct_83126b12 *dnsConfig; // @synthesize dnsConfig=_dnsConfig;
@property struct ifaddrs *interfaceAddrs; // @synthesize interfaceAddrs=_interfaceAddrs;
@property int ioctl_socket; // @synthesize ioctl_socket=_ioctl_socket;
@property int configToken; // @synthesize configToken=_configToken;
@property int dnsToken; // @synthesize dnsToken=_dnsToken;
@property int nwiToken; // @synthesize nwiToken=_nwiToken;
@property(retain) NSMutableArray *changeHandlers; // @synthesize changeHandlers=_changeHandlers;
@property(retain) NSMutableArray *unscopedDNSResolvers; // @synthesize unscopedDNSResolvers=_unscopedDNSResolvers;
@property(retain) NSMutableArray *interfaces; // @synthesize interfaces=_interfaces;
@property(retain) NSString *fallbackInterfaceName; // @synthesize fallbackInterfaceName=_fallbackInterfaceName;
@property(retain) NSString *primaryInterfaceName; // @synthesize primaryInterfaceName=_primaryInterfaceName;
@property int persistentInterfaceGuidanceState; // @synthesize persistentInterfaceGuidanceState=_persistentInterfaceGuidanceState;
- (void).cxx_destruct;
- (void)notifyNetAgentsChanged;
@property(readonly, getter=isRadioActive) _Bool radioActive;
- (void)unregisterChangeHandler:(id)arg1;
- (void)registerChangeHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getNetworkInterfaceCFromName:(const char *)arg1;
- (id)getNetworkInterfaceCFromIndex:(unsigned int)arg1;
- (id)getNetworkInterfaceFromName:(id)arg1;
- (id)getNetworkInterfaceFromIndex:(unsigned int)arg1;
- (_Bool)setupNetworkConfigNotification;
- (_Bool)setupDNSInformationNotification;
- (_Bool)setupNetworkInformationNotification;
- (void)notifyDNSChange;
- (void)notifyNetworkChangeWithCoalescing:(_Bool)arg1;
- (void)coalescedUpdateInterfaces;
- (id)deriveParameters:(id)arg1;
- (id)findRequiredInterfaceForParameters:(id)arg1;
@property(readonly, getter=isAnyInterfaceEligibleForCrazyIvan46) _Bool anyInterfaceEligibleForCrazyIvan46;
- (id)createOrderedInterfaceListFromNWIState:(struct _nwi_state *)arg1 interfaces:(id)arg2;
- (void)setDNSServersInPath:(id)arg1;
- (void)updateUnscopedDNSAndSetChanges:(id)arg1;
- (void)updateInterfaces;
- (void)addDNSToInterface:(id)arg1;
- (void)overridePersistentInterface;
- (void)setPersistentInterface:(unsigned int)arg1;
@property(readonly) NWInterface *fallbackInterface;
@property(readonly) NWInterface *primaryInterface;
- (id)privateDescription;
- (id)persistentInterfaceDescription;

@end