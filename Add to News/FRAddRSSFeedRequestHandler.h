//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRAddRSSFeedRequestHandler : NSObject <NSExtensionRequestHandling>
{
    FRFileCoordinatedAddRSSDictionary *_fileCoordinatedAccountActionQueue;
}

@property(retain, nonatomic) FRFileCoordinatedAddRSSDictionary *fileCoordinatedAccountActionQueue; // @synthesize fileCoordinatedAccountActionQueue=_fileCoordinatedAccountActionQueue;
- (void).cxx_destruct;
- (void)_saveRSSFeedRequestWithTitle:(id)arg1 url:(id)arg2 context:(id)arg3;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end