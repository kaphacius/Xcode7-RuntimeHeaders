//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTSystemServerInstance : NSObject
{
    AXIPCServer *_server;
}

+ (id)serverInstance;
- (id)isBrailleInputUIShowing:(id)arg1;
- (id)voiceOverCommandTriggered:(id)arg1;
- (id)voiceOverCurrentFocusedElement:(id)arg1;
- (id)currentRotorName:(id)arg1;
- (id)lastSpokenPhrases:(id)arg1;
- (id)lastSoundsPlayed:(id)arg1;
- (id)lastScreenChange:(id)arg1;
- (void)dealloc;
- (id)_initServer;

@end