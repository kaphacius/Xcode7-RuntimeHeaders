//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBExternalPrimarySceneObjectEditor : IBEditor
{
}

- (id)chooseReferencedFilePathFromCandidates:(id)arg1;
- (void)invokeWithReferencedStoryboardDocument:(CDUnknownBlockType)arg1;
- (id)findReferencedControllerInDocument:(id)arg1;
- (void)showReferencedController;
- (BOOL)shouldDragFrameWithMouseDownInEditedRect:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedExternalPrimarySceneObject;

@end