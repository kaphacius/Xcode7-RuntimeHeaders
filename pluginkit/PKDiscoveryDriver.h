//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _annotationNotifyToken;
    NSDictionary *_attributes;
    unsigned long long _flags;
    CDUnknownBlockType _report;
    NSSet *_lastResults;
    id _mcNotificationToken;
    PKDiscoveryLSWatcher *_lsWatcher;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) PKDiscoveryLSWatcher *lsWatcher; // @synthesize lsWatcher=_lsWatcher;
@property(retain) id mcNotificationToken; // @synthesize mcNotificationToken=_mcNotificationToken;
@property int annotationNotifyToken; // @synthesize annotationNotifyToken=_annotationNotifyToken;
@property(retain) NSSet *lastResults; // @synthesize lastResults=_lastResults;
@property(copy) CDUnknownBlockType report; // @synthesize report=_report;
@property unsigned long long flags; // @synthesize flags=_flags;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)removeWatchers;
- (void)installWatchers;
- (void)cancel;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(_Bool)arg2;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end