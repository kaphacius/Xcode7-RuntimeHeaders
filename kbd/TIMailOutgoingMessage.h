//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TIMailOutgoingMessage : NSObject <TILinguisticDataSourceMessage>
{
    NSDictionary *_searchResult;
}

@property(retain, nonatomic) NSDictionary *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, copy, nonatomic) NSString *recipient;
@property(readonly, copy, nonatomic) NSDate *dateSent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool fromMe;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end