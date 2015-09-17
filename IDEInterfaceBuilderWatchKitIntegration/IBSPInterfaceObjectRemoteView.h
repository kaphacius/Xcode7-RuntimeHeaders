//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPInterfaceObjectRemoteView : IBRemoteView <IBSPInterfaceObjectDescendantObserving>
{
    NSDictionary *_descendantRects;
    NSDictionary *_descendantTextRects;
    IBSPInterfaceObject *_editedObject;
}

@property(readonly, nonatomic) IBSPInterfaceObject *editedObject; // @synthesize editedObject=_editedObject;
- (void).cxx_destruct;
- (void)processRequestedImage:(id)arg1;
- (BOOL)shouldDrawPlaceholderForObject:(id)arg1;
- (struct CGSize)fullContentSize;
- (void)layout;
- (struct CGRect)textRectForObject:(id)arg1 inView:(id)arg2;
- (id)defaultRectsForRequestOfLength:(long long)arg1;
- (id)requestRectsForRemoteKeyPath:(id)arg1;
- (struct CGRect)requestedRectForObject:(id)arg1 inView:(id)arg2;
- (BOOL)isFlipped;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (unsigned long long)indexOfRenderedDescendant;
- (long long)fileType;
- (BOOL)isFullscreen;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)flattenedDescendantsOfTopLevelAncestor;
- (id)topLevelControllerForEditedObject;
- (struct CGSize)screenSize;
- (id)screenMetrics;
- (id)interfacePlist;
- (id)marshalledRepresentationForRendering;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)documentOrNil;
- (id)targetRuntime;
- (id)initWithFrame:(struct CGRect)arg1 editedObject:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end