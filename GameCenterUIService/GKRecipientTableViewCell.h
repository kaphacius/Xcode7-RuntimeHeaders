//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKRecipientTableViewCell : UITableViewCell
{
    GKComposeRecipient *_recipient;
    GKLabel *_nameLabel;
    GKLabel *_labelLabel;
    GKLabel *_addressLabel;
}

+ (id)cellForRecipient:(id)arg1;
+ (id)identifier;
+ (float)height;
@property(retain, nonatomic) GKLabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) GKLabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GKComposeRecipient *recipient; // @synthesize recipient=_recipient;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end