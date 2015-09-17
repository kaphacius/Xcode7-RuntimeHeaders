//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProductsEmptyContentViewController : IDEViewController
{
    BOOL _busy;
    BOOL _showResolutionButton;
    BOOL _shouldShowDelayedTitleAndSubtitle;
    BOOL _shouldShowDelayedSpinner;
    NSString *_emptyContentTitle;
    NSString *_emptyContentSubtitle;
    NSProgressIndicator *_spinner;
    NSTextField *_titleField;
    NSTextField *_subtitleField;
    NSButton *_resolutionButton;
    NSString *_resolutionButtonTitle;
    id _resolutionButtonTarget;
    SEL _resolutionButtonAction;
    DVTDelayedInvocation *_delayedShowTitleAndSubtitle;
    DVTDelayedInvocation *_delayedShowSpinner;
}

@property(retain) DVTDelayedInvocation *delayedShowSpinner; // @synthesize delayedShowSpinner=_delayedShowSpinner;
@property(retain) DVTDelayedInvocation *delayedShowTitleAndSubtitle; // @synthesize delayedShowTitleAndSubtitle=_delayedShowTitleAndSubtitle;
@property BOOL shouldShowDelayedSpinner; // @synthesize shouldShowDelayedSpinner=_shouldShowDelayedSpinner;
@property BOOL shouldShowDelayedTitleAndSubtitle; // @synthesize shouldShowDelayedTitleAndSubtitle=_shouldShowDelayedTitleAndSubtitle;
@property SEL resolutionButtonAction; // @synthesize resolutionButtonAction=_resolutionButtonAction;
@property(retain) id resolutionButtonTarget; // @synthesize resolutionButtonTarget=_resolutionButtonTarget;
@property(retain) NSString *resolutionButtonTitle; // @synthesize resolutionButtonTitle=_resolutionButtonTitle;
@property BOOL showResolutionButton; // @synthesize showResolutionButton=_showResolutionButton;
@property __weak NSButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property __weak NSTextField *subtitleField; // @synthesize subtitleField=_subtitleField;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentTitle; // @synthesize emptyContentTitle=_emptyContentTitle;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)resolve:(id)arg1;
- (void)disableResolutionButton;
- (void)enableResolutionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)viewDidLoad;

@end