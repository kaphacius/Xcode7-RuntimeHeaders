//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HOSInvitationCell : HOSSubtitleCell
{
    HMIncomingHomeInvitation *_invitation;
    UILabel *_statusLabel;
    UIButton *_acceptButton;
    UIButton *_declineButton;
}

@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) HMIncomingHomeInvitation *invitation; // @synthesize invitation=_invitation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)_hasButtons;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)didTapDecline:(id)arg1;
- (void)didTapAccept:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end