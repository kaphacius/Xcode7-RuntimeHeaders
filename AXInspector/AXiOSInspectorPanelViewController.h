//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXiOSInspectorPanelViewController : AXInspectorPanelViewController <AXiOSInspectorPanelViewDelegate>
{
    _Bool _isMinimized;
    AXInspectorElement *_focusedElement;
    NSMutableArray *_notificationStack;
}

@property(retain, nonatomic) NSMutableArray *notificationStack; // @synthesize notificationStack=_notificationStack;
@property(retain, nonatomic) AXInspectorElement *focusedElement; // @synthesize focusedElement=_focusedElement;
- (void).cxx_destruct;
- (id)notificationStack:(id)arg1;
- (id)focusedElement:(id)arg1;
- (void)inspectorPanelCloseButtonPressed:(id)arg1;
- (void)moveInspectorPanel:(id)arg1 withDifference:(struct CGPoint)arg2;
- (_Bool)isPanelVisible;
- (void)toggleMinimizeInspector;
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (void)_saveInspectorPosition:(struct CGRect)arg1;
- (void)_writeInspectorFrame:(id)arg1;
- (_Bool)_storedInspectorMinimized;
- (struct CGRect)_storedInspectorFrame;
- (id)panelView;
- (void)updateAXNotifications:(id)arg1;
- (void)updateAXFocusedElement:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end