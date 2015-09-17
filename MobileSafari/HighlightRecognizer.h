//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HighlightRecognizer : UIGestureRecognizer
{
    unsigned long long _numberOfTouches;
    id _highlightTarget;
    SEL _highlightAction;
}

@property(nonatomic) SEL highlightAction; // @synthesize highlightAction=_highlightAction;
@property(nonatomic) __weak id highlightTarget; // @synthesize highlightTarget=_highlightTarget;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)numberOfTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end