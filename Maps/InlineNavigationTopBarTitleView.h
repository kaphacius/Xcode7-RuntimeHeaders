//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface InlineNavigationTopBarTitleView : UIView <TopBarStyledLabelDelegate>
{
    TopBarStyledLabel *_primaryLabel;
    TopBarStyledLabel *_secondaryLabel;
    TopBarStyledLabel *_tertiaryLabel;
    UIView *_centeredContainer;
    MapsAutoLayoutContext *_layoutContext;
    _Bool _dimmed;
    _Bool _darkUI;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool darkUI; // @synthesize darkUI=_darkUI;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void).cxx_destruct;
- (void)topBarStyledLabelDidBecomeNonempty:(id)arg1;
- (void)topBarStyledLabelDidBecomeEmpty:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)clearStrings;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (id)_defaultAttributeCollection;
- (void)_updateAttributes;
@property(copy, nonatomic) CDUnknownBlockType tertiaryTextProvider;
@property(copy, nonatomic) CDUnknownBlockType secondaryTextProvider;
@property(copy, nonatomic) CDUnknownBlockType primaryTextProvider;
- (id)_createConfiguredLabelInSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end