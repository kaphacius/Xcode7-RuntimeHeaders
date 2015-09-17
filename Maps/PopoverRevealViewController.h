//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PopoverRevealViewController : UIViewController
{
    UIViewController *_rootViewController;
    UIViewController *_revealedViewController;
    _Bool _animating;
}

@property(retain, nonatomic) UIViewController *revealedViewController; // @synthesize revealedViewController=_revealedViewController;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)dismissRevealedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)revealViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;

@end