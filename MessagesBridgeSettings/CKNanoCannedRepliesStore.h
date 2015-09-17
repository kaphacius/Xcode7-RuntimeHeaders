//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CKNanoCannedRepliesStore : NSObject
{
    NPSManager *_npsManager;
    NPSDomainAccessor *_domainAccessor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void)_handleMessagesStoreChanged;
- (void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cannedRepliesForLanguage:(id)arg1;
- (id)customReplies;
- (id)_defaultRepliesWithFormat:(id)arg1 forLanguage:(id)arg2;
- (id)formalDefaultRepliesForLanguage:(id)arg1;
- (id)defaultRepliesForLanguage:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end