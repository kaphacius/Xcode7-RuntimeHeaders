//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DBGRangeSliderDelegate <NSObject>
- (void)highlight3DPlaneWithIndex:(long long)arg1;
- (void)rangeSliderDidUpdateSpacing:(DBGRangeSliderNode *)arg1 from3DPlaneIndex:(long long)arg2;
- (void)rangeSliderDidChange:(DBGRangeSliderNode *)arg1;

@optional
- (void)manageCameraFacingNode:(DBGSimpleNode *)arg1;
@end