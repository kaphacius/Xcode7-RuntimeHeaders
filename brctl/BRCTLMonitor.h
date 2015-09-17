//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BRCTLMonitor : NSObject
{
    int _scopes;
    _Bool _incremental;
    _Bool _isGlobal;
    NSProgress *_progressObserved;
    NSString *_previousDescription;
}

@property(retain) NSString *previousDescription; // @synthesize previousDescription=_previousDescription;
@property __weak NSProgress *progressObserved; // @synthesize progressObserved=_progressObserved;
@property(readonly, nonatomic) _Bool isGlobal; // @synthesize isGlobal=_isGlobal;
@property(nonatomic) int scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (void)monitorContainers:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitorGlobalActivity;
- (void)parseOption:(int)arg1 arg:(const char *)arg2;
- (void)dealloc;
- (id)init;

@end