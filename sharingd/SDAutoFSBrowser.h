//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDAutoFSBrowser : NSObject
{
    int _clientCount;
    NSDictionary *_servers;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)sharedBrowser;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)statusChanged:(id)arg1;
- (id)buildNodes;
- (void)browseAfterDelay:(double)arg1;
@property(readonly, copy) NSArray *nodes;
- (id)init;

@end