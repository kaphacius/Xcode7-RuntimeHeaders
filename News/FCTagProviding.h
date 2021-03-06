//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FCTagProviding <NSObject, NSCopying>
@property(readonly, nonatomic) NSNumber *score;
@property(readonly, nonatomic) NSArray *pinnedArticleIDs;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) NSArray *relatedChannelIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedTopicIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedChannelIDs;
@property(readonly, nonatomic) NSArray *relatedTopicIDs;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, copy, nonatomic) NSString *replacementID;
@property(readonly, nonatomic) _Bool isDeprecated;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, copy, nonatomic) NSString *versionKey;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly, nonatomic) unsigned long long tagType;
- (NSArray *)feedIDsForExploration;
- (NSString *)feedIDForHighlights;
- (NSArray *)availableBins;
- (NSString *)feedIDForBin:(unsigned long long)arg1;
- (_Bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (_Bool)isNoLongerAvailable;
- (_Bool)isAllowedStorefrontID:(NSString *)arg1;
@end