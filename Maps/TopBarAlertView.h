//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TopBarAlertView : UIView <MainChromeViewControllerBackdropLightness>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    TopBarAlertButton *_button;
    UIView *_buttonHairline;
    NSMutableArray *_layoutConstraints;
    _Bool _reallyUseWideLayout;
    _Bool _suppressInteractivity;
    _Bool _darkUI;
    _Bool _knobMode;
    _Bool _needsExtraTopPadding;
    _Bool _useWideLayoutWhenPossible;
    _Bool _buttonOnLeft;
    id <TopBarAlertViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonTitle;
    id _userInfo;
    double _preferredLayoutWidth;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CDStruct_ca1ab1a3 _topBarAlertViewMetrics;
}

@property(nonatomic, getter=isButtonOnLeft) _Bool buttonOnLeft; // @synthesize buttonOnLeft=_buttonOnLeft;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool useWideLayoutWhenPossible; // @synthesize useWideLayoutWhenPossible=_useWideLayoutWhenPossible;
@property(nonatomic) _Bool needsExtraTopPadding; // @synthesize needsExtraTopPadding=_needsExtraTopPadding;
@property(nonatomic, getter=isKnobMode) _Bool knobMode; // @synthesize knobMode=_knobMode;
@property(nonatomic, getter=isDarkUI) _Bool darkUI; // @synthesize darkUI=_darkUI;
@property(nonatomic) _Bool suppressInteractivity; // @synthesize suppressInteractivity=_suppressInteractivity;
@property(nonatomic) double preferredLayoutWidth; // @synthesize preferredLayoutWidth=_preferredLayoutWidth;
@property(nonatomic) CDStruct_ca1ab1a3 topBarAlertViewMetrics; // @synthesize topBarAlertViewMetrics=_topBarAlertViewMetrics;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TopBarAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackdropLightness:(long long)arg1 animation:(id)arg2;
- (void)updateForDarkUI:(_Bool)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_refresh;
- (_Bool)_canUseWideLayoutWithMaxLabelWidth:(double)arg1;
- (_Bool)_labelsFitInWideLayoutWithWidth:(double)arg1;
- (double)_oneLineWidthWithText:(id)arg1 font:(id)arg2;
- (void)_updateLabel:(id)arg1 toFitWidth:(double)arg2;
- (id)_fontToFitLabelWidth:(double)arg1 withText:(id)arg2 startingWithFont:(id)arg3 stepDownFontSize:(double)arg4 minFontSize:(double)arg5;
- (double)_labelTrailingMargin;
- (struct UIEdgeInsets)_minButtonMargins;
- (double)_maxLabelWidthForAvailableWidth:(double)arg1;
- (void)_resetConstraints;
- (double)_bottomBaselineMargin;
- (double)_bottomBaselineMarginUsingWideLayout:(_Bool)arg1;
- (double)_topBaselineMargin;
- (void)_setDefaultStyles;
- (id)_subtitleFontOfSize:(double)arg1;
- (id)_titleFontOfSize:(double)arg1;
- (id)_makeLabel;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)preferredFocusedView;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonHighlightColor:(id)arg1;
- (void)setButtonBorderColor:(id)arg1;
- (void)setButtonTintColor:(id)arg1;
- (void)setButtonTitleFont:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 delegate:(id)arg4 userInfo:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end