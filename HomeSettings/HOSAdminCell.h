//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HOSAdminCell : HOSUserCell
{
    UILabel *_emailLabel;
}

@property(retain) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) UILabel *homeLabel;
@property(readonly, copy, nonatomic) UILabel *userLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end