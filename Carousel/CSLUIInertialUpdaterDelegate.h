//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CSLUIInertialUpdaterDelegate <NSObject>
- (void)inertialUpdaterFinishedScrolling:(CSLUIInertialUpdater *)arg1;
- (void)inertialUpdater:(CSLUIInertialUpdater *)arg1 scrolledWithDelta:(struct CGPoint)arg2;
- (struct CGPoint)inertialUpdater:(CSLUIInertialUpdater *)arg1 willDecelerateWithTarget:(struct CGPoint)arg2;
@end