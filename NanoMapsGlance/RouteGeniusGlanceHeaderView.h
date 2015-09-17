//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RouteGeniusGlanceHeaderView : UIView
{
    UILabel *_travelTimeLabel;
    UILabel *_destinationNameLabel;
    NSDateComponentsFormatter *_intervalFormatter;
    UILabel *_trafficLabel;
    PUICActivityIndicatorView *_activityIndicator;
    struct {
        float textMargin;
        float destinationTextSize;
        float digitTextSize;
        float etaTextSize;
        float topBaseline;
        float trafficBaseline;
        float etaBaselineTrafficHidden;
        float etaBaselineTraffic;
        float mapSpacing;
        float activityIndicatorTopMargin;
        float activityIndicatorRightMargin;
    } _routeGlanceSpecs;
    MapsAutoLayoutContext *_lastDynamicContext;
    NSString *_destinationName;
    int _trafficSpeed;
    NanoGlanceChromeViewController *_chromeViewController;
    double _expectedTravelTime;
}

@property(nonatomic) __weak NanoGlanceChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) int trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsActivityIndicator;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end