//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _hasValidConnection;
    UIWindow *_window;
    NSXPCConnection *_xpcConnection;
}

@property(nonatomic) _Bool hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)shareHandlerConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end