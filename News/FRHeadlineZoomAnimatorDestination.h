//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRHeadlineZoomAnimatorDestination <NSObject>
- (_Bool)headlineZoomDestinationImageIsVisible:(id <FRHeadlineAnimator>)arg1;
- (UIImage *)headlineZoomDestinationImage:(id <FRHeadlineAnimator>)arg1;
- (_Bool)headlineZoomDestinationShouldFade:(id <FRHeadlineAnimator>)arg1;
- (double)headlineZoomDestinationTitleLabelTopInset:(id <FRHeadlineAnimator>)arg1;
- (struct CGRect)headlineZoomDestinationFrame:(id <FRHeadlineAnimator>)arg1;

@optional
- (void)headlineZoomDestinationDidFinishAnimation:(id <FRHeadlineAnimator>)arg1;
- (void)headlineZoomDestinationDidStartAnimation:(id <FRHeadlineAnimator>)arg1;
@end