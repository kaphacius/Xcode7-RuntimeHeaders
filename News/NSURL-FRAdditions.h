//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSURL (FRAdditions)
+ (id)fr_feldsparURLForWebLinkURL:(id)arg1;
+ (id)fr_feldsparInternalURLForTagID:(id)arg1;
+ (id)fr_feldsparURLForTagID:(id)arg1;
+ (id)fr_feldsparURLForArticleID:(id)arg1;
+ (id)fr_feldsparURLWithPathComponents:(id)arg1 internal:(_Bool)arg2;
- (id)fr_podcastRepresentation;
- (id)fr_httpsRepresentation;
- (id)fr_httpRepresentation;
- (id)_fr_representationWithScheme:(id)arg1;
- (id)fr_iAdCampaignID;
- (id)fr_feldsparWebLinkURL;
- (id)fr_feldsparTagID;
- (id)fr_feldsparArticleID;
- (void)fr_getPreviewChannelIdentifier:(id *)arg1 articleIdentifier:(id *)arg2;
- (_Bool)fr_isPreviewURL;
- (_Bool)fr_isRSSFeedURL;
- (_Bool)fr_isiAdOriginatedURL;
- (_Bool)fr_isOPMLFileURL;
- (_Bool)fr_isFeldsparWebLinkURL;
- (_Bool)_isFeldsparOldChannelURL;
- (_Bool)_isFeldsparOldTopicURL;
- (_Bool)_isFeldsparOldArticleURL;
- (_Bool)fr_isFeldsparTagURL;
- (_Bool)fr_isFeldsparArticleURL;
- (_Bool)fr_isFeldsparInternalURL;
- (_Bool)fr_isFeldsparURL;
@end