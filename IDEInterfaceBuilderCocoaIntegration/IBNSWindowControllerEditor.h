//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSWindowControllerEditor : IBNSWindowEditor
{
    NSSet *_observers;
}

@property(retain) NSSet *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)_updatePlaceholderFrame;
- (void)willClose;
- (void)didOpen;
- (void)_teardownObservations;
- (void)_setupObservations;
- (void)_updatePlaceholderTitle;
- (id)childViewControllerTitle;
- (id)placeholder;
- (id)windowControllerEditorView;
- (id)viewEditorFrameController;
- (id)editedWindowTemplate;
- (id)editedNSWindowController;

@end