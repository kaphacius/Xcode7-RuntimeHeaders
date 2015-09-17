//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBTrackingIndicatorLayoutInfo : NSObject
{
    struct CGRect boundingFrame;
    struct CGRect borderFrame;
    IBTrackingIndicatorMagnitudeLayoutInfo *widthLayoutInfo;
    IBTrackingIndicatorMagnitudeLayoutInfo *heightLayoutInfo;
}

+ (id)trackingIndicatorForSize:(struct CGSize)arg1 fromKnob:(CDUnion_31865a80)arg2 ofTrackedRect:(struct CGRect)arg3 constrainedToRect:(struct CGRect)arg4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTrackingIndicatorLayoutInfo:(id)arg1;
- (unsigned long long)hash;
- (struct CGRect)boundingFrame;
- (void)draw;
- (id)initWithSize:(struct CGSize)arg1 fromKnob:(CDUnion_31865a80)arg2 ofTrackedRect:(struct CGRect)arg3 constrainedToRect:(struct CGRect)arg4;

@end