//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDNetworkEjecter : NSObject
{
    struct __SFNode *_node;
    int _mountedCount;
    int _ejectedCount;
    NSNumber *_flags;
    NSString *_protocol;
    id <SDNetworkEjecterDelegate> _delegate;
}

@property __weak id <SDNetworkEjecterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (void)stop;
- (int)start;
- (void)eject;
- (void)ejectMountPoints:(id)arg1 useAssistant:(_Bool)arg2;
- (void)notifyClientAboutEject:(int)arg1;
- (void)dealloc;
- (id)initWithNode:(struct __SFNode *)arg1;

@end