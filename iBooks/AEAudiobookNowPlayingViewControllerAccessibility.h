//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AEAudiobookNowPlayingViewControllerAccessibility : __AEAudiobookNowPlayingViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)accessibilityPerformEscape;
- (void)_axUpdateTimeLabels;
- (void)_updateMetadataLabelsWithChapter:(id)arg1 scrubberTracking:(_Bool)arg2;
- (void)playbackRateControllerRateChanged:(id)arg1;
- (void)mediaPlayerPeriodicUpdate:(id)arg1 elapsed:(double)arg2 duration:(double)arg3 isFinished:(_Bool)arg4;
- (void)onUserDefaultChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_pause;
- (void)_play;
- (void)_accessibilityUpdatePlayButton;
- (void)_accessibilityLoadAccessibilityInformation;

@end