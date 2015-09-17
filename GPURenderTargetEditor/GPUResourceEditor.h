//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUResourceEditor : DVTViewController
{
    GPUSharedTabUIState *_sharedTabState;
    GPUSharedInferiorSessionUIState *_sharedInferiorSessionState;
    id <DYResource> _resourceObject;
    IDEFileTextSettings *_fileTextSettings;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(nonatomic) __weak IDEFileTextSettings *fileTextSettings; // @synthesize fileTextSettings=_fileTextSettings;
@property(nonatomic) __weak id <DYResource> resourceObject; // @synthesize resourceObject=_resourceObject;
@property(nonatomic) __weak GPUSharedInferiorSessionUIState *sharedInferiorSessionState; // @synthesize sharedInferiorSessionState=_sharedInferiorSessionState;
@property(nonatomic) __weak GPUSharedTabUIState *sharedTabState; // @synthesize sharedTabState=_sharedTabState;
- (void).cxx_destruct;
- (BOOL)findBarSupported;
- (void)setRepresentedObject:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)beginEditor;
- (BOOL)_checkResourceType;
- (id)supportedResourceClasses;
- (id)supportedResourceProtocols;

@end