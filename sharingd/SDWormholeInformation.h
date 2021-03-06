//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDWormholeInformation : NSObject
{
    _Bool _started;
    SDStatusMonitor *_monitor;
    NSMutableDictionary *_properties;
    id <SDWormholeInformationDelegate> _delegate;
}

@property __weak id <SDWormholeInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)removeObservers;
- (void)addObservers;
- (void)somethingChanged:(id)arg1;
- (void)setInformationAndNotify;
- (void)setProperty:(void *)arg1 forKey:(id)arg2;
- (_Bool)boolValue:(void *)arg1;
- (void)dealloc;
- (id)init;

@end