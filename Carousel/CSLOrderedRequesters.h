//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLOrderedRequesters : NSObject
{
    NSMutableArray *_requesters;
}

- (void).cxx_destruct;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1;
- (_Bool)containsRequester:(id)arg1;
- (id)requesters;
- (id)frontmostRequester;
- (id)init;

@end