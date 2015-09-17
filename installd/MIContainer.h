//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIContainer : NSObject
{
    MCMContainer *_container;
    unsigned int _status;
}

+ (id)allContainersForIdentifier:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)_bundleContainerForIdentifier:(id)arg1 error:(id *)arg2;
+ (id)containersWithClass:(int)arg1 error:(id *)arg2;
+ (id)containerWithIdentifier:(id)arg1 ofContentClass:(int)arg2 createIfNeeded:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
+ (id)tempContainerWithIdentifier:(id)arg1 ofContentClass:(int)arg2 error:(id *)arg3;
@property(readonly) unsigned int status; // @synthesize status=_status;
@property(readonly) MCMContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)description;
- (_Bool)captureStoreDataFromDirectory:(id)arg1 doCopy:(_Bool)arg2 failureIsFatal:(_Bool)arg3 withError:(id *)arg4;
- (unsigned long long)diskUsage;
- (_Bool)purgeContentWithError:(id *)arg1;
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned int)arg2 withError:(id *)arg3;
- (_Bool)makeContainerLiveWithError:(id *)arg1;
@property(readonly) int contentClass;
@property(readonly) NSURL *containerURL;
- (id)initWithContainer:(id)arg1;

@end