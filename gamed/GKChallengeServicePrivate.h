//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKChallengeServicePrivate : GKChallengeService <GKChallengeServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;
+ (Class)interfaceClass;
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end