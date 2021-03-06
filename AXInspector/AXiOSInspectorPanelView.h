//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXiOSInspectorPanelView : UIView <UITextContentViewDelegate, UITextViewDelegate>
{
    _Bool _displayMinimized;
    UIScrollView *_textScrollView;
    UILabel *_axLabelLabel;
    UILabel *_axHintLabel;
    UILabel *_axValueLabel;
    UILabel *_axTraitsLabel;
    UILabel *_axFrameLabel;
    UILabel *_axLanguageLabel;
    UILabel *_axNotificationsLabel;
    struct CGRect _highlightFrame;
    UIControl *_closeButton;
    UIImageView *_fullBackground;
    UIImageView *_miniBackground;
    AXInspectorMovementView *_movementView;
    NSArray *_axLabelHeightConstraints;
    NSLayoutConstraint *_axLabelBottomPaddingConstraint;
    NSArray *_axHintHeightConstraints;
    NSLayoutConstraint *_axHintBottomPaddingConstraint;
    NSArray *_axValueHeightConstraints;
    NSLayoutConstraint *_axValueBottomPaddingConstraint;
    NSArray *_axTraitsHeightConstraints;
    NSLayoutConstraint *_axTraitsBottomPaddingConstraint;
    NSArray *_axFrameHeightConstraints;
    NSLayoutConstraint *_axFrameBottomPaddingConstraint;
    NSArray *_axLanguageHeightConstraints;
    NSArray *_axNotificationsHeightConstraints;
    NSLayoutConstraint *_axNotificationsTopPaddingConstraint;
    id <AXiOSInspectorPanelViewDelegate> _inspectorDelegate;
}

@property(nonatomic) __weak id <AXiOSInspectorPanelViewDelegate> inspectorDelegate; // @synthesize inspectorDelegate=_inspectorDelegate;
- (void).cxx_destruct;
- (void)_updateTextView;
- (void)_setText:(id)arg1 forValueLabel:(id)arg2 heightConstraints:(id)arg3 bottomPaddingConstraint:(id)arg4;
- (void)_setNotifications:(id)arg1;
- (void)_setLanguage:(id)arg1;
- (void)_setFrame:(id)arg1;
- (void)_setTraits:(id)arg1;
- (void)_setValue:(id)arg1;
- (void)_setHint:(id)arg1;
- (void)_setLabel:(id)arg1;
- (id)localizedNotificationString:(int)arg1;
- (id)_traitStringsFromArray:(id)arg1;
- (void)closeButtonPressed;
- (void)updateDisplay;
- (void)dealloc;
- (void)_setUpTextArea:(id)arg1;
- (void)_addNotifications:(id)arg1;
- (id)_addValueLabelWithKeyLabel:(id)arg1 labelAbove:(id)arg2 constraints:(id)arg3 heightConstraints:(id *)arg4 bottomPaddingConstraintForLabelAbove:(id *)arg5;
- (id)_addValueLabel;
- (id)_addKeyLabelWithText:(id)arg1;
- (id)_constraintsToMakeView:(id)arg1 sameFrameAsView:(id)arg2;
- (id)_unchangingConstraintsForKeyLabel:(id)arg1 valueLabel:(id)arg2;
- (id)_bottomPaddingConstraintForLabelAbove:(id)arg1 labelBelow:(id)arg2;
- (id)_heightConstraintForLabel:(id)arg1;
- (id)_horizontalConstraintsForKeyLabel:(id)arg1 valueLabel:(id)arg2;
- (id)_baselineConstraintForKeyLabel:(id)arg1 valueLabel:(id)arg2;
- (id)_trailingConstraintForValueLabel:(id)arg1;
- (id)_leadingConstraintsForKeyLabel:(id)arg1 valueLabel:(id)arg2;
- (_Bool)accessibilityElementsHidden;
@property(nonatomic, getter=isDisplayMinimized) _Bool displayMinimized;
- (void)showDisplayView;
- (void)hideDisplayView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInsideInspectorBar:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end