//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AVPlayerViewControllerAccessibility : __AVPlayerViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)loadView;
- (void)_firePlaybackControlsViewVisibilityTimer:(id)arg1;
- (void)_togglePictureInPicture;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetupVideoLayerView;
- (void)_axPIPStop:(id)arg1;
- (void)_axObservePIPStateNotifications;
- (void)_axAnnotateVideoOverlayViews;

@end