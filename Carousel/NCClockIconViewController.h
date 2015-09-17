//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCClockIconViewController : UIViewController <NCClockIconViewZoomController>
{
    NCClockIconView *_clockIconView;
    UIViewController<NTKClockIconZoomAnimator> *_zoomViewController;
}

- (void).cxx_destruct;
- (void)clockIconViewCleanupZoom:(id)arg1;
- (void)clockIconView:(id)arg1 setZoomDiameter:(float)arg2;
- (void)clockIconViewPrepareZoom:(id)arg1;
- (void)pauseClockIcon:(_Bool)arg1;
- (void)addClockZoomViewController:(id)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CSLUIIconView *view; // @dynamic view;

@end