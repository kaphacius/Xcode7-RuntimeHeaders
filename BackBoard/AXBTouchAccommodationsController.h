//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate>
{
    _Bool _areTouchAccommodationsInEffect;
    NSObject<OS_dispatch_queue> *_touchAccommodationsQueue;
    AXUIClient *_touchAccommodationsClient;
}

+ (void)hideHoldDurationTripleClickHelp;
+ (void)showHoldDurationTripleClickHelp;
+ (void)initializeMonitor;
@property(retain, nonatomic) AXUIClient *touchAccommodationsClient; // @synthesize touchAccommodationsClient=_touchAccommodationsClient;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (id)_clientIdentifier;
- (void)_hideHoldDurationTripleClickHelp;
- (void)_showHoldDurationTripleClickHelp;
- (void)_updateTouchAccommodationsSetting;
- (void)_registerForTouchAccommodationsAXSettingsUpdate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end