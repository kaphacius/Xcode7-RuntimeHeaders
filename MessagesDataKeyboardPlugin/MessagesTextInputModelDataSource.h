//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MessagesTextInputModelDataSource : NSObject <TILinguisticDataSource>
{
    long long _currentMaxRow;
}

- (id)nextOutgoingMessageBatch;
- (unsigned int)lastDatabaseRowID;
- (unsigned int)nextRowID;
- (void)reset;
- (void)setNextRowID:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end