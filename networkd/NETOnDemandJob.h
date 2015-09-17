//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETOnDemandJob : NSObject
{
    char _procname[16];
    int _state;
    int _pid;
    unsigned int _result;
    NSObject<OS_tcp_connection> *_tcpConnection;
    NSString *_label;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    NETClient *_client;
    NETClientConnection *_connection;
}

+ (void)addClientTokens:(id)arg1;
+ (id)copyClientTokens;
+ (unsigned long long)tokenForClient:(const char *)arg1;
+ (void)removeClientToken:(unsigned long long)arg1;
+ (void)addClientToken:(const char *)arg1 token:(unsigned long long)arg2;
+ (id)findByProcess:(const char *)arg1 label:(id)arg2;
+ (id)findByJobID:(unsigned long long)arg1;
@property(retain) NETClientConnection *connection; // @synthesize connection=_connection;
@property(retain) NETClient *client; // @synthesize client=_client;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSObject<OS_tcp_connection> *tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property unsigned int result; // @synthesize result=_result;
@property int pid; // @synthesize pid=_pid;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (void)destroy;
- (id)init;
- (id)description;
- (void)dealloc;
- (void)run;
@property(readonly) const char *name;

@end