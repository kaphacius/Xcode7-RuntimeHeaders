//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PageLoadTest : NSObject
{
    TabDocument *_tabDocument;
    _WKRemoteObjectInterface *_eventsListenerInterface;
}

- (void).cxx_destruct;
- (void)didFinishPageLoadWithLoadData:(id)arg1;
- (void)resetAfterWebProcessCrash;
- (void)_enablePageLoadMeasurementCollection;
- (void)_setUpPageLoadTestEventsListener;
- (void)_setUpWebProcessForPageLoadMeasurementCollection;
- (void)_invalidateRemoteObjects;
- (void)dealloc;
- (id)initWithTabDocument:(id)arg1;

@end