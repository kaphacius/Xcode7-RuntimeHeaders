//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLIconZoomCoordinationContext : NSObject
{
    CSLLauncherZoomOptions *_launcherOptions;
    CSLUIIconView *_iconView;
    float _initialZoomLevel;
    float _targetZoomLevel;
    float _minimumIconDiameter;
    float _maximumIconDiameter;
    float _minimumZoomLevel;
    float _maximumZoomLevel;
    UIView *_animationContainerView;
}

@property(retain, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
@property(nonatomic) float maximumZoomLevel; // @synthesize maximumZoomLevel=_maximumZoomLevel;
@property(nonatomic) float minimumZoomLevel; // @synthesize minimumZoomLevel=_minimumZoomLevel;
@property(nonatomic) float maximumIconDiameter; // @synthesize maximumIconDiameter=_maximumIconDiameter;
@property(nonatomic) float minimumIconDiameter; // @synthesize minimumIconDiameter=_minimumIconDiameter;
@property(nonatomic) float targetZoomLevel; // @synthesize targetZoomLevel=_targetZoomLevel;
@property(nonatomic) float initialZoomLevel; // @synthesize initialZoomLevel=_initialZoomLevel;
@property(retain, nonatomic) CSLUIIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) CSLLauncherZoomOptions *launcherOptions; // @synthesize launcherOptions=_launcherOptions;
- (void).cxx_destruct;

@end