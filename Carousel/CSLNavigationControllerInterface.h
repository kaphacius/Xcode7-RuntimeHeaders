//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CSLNavigationControllerInterface <NSObject>
- (void)setViewControllers:(NSArray *)arg1 animated:(_Bool)arg2;
- (NSArray *)popToRootViewControllerAnimated:(_Bool)arg1;
- (NSArray *)popToViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (UIViewController *)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@end