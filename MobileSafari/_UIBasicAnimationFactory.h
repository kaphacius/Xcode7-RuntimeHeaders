//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol _UIBasicAnimationFactory <NSObject>
- (CABasicAnimation *)_basicAnimationForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;

@optional
- (CAMediaTimingFunction *)_timingFunctionForAnimationInView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimation;
@end