//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUserNotificationViewController : CUISAlertViewController <CUISAlertAnimatedTransitioning, CSLAlertSheetViewControllerDelegate, CUISDNDAlertViewController>
{
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    unsigned long _requestFlags;
    int _token;
    int _timeout;
    unsigned int _replyFlags;
    NSDictionary *_noteDictionary;
    CSLAlertSheetViewController *_alertSheet;
    NSTimer *_expirationTimer;
    CSLUISound *_sound;
    _Bool _soundPlayed;
    NSMutableArray *_buttons;
    _Bool _defaultButtonNotSet;
    _Bool _alertDismissed;
    id <CSLUserNotificationViewControllerDelegate> _delegate;
    id _policyOverrideAssertion;
    NSString *_soundPath;
    NSString *_alertHeader;
    UIColor *_alertTint;
    NSString *_alertMessage;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_iconPath;
}

@property(retain, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(retain, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) UIColor *alertTint; // @synthesize alertTint=_alertTint;
@property(retain, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(retain, nonatomic) id policyOverrideAssertion; // @synthesize policyOverrideAssertion=_policyOverrideAssertion;
@property(nonatomic) __weak id <CSLUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)wantsDismissalForDNDGesture;
- (_Bool)canBeSilencedByDND;
- (void)animateAlertTransition:(id)arg1;
- (double)alertTransitionDuration:(id)arg1;
- (id)animationControllerForDismissal;
- (id)animationControllerForPresentation;
- (_Bool)allowAutoDismissAfterBacklightOff;
- (void)cancel;
- (void)_dismissAlert;
- (void)_cleanup;
- (void)_sendResponse:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_handleExpiration:(id)arg1;
- (void)_resetExpirationTimer;
- (void)deactivate;
- (void)activate;
- (id)sound;
- (int)token;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;
- (id)actions;
- (void)_reloadData;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(CDStruct_6ad76789)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end