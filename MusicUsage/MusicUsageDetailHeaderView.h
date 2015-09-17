//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MusicUsageDetailHeaderView : UIView <PSHeaderFooterView>
{
    PSSpecifier *_specifier;
    MusicUsageItem *_usageItem;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_sizeLabel;
    UILabel *_bottomLabel;
    UIView *_leadingView;
    NSArray *_imageSizeConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_subtitleLeadingConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
}

- (void).cxx_destruct;
- (void)_updateContents;
- (void)configureForSpecifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end