//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRCompressingTitleView : UIView
{
    _Bool _frozen;
    _Bool _isNotificationCountVisible;
    _Bool _isAnimating;
    _Bool _showingSpinner;
    _Bool _isBubbleVisible;
    _Bool _isDeviceInEnglishLanguage;
    UIView *_titleView;
    UIColor *_themeBackgroundColor;
    UIColor *_themeForegroundColor;
    NSDictionary *_titleTextAttributes;
    id <FRCompressingTitleViewDelegate> _delegate;
    double _contentViewScale;
    UIView *_notificationContainerView;
    FRAnimatableTextColorLabel *_titleLabel;
    UILabel *_notificationLabel;
    UILabel *_unreadCountLabel;
    UILabel *_unreadCountLabelCopy;
    UIView *_unreadCountBackgroundView;
    UIButton *_unreadCountView;
    unsigned long long _unreadArticlesCount;
    long long _animationType;
    UIFont *_fromFont;
    UIFont *_toFont;
    double _unreadLabelCountPadding;
    struct CGRect _boundsDuringLastLayout;
}

@property(nonatomic) double unreadLabelCountPadding; // @synthesize unreadLabelCountPadding=_unreadLabelCountPadding;
@property(nonatomic) _Bool isDeviceInEnglishLanguage; // @synthesize isDeviceInEnglishLanguage=_isDeviceInEnglishLanguage;
@property(nonatomic) struct CGRect boundsDuringLastLayout; // @synthesize boundsDuringLastLayout=_boundsDuringLastLayout;
@property(nonatomic) _Bool isBubbleVisible; // @synthesize isBubbleVisible=_isBubbleVisible;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(retain, nonatomic) UIFont *toFont; // @synthesize toFont=_toFont;
@property(retain, nonatomic) UIFont *fromFont; // @synthesize fromFont=_fromFont;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) unsigned long long unreadArticlesCount; // @synthesize unreadArticlesCount=_unreadArticlesCount;
@property(retain, nonatomic) UIButton *unreadCountView; // @synthesize unreadCountView=_unreadCountView;
@property(retain, nonatomic) UIView *unreadCountBackgroundView; // @synthesize unreadCountBackgroundView=_unreadCountBackgroundView;
@property(retain, nonatomic) UILabel *unreadCountLabelCopy; // @synthesize unreadCountLabelCopy=_unreadCountLabelCopy;
@property(retain, nonatomic) UILabel *unreadCountLabel; // @synthesize unreadCountLabel=_unreadCountLabel;
@property(retain, nonatomic) UILabel *notificationLabel; // @synthesize notificationLabel=_notificationLabel;
@property(retain, nonatomic) FRAnimatableTextColorLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *notificationContainerView; // @synthesize notificationContainerView=_notificationContainerView;
@property(nonatomic) double contentViewScale; // @synthesize contentViewScale=_contentViewScale;
@property(nonatomic) __weak id <FRCompressingTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isNotificationCountVisible; // @synthesize isNotificationCountVisible=_isNotificationCountVisible;
@property(retain, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(retain, nonatomic) UIColor *themeForegroundColor; // @synthesize themeForegroundColor=_themeForegroundColor;
@property(retain, nonatomic) UIColor *themeBackgroundColor; // @synthesize themeBackgroundColor=_themeBackgroundColor;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (_Bool)_accessibilityServesAsFirstElement;
- (_Bool)_accessibilityIsTitleElement;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (struct CGRect)accessibilityFrame;
- (id)_accessibilityNotificationCountLabel;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)setImage:(id)arg1 uniqueKey:(id)arg2;
- (struct CGPoint)_titleViewCenterPoint;
- (void)_handleSingleTap:(id)arg1;
- (void)_unreadCountTapped:(id)arg1;
- (void)_tearDown;
- (void)_animateFinalPhaseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_prepareToAnimateFinalPhase;
- (id)_positionAnimationForLayer:(id)arg1;
- (id)_verticalGradient;
- (void)_animateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_prepareToAnimate;
- (void)_animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateUnreadCountViewFrame;
- (void)_updateTitleViewFrame;
- (void)_updateUnreadCountLabelText;
- (void)_setUpViews;
- (void)_updateNotificationViewFrame;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect shadowFrame;
- (void)dismissNotificationBubble;
- (void)dismissNotification;
- (void)updateUnreadCount:(unsigned long long)arg1;
- (void)showNotificationWithUnreadArticlesCount:(unsigned long long)arg1 animationType:(long long)arg2;
- (void)hideSpinner:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1 fromFont:(id)arg2 toFont:(id)arg3;
- (id)initWithNavigationItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end