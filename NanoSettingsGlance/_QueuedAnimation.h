//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _QueuedAnimation : NSObject
{
    _Bool _newState;
    NPRFGlanceOnOffButton *_button;
    unsigned int _changeCount;
}

@property(readonly, nonatomic) unsigned int changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) _Bool newState; // @synthesize newState=_newState;
@property(retain, nonatomic) NPRFGlanceOnOffButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)initWithButton:(id)arg1 newState:(_Bool)arg2;

@end