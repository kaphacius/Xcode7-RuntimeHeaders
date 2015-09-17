//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADAuthenticationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_pendingChallengesQueue;
}

+ (id)sharedInstance;
@property(nonatomic) NSObject<OS_dispatch_queue> *pendingChallengesQueue; // @synthesize pendingChallengesQueue=_pendingChallengesQueue;
- (void)promptForPasswordWithChallenge:(id)arg1 username:(id)arg2;
- (void)handleAuthenticationWithChallenge:(id)arg1 username:(id)arg2;
- (id)init;

@end