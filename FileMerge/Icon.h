//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Icon : NSImageView
{
    id iconTitle;
    long long highlight;
    id delegate;
    NSString *fileName;
    NSNotification *notification;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)doDoubleAction:(id)arg1;
- (void)doFileCompletion:(id)arg1;
- (id)stringValue;
- (void)setDelegate:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFileName:(id)arg1;
- (void)update;
- (id)fileName;
- (id)iconTitle;
- (void)dealloc;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end