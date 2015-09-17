//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBEditorStack : NSObject
{
    NSMutableArray *_editorStack;
    id <IBEditorStackDelegate> _delegate;
    IBEditorCanvasFrameController *_baseFrameController;
}

@property(readonly) IBEditorCanvasFrameController *baseFrameController; // @synthesize baseFrameController=_baseFrameController;
@property id <IBEditorStackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeAllEditors;
- (void)closeTopmostEditor;
- (id)openEditorForObject:(id)arg1 closingSubEditors:(BOOL)arg2;
- (id)documentEditor;
- (id)document;
- (id)allEditors;
- (id)editorForObject:(id)arg1;
- (id)editorCanvasFrameControllers;
- (id)deepestEditor;
- (id)initWithBaseFrameController:(id)arg1 delegate:(id)arg2;

@end