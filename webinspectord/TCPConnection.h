//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TCPConnection : NSObject
{
    id <TCPConnectionDelegate> _delegate;
    int _socket;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_inputSource;
    NSObject<OS_dispatch_source> *_outputSource;
    _Bool _shutdown;
    _Bool _outputSourceSuspended;
    _Bool _inputSourceCancelled;
    _Bool _outputSourceCancelled;
    NSMutableArray *_outputMessageQueue;
    NSMutableData *_incomingData;
    TCPServer *_server;
}

+ (id)TCPConnectionWithResolvedNetService:(id)arg1;
+ (id)TCPConnectionWithPort:(unsigned short)arg1;
@property(nonatomic) id <TCPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)_handleInput;
- (void)_closeInputStream;
- (void)_createInputSource;
- (void)_handleOutput;
- (void)_setOutputSourceSuspended:(_Bool)arg1;
- (void)_closeOutputStream;
- (void)_createOutputSource;
- (void)startReceiving;
- (void)sendMessage:(id)arg1;
- (void)_dispatchSourceCancelled;
- (void)_shutdown;
- (void)dealloc;
- (id)initWithServer:(id)arg1 socket:(int)arg2;

@end