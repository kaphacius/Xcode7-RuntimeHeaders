//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRSavedViewController : UIViewController <FRAppActivityBackgroundForegroundObserving, FRStoryboardRestorableViewController>
{
    _Bool _viewControllerIsVisible;
    FRCompressingToolbarViewController *_currentViewController;
    FRReadingListViewController *_historyViewController;
    FRReadingListViewController *_readingListViewController;
    FRCompressingToolbarViewController *_historyContainerViewController;
    FRCompressingToolbarViewController *_readingListContainerViewController;
    long long _currentIndex;
    NSDate *_viewAppearDate;
}

+ (id)storyboardIdentifier;
+ (id)savedViewControllerWithFeldsparContext:(id)arg1 andStoryboard:(id)arg2 isInitialViewController:(_Bool)arg3;
@property(nonatomic) _Bool viewControllerIsVisible; // @synthesize viewControllerIsVisible=_viewControllerIsVisible;
@property(retain, nonatomic) NSDate *viewAppearDate; // @synthesize viewAppearDate=_viewAppearDate;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) FRCompressingToolbarViewController *readingListContainerViewController; // @synthesize readingListContainerViewController=_readingListContainerViewController;
@property(retain, nonatomic) FRCompressingToolbarViewController *historyContainerViewController; // @synthesize historyContainerViewController=_historyContainerViewController;
@property(retain, nonatomic) FRReadingListViewController *readingListViewController; // @synthesize readingListViewController=_readingListViewController;
@property(retain, nonatomic) FRReadingListViewController *historyViewController; // @synthesize historyViewController=_historyViewController;
@property(retain, nonatomic) FRCompressingToolbarViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (void)didBecomeNotVisible;
- (void)didBecomeVisible;
- (_Bool)isViewVisible;
- (void)activityBackgroundForegroundObservingApplicationDidEnterBackground:(CDUnknownBlockType)arg1;
- (void)activityBackgroundForegroundObservingApplicationDidBecomeActive;
- (void)_switchViewControllerWithIndex:(unsigned long long)arg1;
- (void)_segmentedControlChanged:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)_wrapWithCompressingToolbarVC:(id)arg1;
- (void)dealloc;
- (void)_setupWithFeldsparContext:(id)arg1;
- (id)_switchControl;
- (id)fr_effectiveViewControllerInContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end