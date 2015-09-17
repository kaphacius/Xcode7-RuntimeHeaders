//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDURLSessionProxyCreateSession : PBCodable <NSCopying>
{
    NSData *_configuration;
    SDURLSessionProxySessionMessage *_session;
    _Bool _delegateImplementsDidReceiveResponse;
    _Bool _delegateImplementsSessionAuthChallenge;
    _Bool _delegateImplementsTaskAuthChallenge;
    _Bool _delegateImplementsWillPerformRedirection;
    _Bool _delegateImplementsWillSendRequest;
    _Bool _supportsRedirects;
    struct {
        unsigned int delegateImplementsDidReceiveResponse:1;
        unsigned int delegateImplementsSessionAuthChallenge:1;
        unsigned int delegateImplementsTaskAuthChallenge:1;
        unsigned int delegateImplementsWillPerformRedirection:1;
        unsigned int delegateImplementsWillSendRequest:1;
        unsigned int supportsRedirects:1;
    } _has;
}

@property(nonatomic) _Bool delegateImplementsDidReceiveResponse; // @synthesize delegateImplementsDidReceiveResponse=_delegateImplementsDidReceiveResponse;
@property(nonatomic) _Bool delegateImplementsWillPerformRedirection; // @synthesize delegateImplementsWillPerformRedirection=_delegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool delegateImplementsTaskAuthChallenge; // @synthesize delegateImplementsTaskAuthChallenge=_delegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool delegateImplementsSessionAuthChallenge; // @synthesize delegateImplementsSessionAuthChallenge=_delegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool delegateImplementsWillSendRequest; // @synthesize delegateImplementsWillSendRequest=_delegateImplementsWillSendRequest;
@property(nonatomic) _Bool supportsRedirects; // @synthesize supportsRedirects=_supportsRedirects;
@property(retain, nonatomic) NSData *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDelegateImplementsDidReceiveResponse;
@property(nonatomic) _Bool hasDelegateImplementsWillPerformRedirection;
@property(nonatomic) _Bool hasDelegateImplementsTaskAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsSessionAuthChallenge;
@property(nonatomic) _Bool hasDelegateImplementsWillSendRequest;
@property(nonatomic) _Bool hasSupportsRedirects;
@property(readonly, nonatomic) _Bool hasConfiguration;
@property(readonly, nonatomic) _Bool hasSession;
@property(retain, setter=_setActualConfiguration:) NSURLSessionConfiguration *_actualConfiguration;

@end