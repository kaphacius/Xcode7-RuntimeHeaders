//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>
- (UIViewController *)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;

@optional
- (void)_didPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 wasSuccessful:(_Bool)arg2;
- (void)_willPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_didBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_willBeginSystemProvidedDismissalOfAlertController:(UIAlertController *)arg1;
- (void)_didEndSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 wasSuccessful:(_Bool)arg2;
- (void)_didBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1;
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(UIAlertController *)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;
@end