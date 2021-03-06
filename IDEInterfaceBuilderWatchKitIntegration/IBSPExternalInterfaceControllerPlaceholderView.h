//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPExternalInterfaceControllerPlaceholderView : IBAbstractViewControllerEditorPlaceholderView <IBSPInterfaceObjectDescendantObserving>
{
    IBSPExternalInterfaceController *_editedController;
}

@property(readonly, nonatomic) IBSPExternalInterfaceController *editedController; // @synthesize editedController=_editedController;
- (void).cxx_destruct;
- (void)layout;
- (void)synchronizeWithEditedController;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)initWithEditedController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end