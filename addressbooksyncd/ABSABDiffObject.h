//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSABDiffObject : NSObject <ABSDiffableObject>
{
    ABSABPortableKey *_portableKey;
    unsigned long long _hashVal;
}

@property(readonly, nonatomic) unsigned long long hashVal; // @synthesize hashVal=_hashVal;
@property(readonly, nonatomic) ABSABPortableKey *portableKey; // @synthesize portableKey=_portableKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)createProtobuf;
- (id)syncId;
- (_Bool)matches:(id)arg1;
- (id)initWithKey:(id)arg1 hash:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end