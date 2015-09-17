//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHOnHoldView : UIView
{
    UILabel *_displayLabel;
    UILabel *_descriptionLabel;
    NPHRoundButton *_hangupButton;
    NPHRoundButton *_findMyButton;
    double _startTime;
    _Bool _updatingDuration;
    _Bool _observingBacklight;
    _Bool _flashingAnswerOnPhone;
    id <NPHOnHoldViewDelegate> _delegate;
    NSString *_callerName;
    CADisplayLink *_durationUpdater;
    UILabel *_answerOnPhoneLabel;
}

@property(nonatomic, getter=isFlashingAnswerOnPhone) _Bool flashingAnswerOnPhone; // @synthesize flashingAnswerOnPhone=_flashingAnswerOnPhone;
@property(readonly, nonatomic) UILabel *answerOnPhoneLabel; // @synthesize answerOnPhoneLabel=_answerOnPhoneLabel;
@property(nonatomic, getter=isObservingBacklight) _Bool observingBacklight; // @synthesize observingBacklight=_observingBacklight;
@property(nonatomic) CADisplayLink *durationUpdater; // @synthesize durationUpdater=_durationUpdater;
@property(nonatomic) _Bool updatingDuration; // @synthesize updatingDuration=_updatingDuration;
@property(retain, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(nonatomic) __weak id <NPHOnHoldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetDuration;
- (void)doFindMy:(id)arg1;
- (void)doHangup:(id)arg1;
- (void)_createConstraints;
- (id)_createFindMyButton;
- (id)_createHangupButton;
- (id)_createDescriptionLabel;
- (id)_createDisplayLabel;
- (void)_updateDuration:(id)arg1;
- (void)_backlightWillTurnOn:(id)arg1;
- (void)_flashAnswerOnPhone;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end