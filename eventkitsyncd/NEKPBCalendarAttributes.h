//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKPBCalendarAttributes : PBCodable <NSCopying>
{
    unsigned long long _invitationStatus;
    unsigned long long _sharingInvitationResponse;
    unsigned long long _sharingStatus;
    unsigned long long _supportedEntityTypes;
    NSString *_colorString;
    NSData *_digest;
    int _displayOrder;
    NSString *_externalID;
    NSString *_externalIdentificationTag;
    NSString *_externalModificationTag;
    NSData *_externalRepresentation;
    NSString *_notes;
    NSString *_ownerIdentityAddressString;
    NSString *_ownerIdentityDisplayName;
    NSString *_ownerIdentityEmail;
    NSString *_ownerIdentityFirstName;
    NSString *_ownerIdentityLastName;
    NSString *_publishedURLString;
    NSString *_pushKey;
    NSString *_selfIdentityAddressString;
    NSString *_selfIdentityDisplayName;
    NSString *_selfIdentityEmail;
    NSString *_selfIdentityFirstName;
    NSString *_selfIdentityLastName;
    NSString *_sharedOwnerAddress;
    NSString *_sharedOwnerName;
    NSString *_subCalAccountID;
    NSString *_symbolicColorName;
    NSString *_syncToken;
    NSString *_title;
    NSString *_type;
    NSString *_uUID;
    _Bool _canBePublished;
    _Bool _canBeShared;
    _Bool _hasBeenAlerted;
    _Bool _isDefaultCalendarForStore;
    _Bool _isFamilyCalendar;
    _Bool _isHidden;
    _Bool _isHolidayCalendar;
    _Bool _isIgnoringEventAlerts;
    _Bool _isIgnoringSharedCalendarNotifications;
    _Bool _isImmutable;
    _Bool _isInbox;
    _Bool _isNotificationsCollection;
    _Bool _isPublished;
    _Bool _isReadonly;
    _Bool _isSchedulingProhibited;
    _Bool _isSharingInvitation;
    _Bool _isSubscribed;
    struct {
        unsigned int invitationStatus:1;
        unsigned int sharingInvitationResponse:1;
        unsigned int sharingStatus:1;
        unsigned int supportedEntityTypes:1;
        unsigned int displayOrder:1;
        unsigned int canBePublished:1;
        unsigned int canBeShared:1;
        unsigned int hasBeenAlerted:1;
        unsigned int isDefaultCalendarForStore:1;
        unsigned int isFamilyCalendar:1;
        unsigned int isHidden:1;
        unsigned int isHolidayCalendar:1;
        unsigned int isIgnoringEventAlerts:1;
        unsigned int isIgnoringSharedCalendarNotifications:1;
        unsigned int isImmutable:1;
        unsigned int isInbox:1;
        unsigned int isNotificationsCollection:1;
        unsigned int isPublished:1;
        unsigned int isReadonly:1;
        unsigned int isSchedulingProhibited:1;
        unsigned int isSharingInvitation:1;
        unsigned int isSubscribed:1;
    } _has;
}

