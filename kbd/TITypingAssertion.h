//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TITypingAssertion : NSObject
{
    _Bool _active;
    NSTimer *_timer;
}

+ (id)sharedTypingAssertion;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)touch;
- (void)touchWithDuration:(double)arg1;
- (void)timerFired:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
- (id)init;
- (void)dealloc;

@end