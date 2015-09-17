//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADSMSComposerJSO : ADJavaScriptObject <MFMessageComposeViewControllerDelegate, ADSMSComposerJSO_Bindings>
{
    NSArray *_messageRecipients;
    NSString *_messageBody;
    long long _attachmentDownloadCount;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (void)initializeInContext:(id)arg1;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(nonatomic) long long attachmentDownloadCount; // @synthesize attachmentDownloadCount=_attachmentDownloadCount;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSArray *messageRecipients; // @synthesize messageRecipients=_messageRecipients;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)presentComposer;
- (void)_presentController;
- (void)setAttachments:(id)arg1;
- (_Bool)canAttachMIMEType:(id)arg1;
@property(copy, nonatomic) NSString *body;
@property(retain, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) long long kADSMSComposerMaximumAttachmentBytes;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) JSValue *listener;
@property(readonly) Class superclass;

@end