//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUTraceDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    BOOL _editorWasInstalled;
    GPUTraceSession *_traceSession;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
}

+ (BOOL)preservesVersions;
+ (BOOL)autosavesInPlace;
@property(nonatomic) BOOL editorWasInstalled; // @synthesize editorWasInstalled=_editorWasInstalled;
@property(retain, nonatomic) GPUDebuggingAdditionUIController *debuggingAdditionUIController; // @synthesize debuggingAdditionUIController=_debuggingAdditionUIController;
@property(retain, nonatomic) GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
- (void).cxx_destruct;
- (id)sourceLocationForDocumentLocation:(id)arg1;
- (id)boundResourcesGeniusLocationsForDocumentLocation:(id)arg1;
- (id)allResourcesGeniusLocationsForDocumentLocation:(id)arg1;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)editorDocumentDidClose;
- (void)editorDocumentWillClose;
- (BOOL)prepareSavePanel:(id)arg1;
- (id)backupFileURL;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)canExportDocument;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly, nonatomic) DYCaptureSessionInfo *captureSessionInfo; // @dynamic captureSessionInfo;
- (id)captureArchive;
- (void)dealloc;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end