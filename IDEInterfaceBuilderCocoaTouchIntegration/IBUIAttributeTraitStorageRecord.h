//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUIAttributeTraitStorageRecord : NSObject <IBBinaryArchiving>
{
    IBUITraitCollection *_traitCollection;
    NSObject<IBBinaryArchiving> *_value;
}

@property(readonly, copy, nonatomic) NSObject<IBBinaryArchiving> *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) IBUITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end