@property(retain, nonatomic) NSString *ownerIdentityLastName; // @synthesize ownerIdentityLastName=_ownerIdentityLastName;
@property(retain, nonatomic) NSString *ownerIdentityFirstName; // @synthesize ownerIdentityFirstName=_ownerIdentityFirstName;
@property(retain, nonatomic) NSString *ownerIdentityAddressString; // @synthesize ownerIdentityAddressString=_ownerIdentityAddressString;
@property(retain, nonatomic) NSString *ownerIdentityEmail; // @synthesize ownerIdentityEmail=_ownerIdentityEmail;
@property(retain, nonatomic) NSString *ownerIdentityDisplayName; // @synthesize ownerIdentityDisplayName=_ownerIdentityDisplayName;
@property(retain, nonatomic) NSString *selfIdentityLastName; // @synthesize selfIdentityLastName=_selfIdentityLastName;
@property(retain, nonatomic) NSString *selfIdentityFirstName; // @synthesize selfIdentityFirstName=_selfIdentityFirstName;
@property(retain, nonatomic) NSString *selfIdentityAddressString; // @synthesize selfIdentityAddressString=_selfIdentityAddressString;
@property(retain, nonatomic) NSString *selfIdentityEmail; // @synthesize selfIdentityEmail=_selfIdentityEmail;
@property(retain, nonatomic) NSString *selfIdentityDisplayName; // @synthesize selfIdentityDisplayName=_selfIdentityDisplayName;
@property(retain, nonatomic) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(retain, nonatomic) NSString *subCalAccountID; // @synthesize subCalAccountID=_subCalAccountID;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) _Bool hasBeenAlerted; // @synthesize hasBeenAlerted=_hasBeenAlerted;
@property(nonatomic) unsigned long long invitationStatus; // @synthesize invitationStatus=_invitationStatus;
@property(nonatomic) unsigned long long supportedEntityTypes; // @synthesize supportedEntityTypes=_supportedEntityTypes;
@property(retain, nonatomic) NSData *externalRepresentation; // @synthesize externalRepresentation=_externalRepresentation;
@property(retain, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag=_externalModificationTag;
@property(retain, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(retain, nonatomic) NSString *externalIdentificationTag; // @synthesize externalIdentificationTag=_externalIdentificationTag;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) _Bool isPublished; // @synthesize isPublished=_isPublished;
@property(nonatomic) _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) _Bool canBePublished; // @synthesize canBePublished=_canBePublished;
@property(retain, nonatomic) NSString *publishedURLString; // @synthesize publishedURLString=_publishedURLString;
@property(nonatomic) unsigned long long sharingInvitationResponse; // @synthesize sharingInvitationResponse=_sharingInvitationResponse;
@property(retain, nonatomic) NSString *sharedOwnerAddress; // @synthesize sharedOwnerAddress=_sharedOwnerAddress;
@property(retain, nonatomic) NSString *sharedOwnerName; // @synthesize sharedOwnerName=_sharedOwnerName;
@property(nonatomic) unsigned long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(nonatomic) int displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSString *colorString; // @synthesize colorString=_colorString;
@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
@property(retain, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool isDefaultCalendarForStore; // @synthesize isDefaultCalendarForStore=_isDefaultCalendarForStore;
@property(nonatomic) _Bool isSchedulingProhibited; // @synthesize isSchedulingProhibited=_isSchedulingProhibited;
@property(nonatomic) _Bool isIgnoringSharedCalendarNotifications; // @synthesize isIgnoringSharedCalendarNotifications=_isIgnoringSharedCalendarNotifications;
@property(nonatomic) _Bool isIgnoringEventAlerts; // @synthesize isIgnoringEventAlerts=_isIgnoringEventAlerts;
@property(nonatomic) _Bool isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property(nonatomic) _Bool isHolidayCalendar; // @synthesize isHolidayCalendar=_isHolidayCalendar;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) _Bool isSharingInvitation; // @synthesize isSharingInvitation=_isSharingInvitation;
@property(nonatomic) _Bool isNotificationsCollection; // @synthesize isNotificationsCollection=_isNotificationsCollection;
@property(nonatomic) _Bool isInbox; // @synthesize isInbox=_isInbox;
@property(nonatomic) _Bool isImmutable; // @synthesize isImmutable=_isImmutable;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isReadonly; // @synthesize isReadonly=_isReadonly;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *uUID; // @synthesize uUID=_uUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOwnerIdentityLastName;
@property(readonly, nonatomic) _Bool hasOwnerIdentityFirstName;
@property(readonly, nonatomic) _Bool hasOwnerIdentityAddressString;
@property(readonly, nonatomic) _Bool hasOwnerIdentityEmail;
@property(readonly, nonatomic) _Bool hasOwnerIdentityDisplayName;
@property(readonly, nonatomic) _Bool hasSelfIdentityLastName;
@property(readonly, nonatomic) _Bool hasSelfIdentityFirstName;
@property(readonly, nonatomic) _Bool hasSelfIdentityAddressString;
@property(readonly, nonatomic) _Bool hasSelfIdentityEmail;
@property(readonly, nonatomic) _Bool hasSelfIdentityDisplayName;
@property(readonly, nonatomic) _Bool hasPushKey;
@property(readonly, nonatomic) _Bool hasSubCalAccountID;
@property(readonly, nonatomic) _Bool hasNotes;
@property(nonatomic) _Bool hasHasBeenAlerted;
@property(nonatomic) _Bool hasInvitationStatus;
@property(nonatomic) _Bool hasSupportedEntityTypes;
@property(readonly, nonatomic) _Bool hasExternalRepresentation;
@property(readonly, nonatomic) _Bool hasExternalModificationTag;
@property(readonly, nonatomic) _Bool hasSyncToken;
@property(readonly, nonatomic) _Bool hasExternalIdentificationTag;
@property(readonly, nonatomic) _Bool hasExternalID;
@property(nonatomic) _Bool hasIsPublished;
@property(nonatomic) _Bool hasCanBeShared;
@property(nonatomic) _Bool hasCanBePublished;
@property(readonly, nonatomic) _Bool hasPublishedURLString;
@property(nonatomic) _Bool hasSharingInvitationResponse;
@property(readonly, nonatomic) _Bool hasSharedOwnerAddress;
@property(readonly, nonatomic) _Bool hasSharedOwnerName;
@property(nonatomic) _Bool hasSharingStatus;
@property(nonatomic) _Bool hasDisplayOrder;
@property(readonly, nonatomic) _Bool hasColorString;
@property(readonly, nonatomic) _Bool hasSymbolicColorName;
@property(readonly, nonatomic) _Bool hasDigest;
@property(readonly, nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasIsDefaultCalendarForStore;
@property(nonatomic) _Bool hasIsSchedulingProhibited;
@property(nonatomic) _Bool hasIsIgnoringSharedCalendarNotifications;
@property(nonatomic) _Bool hasIsIgnoringEventAlerts;
@property(nonatomic) _Bool hasIsFamilyCalendar;
@property(nonatomic) _Bool hasIsHolidayCalendar;
@property(nonatomic) _Bool hasIsSubscribed;
@property(nonatomic) _Bool hasIsSharingInvitation;
@property(nonatomic) _Bool hasIsNotificationsCollection;
@property(nonatomic) _Bool hasIsInbox;
@property(nonatomic) _Bool hasIsImmutable;
@property(nonatomic) _Bool hasIsHidden;
@property(nonatomic) _Bool hasIsReadonly;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasUUID;

@end