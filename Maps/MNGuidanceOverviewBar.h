//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNGuidanceOverviewBar : MNNavigationOverviewBar <MNGuidanceDisplay>
{
    NSString *_destinationDisplayName;
    int _guidanceState;
    InlineNavigationTopBarTitleView *_regularTitle;
    TwoLineTopBarTitleView *_compressedTitle;
    MNGuidanceETA *_latestETA;
    _Bool _returningToStepping;
    NSDate *_transitDepartureDate;
    id <MNNavigationOverviewBarDelegate> _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
@property _Bool returningToStepping; // @synthesize returningToStepping=_returningToStepping;
@property(retain) NSDate *transitDepartureDate; // @synthesize transitDepartureDate=_transitDepartureDate;
@property(copy, nonatomic) NSString *destinationDisplayName; // @synthesize destinationDisplayName=_destinationDisplayName;
- (void).cxx_destruct;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2;
- (void)showRecalculationFailed;
- (void)showRecalculating;
- (void)resetForNewReceivedRoute;
- (void)showArrived;
- (void)showNoGuidance;
- (void)setETA:(id)arg1;
- (void)_updateEstimatesDisplay;
- (void)setShowsDimmedDisplay:(_Bool)arg1 darkUI:(_Bool)arg2 animation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end