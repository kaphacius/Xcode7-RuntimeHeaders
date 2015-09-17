//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNBannerTrafficAlertView : MNBannerView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MNStarkBannerViewButton *_actionButton;
    NSMutableArray *_layoutConstraints;
    struct {
        double titleFontSize;
        double subtitleFontSize;
        double rgbColorText[3];
        double sideMargin;
        double gutterWidth;
        struct CGSize imageSize;
        double imageTopMargin;
        struct CGSize actionButtonSize;
        double actionButtonTopMargin;
        double baselineMarginTitleToTop;
        double baselineMarginSubtitleToTitle;
        double baselineMarginBottomToText;
    } _bannerTrafficAlertViewMetrics;
}

- (void).cxx_destruct;
- (void)updateFromBannerItem;
@property(readonly, nonatomic) MNTrafficAlertBannerItem *trafficAlertBannerItem;
- (void)_resetConstraints;
- (id)_makeLabelWithFont:(id)arg1 style:(id)arg2;
- (id)_makeMapsIconImageView;
- (id)_makeActionButton;
- (id)initWithContext:(id)arg1;
@property(readonly) _Bool isCarPlay;
@property(readonly) _Bool isNightMode;

@end