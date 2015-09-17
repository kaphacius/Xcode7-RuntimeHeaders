//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol BBObserverDelegate <NSObject>

@optional
- (struct CGSize)observer:(BBObserver *)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(NSString *)arg5;
- (UIImage *)observer:(BBObserver *)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(NSData *)arg3 key:(NSString *)arg4;
- (NSDictionary *)observer:(BBObserver *)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (BBThumbnailSizeConstraints *)observer:(BBObserver *)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(BBObserver *)arg1;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(BBObserver *)arg1;
- (void)observer:(BBObserver *)arg1 noteServerReceivedResponseForBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(BBObserver *)arg1 noteInvalidatedBulletinIDs:(NSSet *)arg2;
- (void)observer:(BBObserver *)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned long long)arg2;
- (void)observer:(BBObserver *)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(BBObserver *)arg1 purgeReferencesToBulletinID:(NSString *)arg2;
- (void)observer:(BBObserver *)arg1 noteSectionParametersChanged:(BBSectionParameters *)arg2 forSectionID:(NSString *)arg3;
- (void)observer:(BBObserver *)arg1 updateSectionInfo:(BBSectionInfo *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrder:(NSArray *)arg2;
- (void)observer:(BBObserver *)arg1 updateSectionOrderRule:(long long)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 removeBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2;
- (void)observer:(BBObserver *)arg1 modifyBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(BBObserver *)arg1 addBulletin:(BBBulletin *)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(void (^)(_Bool))arg5;
@end