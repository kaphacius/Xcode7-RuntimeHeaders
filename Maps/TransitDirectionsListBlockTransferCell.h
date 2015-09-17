//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitDirectionsListBlockTransferCell : TransitDirectionsExpandCell
{
    NSLayoutConstraint *_stackViewLeadingToTransferLabelLeadingConstraint;
    NSLayoutConstraint *_artworkTrailingToTransferLabelLeadingConstraint;
    NSLayoutConstraint *_blockTransferShieldWidthConstraint;
    NSLayoutConstraint *_previousToTransferLabelConstraint;
    NSLayoutConstraint *_transferLabelLastBaselineToBottom;
    NSLayoutConstraint *_transferLabelFirstBaselineToArtworkBottomConstraint;
    NSLayoutConstraint *_transferLabelFirstBaselineToLinkViewTopConstraint;
    UIImageView *_blockTransferArtworkImageView;
    UILabel *_transferLabel;
    BlockTransferLinkView *_blockTransferLinkView;
}

@property(readonly, nonatomic) BlockTransferLinkView *blockTransferLinkView; // @synthesize blockTransferLinkView=_blockTransferLinkView;
@property(readonly, nonatomic) UILabel *transferLabel; // @synthesize transferLabel=_transferLabel;
@property(readonly, nonatomic) UIImageView *blockTransferArtworkImageView; // @synthesize blockTransferArtworkImageView=_blockTransferArtworkImageView;
- (void).cxx_destruct;
- (void)configureWithItem:(id)arg1;
- (id)_blockTransferFont;
- (void)_contentSizeCategoryDidChange;
- (double)_transferLabelToBottomDistance;
- (double)_transferLabelFirstBaselineToLinkViewTopConstraint;
- (double)_transferLabelFirstBaselineToBottomArtworkDistance;
- (double)_previousToTransferLabelDistance;
- (void)updateConstraints;
- (id)_initialConstraints;
- (void)_createSubviews;
@property(readonly, nonatomic) TransitDirectionsListBlockTransfer *blockTransfer;

@end