//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRRecommendedTagEngagementMonitor : NSObject <FREventCenterObserving>
{
    NSHashTable *_observers;
    NSMutableDictionary *_mutableExposureCountByTagID;
    FCKeyValueStore *_store;
}

@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSMutableDictionary *mutableExposureCountByTagID; // @synthesize mutableExposureCountByTagID=_mutableExposureCountByTagID;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)_addExposureForTagID:(id)arg1 date:(id)arg2;
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *exposureCountByTagID;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPrivateDataStorage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end