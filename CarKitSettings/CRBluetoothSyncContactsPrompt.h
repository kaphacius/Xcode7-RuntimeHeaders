//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRBluetoothSyncContactsPrompt : NSObject
{
    CDUnknownBlockType _contactsApprovalCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType contactsApprovalCompletion; // @synthesize contactsApprovalCompletion=_contactsApprovalCompletion;
- (void).cxx_destruct;
- (void)_handleContactsApprovalCompleted:(_Bool)arg1;
- (void)presentSyncContactsAlertFromViewController:(id)arg1;

@end