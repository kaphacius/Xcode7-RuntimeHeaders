//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AdaptivePresenterChoice : NSObject <AdaptivePresenterChoice>
{
    _Bool _opaque;
    id <TraitsCondition> _key;
    CDUnknownBlockType _creationBlock;
}

@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(readonly, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, nonatomic) id <TraitsCondition> key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)_privateKey;
- (id)initWithKey:(id)arg1 opaque:(_Bool)arg2 creationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end