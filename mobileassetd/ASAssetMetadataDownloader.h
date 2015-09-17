//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ASAssetMetadataDownloader : ASURLSessionManager
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_data;
    NSMutableDictionary *_completions;
    double _defaultNetworkTimeout;
}

@property(nonatomic) double defaultNetworkTimeout; // @synthesize defaultNetworkTimeout=_defaultNetworkTimeout;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)downloadMetadataFromURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_lastModifiedDateFromResponse:(id)arg1;
- (id)_translateError:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_sessionForOptions:(id)arg1;
- (_Bool)_canUseBackgroundSession;
- (id)sessionConfigurationWithIdentifier:(id)arg1 options:(id)arg2;

@end