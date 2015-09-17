//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface QuotaInfoResponse : AAResponse
{
    _Bool _basicAccount;
    NSDictionary *_quotaInfoDict;
    NSDictionary *_storageInfo;
    NSDictionary *_accountStatus;
    NSDictionary *_urls;
    NSArray *_topToolbarItems;
    NSArray *_otherToolbarItems;
    _Bool _detailed;
    PSQuotaInfo *_quotaInfo;
}

@property(readonly, retain, nonatomic) PSQuotaInfo *quotaInfo; // @synthesize quotaInfo=_quotaInfo;
@property(readonly, nonatomic, getter=isDetailed) _Bool detailed; // @synthesize detailed=_detailed;
@property(readonly, nonatomic) NSDictionary *accountStatus; // @synthesize accountStatus=_accountStatus;
- (void).cxx_destruct;
- (_Bool)hasPurchasedMoreStorage;
- (id)storageFooter:(_Bool)arg1;
@property(readonly, nonatomic) NSString *availableStorageText;
- (unsigned long long)availableStorage;
- (unsigned long long)usedStorage;
@property(readonly, nonatomic) NSString *totalStorageText;
- (unsigned long long)totalStorage;
@property(readonly, nonatomic) NSString *appDetailsURLString;
@property(readonly, nonatomic) NSString *manageStorageURLString;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end