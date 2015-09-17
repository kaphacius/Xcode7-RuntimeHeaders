//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MNLocationTrackerDelegate <NSObject>
- (void)locationTracker:(MNLocationTracker *)arg1 updatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 invalidatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 receivedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(_Bool))arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTrackerDetectedNewTransportType:(MNLocationTracker *)arg1 newTransportType:(int)arg2;
- (void)locationTrackerHasReachedEndOfLeg:(MNLocationTracker *)arg1;
- (void)locationTrackerHasArrived:(MNLocationTracker *)arg1;
- (void)locationTrackerHideSecondaryStep:(MNLocationTracker *)arg1;
- (void)locationTracker:(MNLocationTracker *)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(NSString *)arg6 shorterAlternativeInstructions:(NSArray *)arg7 shieldType:(int)arg8 shieldText:(NSString *)arg9 drivingSide:(int)arg10;
- (void)locationTracker:(MNLocationTracker *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(NSString *)arg6 shorterAlternativeInstructions:(NSArray *)arg7 shieldType:(int)arg8 shieldText:(NSString *)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(_Bool)arg12;
- (void)locationTracker:(MNLocationTracker *)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)locationTracker:(MNLocationTracker *)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)locationTracker:(MNLocationTracker *)arg1 updatePointOfInterest:(CDStruct_c3b9c2ee)arg2 focusStyle:(int)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 startingStepIndex:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 failedWithErrorCode:(long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 ignoredLocation:(CLLocation *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 updatedMatchedLocation:(MNLocation *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didEnableGuidance:(_Bool)arg2;
- (void)locationTrackerWillResumeFromPause:(MNLocationTracker *)arg1;
- (void)locationTrackerWillPause:(MNLocationTracker *)arg1;
@end