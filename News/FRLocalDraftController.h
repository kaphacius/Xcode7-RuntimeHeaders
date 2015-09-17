//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRLocalDraftController : NSObject
{
    NSDictionary *_channelIdentifiers;
}

@property(retain) NSDictionary *channelIdentifiers; // @synthesize channelIdentifiers=_channelIdentifiers;
- (void).cxx_destruct;
- (void)refreshChannelIdentifiers;
- (id)localDraftPath;
- (void)reindexDraftsFolderOnDisk;
- (id)feedDescriptorForChannelIdentifier:(id)arg1 theme:(id)arg2 channel:(id)arg3;
- (_Bool)containsLocalDraftArticlesForChannelIdentifier:(id)arg1;
- (id)init;

@end