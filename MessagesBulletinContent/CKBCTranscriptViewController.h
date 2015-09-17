//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CKBCTranscriptViewController : CKBCNotificationViewController <CKBCTranscriptCollectionViewControllerDelegate>
{
    _Bool _dismissing;
    _Bool _longLookAnimationFinished;
    CKTranscriptCollectionViewController *_collectionViewController;
    IMMessageChatItem *_oldFirstBalloonChatItem;
}

@property(nonatomic) _Bool longLookAnimationFinished; // @synthesize longLookAnimationFinished=_longLookAnimationFinished;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(retain, nonatomic) IMMessageChatItem *oldFirstBalloonChatItem; // @synthesize oldFirstBalloonChatItem=_oldFirstBalloonChatItem;
@property(retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)_playMessageRecievedHaptic;
- (void)messageReceived:(id)arg1;
- (_Bool)isTranscriptScrolledToBottom;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 replyButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)senderTitle;
- (void)markAllMessagesAsRead;
- (void)scrollToNewContentIfNeeded;
- (void)didFinishAnimatingToLongLook;
- (id)headerBlurContentView;
- (_Bool)wantsHeaderBlur;
- (id)firstBalloonChatItem;
- (void)updateSiriContext;
- (void)updateSizeAndNotifyDelegate:(struct CGSize)arg1;
- (void)setupTranscriptCollectionView;
- (_Bool)isFirstBalloonText;
- (_Bool)shouldShowSenderInFirstBalloon;
- (void)reloadNotificationHeader;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1 forBulletins:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end