//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DeskClockAlertProvider : NSObject <CSLSUIProvider, CUISAlertProvider>
{
    id <CUISAlertProviderDelegate> alertProviderDelegate;
    DeskClockViewController *_deskClockVC;
    id _showListener;
    id _hideListener;
}

@property(retain, nonatomic) id hideListener; // @synthesize hideListener=_hideListener;
@property(retain, nonatomic) id showListener; // @synthesize showListener=_showListener;
@property(retain, nonatomic) DeskClockViewController *deskClockVC; // @synthesize deskClockVC=_deskClockVC;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_deactivate;
- (void)_activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end