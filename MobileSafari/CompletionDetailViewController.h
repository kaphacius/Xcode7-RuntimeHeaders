//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CompletionDetailViewController : UINavigationController
{
    UIViewController *_currentStoreSheet;
    id <CompletionDetailViewControllerDelegate> _completionDetailViewControllerDelegate;
}

@property(nonatomic) __weak id <CompletionDetailViewControllerDelegate> completionDetailViewControllerDelegate; // @synthesize completionDetailViewControllerDelegate=_completionDetailViewControllerDelegate;
- (void).cxx_destruct;
- (void)_dismissCompletionDetailSheet;
- (id)initWithRootViewController:(id)arg1;

@end