//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDActivityEncryptionKeyRequestRecord : SDActivityRequestRecord
{
    _Bool _canDoCloudRequest;
    NSUUID *_previousKeyIdentifier;
    unsigned int _retryCount;
    double _timeSinceLastRequest;
}

@property(nonatomic) double timeSinceLastRequest; // @synthesize timeSinceLastRequest=_timeSinceLastRequest;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool canDoCloudRequest; // @synthesize canDoCloudRequest=_canDoCloudRequest;
@property(retain, nonatomic) NSUUID *previousKeyIdentifier; // @synthesize previousKeyIdentifier=_previousKeyIdentifier;
- (void).cxx_destruct;
- (id)description;

@end