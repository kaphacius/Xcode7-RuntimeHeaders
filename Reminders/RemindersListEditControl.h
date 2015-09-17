//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersListEditControl : UIControl
{
    UILabel *_label;
    UIView *_dividerLine;
    UIImageView *_chevronImageView;
    id <RemindersListEditControlDelegate> _delegate;
    NSLayoutConstraint *_baselineConstraint;
    _Bool _needsSetup;
    double _desiredHeight;
}

@property _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(retain, nonatomic) id <RemindersListEditControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_touchUpOutside;
- (void)_touchUpInside;
- (void)_touchDown;
- (void)fontSizeChanged;
- (void)setupConstraints;
- (void)setupWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end