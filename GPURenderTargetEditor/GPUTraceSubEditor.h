//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUTraceSubEditor : NSViewController
{
    GPUSharedTabUIState *_sharedUIStateObj;
    GPUTraceDocument *_editorDocument;
    GPUMainEditor *_mainEditor;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(readonly) __weak GPUMainEditor *mainEditor; // @synthesize mainEditor=_mainEditor;
@property(readonly) __weak GPUTraceDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(readonly) __weak GPUSharedTabUIState *sharedUIStateObj; // @synthesize sharedUIStateObj=_sharedUIStateObj;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)arg1;
- (void)onReplayCapture:(id)arg1;
- (BOOL)shouldEnableReplayCaptureMenuItem;
- (void)beginEditor;
- (id)initWithTraceDocument:(id)arg1 sharedUIState:(id)arg2 mainEditor:(id)arg3;

@end