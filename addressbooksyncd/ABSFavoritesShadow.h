//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSFavoritesShadow : NSObject <ABSSyncStateMutable>
{
}

- (void)replaceObject:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)forEach:(CDUnknownBlockType)arg1;
- (id)getSyncObjectForDiffKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end