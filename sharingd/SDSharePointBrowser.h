//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDSharePointBrowser : NSObject <SDBonjourResolverDelegate, SDRemoteDiscDelegate>
{
    void *_session;
    _Bool _askFirst;
    _Bool _passwordOnly;
    _Bool _sharesMounted;
    _Bool _resolveService;
    NSNumber *_diskFlags;
    NSString *_authType;
    NSString *_askToken;
    NSString *_askStatus;
    NSString *_askDevice;
    NSString *_browserID;
    NSString *_serverName;
    NSString *_changeCount;
    NSString *_neighborhood;
    NSTimer *_destroyTimer;
    int _error;
    unsigned long _flags;
    SDRemoteDisc *_remoteDisc;
    SDStatusMonitor *_monitor;
    SDBonjourResolver *_resolver;
    NSDictionary *_sharePoints;
    NSDictionary *_fileShares;
    NSDictionary *_printerShares;
    NSMutableSet *_mountedVolumes;
    NSMutableDictionary *_queries;
    _Bool _shouldNotify;
    NSURL *_serverURL;
    NSArray *_protocols;
    NSString *_userName;
    NSString *_hostName;
    NSString *_protocol;
    NSNumber *_portNumber;
    NSString *_typeIdentifier;
    struct _DNSServiceRef_t *_connection;
    int _connectionState;
    id <SDSharePointBrowserDelegate> _delegate;
}

+ (id)browserForID:(id)arg1;
@property __weak id <SDSharePointBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly) struct _DNSServiceRef_t *connection; // @synthesize connection=_connection;
@property(readonly) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(retain) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain) NSNumber *portNumber; // @synthesize portNumber=_portNumber;
@property(retain) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(retain) NSArray *protocols; // @synthesize protocols=_protocols;
@property(retain) NSURL *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (void)stop;
- (void)checkNetAuthSession:(id)arg1;
- (void)start;
- (void)removeObservers;
- (void)addObservers;
- (void)mountPointsChanged:(id)arg1;
- (void)bonjourResolverDidChange:(id)arg1;
- (void)closeSession;
- (void)cancelResolve;
- (void)setError:(int)arg1 state:(int)arg2 notify:(_Bool)arg3;
- (void)setConnectionState:(int)arg1;
- (void)setShouldNotify:(_Bool)arg1;
- (void)setError:(int)arg1;
- (void)setMountInfo:(struct __CFDictionary *)arg1;
- (_Bool)singlePasswordEnabled:(id)arg1;
- (_Bool)shouldAskFirst:(id)arg1;
- (_Bool)getBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;
- (void)setNetbiosName:(id)arg1;
- (void)setBonjourInfo:(id)arg1 domain:(id)arg2 resolveService:(_Bool)arg3;
- (void)setSharePoints:(id)arg1;
- (void)enumerateShares;
- (void)setProtocolUserName;
- (void)openSession;
- (void)openNetAuthSession;
- (id)netAuthURL;
- (id)netAuthProtocol;
- (id)fullNameForScheme:(id)arg1 hostName:(id)arg2;
- (void)stopTXTRecordMonitor:(id)arg1;
- (void)startTXTRecordMonitor:(id)arg1;
- (void)remoteDiscStatusDidChange:(id)arg1;
- (void)addSharePoint:(id)arg1 diskName:(struct __CFString *)arg2 diskFlags:(struct __CFNumber *)arg3 diskID:(struct __CFString *)arg4 diskType:(struct __CFString *)arg5 protocol:(struct __CFString *)arg6 mountPath:(struct __CFString *)arg7;
- (id)mountedSharePointsForProtocol:(id)arg1;
- (id)sharePointsFromMountPoints:(id)arg1;
- (void)handleTXTRecordCallBack:(unsigned int)arg1 error:(int)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void *)arg4 context:(id)arg5;
- (_Bool)isPartialVolumeList;
- (void)buildShares:(_Bool)arg1;
- (void)addTXTRecordSharesToCache:(id)arg1 printerShares:(id)arg2;
- (void)addSharesToCache:(id)arg1 newFileShares:(id)arg2 newPrinterShares:(id)arg3;
- (_Bool)isNetAuthSupportedProtocol:(id)arg1;
- (void)notifyClient;
@property(readonly) void *URLMountSession;
@property(readonly) NSArray *printerNodes;
@property(readonly) NSArray *fileNodes;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1 authType:(id)arg2 flags:(unsigned long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end